
#include "common.h"
#include "pvachat.h"
#include "account.h"
#include "grpchat.h"
#include "filechat.h"

//全局变量
MYSQL *con = mysql_init(NULL);
onlion_list_t list;

//自定义错误处理函数
void my_err(const char *s,int line)
{
    fprintf(stderr,"line:%d",line);
    perror(s);
}

void add_node(int fd,int username)
{
    onlion_list_t p = (onlion_list_t)malloc(sizeof(onlion_node_t));
    p->data.fd = fd;
    p->data.username = username;
    List_AddTail(list,p);
    return ;
}

void delete_node(int fd)
{
    onlion_list_t p;
    List_ForEach(list,p){
        if(p->data.fd == fd){
            List_FreeNode(p);
            return ;
        }
    }
    printf("删除在线账号异常\n");
}

int get_username(int fd)
{
    onlion_list_t p;
    List_ForEach(list,p){
        if(p->data.fd == fd){
            return p->data.username;
        }
    }
    printf("查找在线账号异常\n");
}

int getfd(int username)
{
    onlion_list_t p;
    List_ForEach(list,p){
        if(p->data.username == username){
            printf("找到套接字");
            return p->data.fd;
        }
    }
    return -1;
    //printf("查找在线账号套接字异常\n");
}

//0表示离线，1表示在线
int getstatus(int username)
{
    onlion_list_t p;
    List_ForEach(list,p){
        if(p->data.username == username){
            return 1;
        }
    }
    return 0;
}
void Send_message(int fd,int flag ,char *buf)
{
    char s[MAXSIZE];
    message msg;
    msg.flag = flag;
    strcpy(msg.mg,buf);
    memcpy(s,&msg,sizeof(msg));
    int nwrite = send(fd,s,MAXSIZE,0);
    if(nwrite == -1){
        my_err("发送失败",__LINE__);
        close(fd);
    }
    return ;
}

int Send_cmessage(int flag ,int recvfd,char *buf)
{
    int nwrite = send(recvfd,buf,MAXSIZE,0);
    if(nwrite == -1){
        my_err("发送失败",__LINE__);
    }
    return 1;
}

void finish_with_error(MYSQL *con)
{
    fprintf(stderr,"%s\n",mysql_error(con));
    mysql_close(con);
    return ;
}

int Send_srmessage(int flag ,int receiver,int sender,char *buf)
{
    int recvfd = getfd(receiver); 
    char s[MAXSIZE];
    chat_message msg;
    msg.flag = flag;
    strcpy(msg.mg,buf);
    msg.sender = sender;
    msg.receiver = receiver;
    memcpy(s,&msg,sizeof(msg));
    int nwrite = send(recvfd,s,MAXSIZE,0);
    if(nwrite == -1){
        my_err("发送失败",__LINE__);
    }
    return 1;
}

//创建套接字并进行绑定,返回新创建的套接字文件描述符
int socket_bind(char *ip,int port)
{
    int listenfd;
    struct sockaddr_in servaddr;
    listenfd = socket(AF_INET,SOCK_STREAM,0);//获取新创建的套接字的文件描述符
    if(listenfd == -1)
        my_err("套接字创建失败",__LINE__);

    //设置套接字使其可以重新绑定端口
    int optval = 1;
    if(setsockopt(listenfd,SOL_SOCKET,SO_REUSEADDR,(void *)&optval,sizeof(int)) < 0){
        my_err("设置套接字失败",__LINE__);
    }

    bzero(&servaddr,sizeof(servaddr)); //初始化套接字地址结构体
    servaddr.sin_family = AF_INET;
    inet_pton(AF_INET,ip,&servaddr.sin_addr);
    servaddr.sin_port = htons(port);
    if(bind(listenfd,(struct sockaddr*)&servaddr,sizeof(servaddr)) == -1)
        my_err("套接字绑定端口失败",__LINE__);
    return listenfd;
}


void Connect_Database(MYSQL *con)
{
    if(con == NULL) 
        finish_with_error(con);   
    if(mysql_real_connect(con,"localhost","root","2422503084.","chatroom",0,NULL,0) == NULL) 
        finish_with_error(con);
    else printf("成功连接到数据库\n");
    List_Init(list,onlion_node_t);
    return ;
}
//添加事件,将监听套接字加入epoll事件
void add_event(int epollfd,int fd,int state)
{
    struct epoll_event ev;
    ev.events = state;//事件类型设置为可读事件
    ev.data.fd = fd;//一定要有

    /* 如果是ET模式，设置EPOLLET */
    // if (epoll_type == EPOLL_ET)
    //  ev.events |= EPOLLET;默认是LT模式?

    epoll_ctl(epollfd,EPOLL_CTL_ADD,fd,&ev);//事件注册函数
    return ;
}

//处理接收到的连接
void handle_accept(int epollfd,int listenfd)
{
    int clifd;//客户端套接字描述符
    struct sockaddr_in cliaddr; //客户端地址
    socklen_t cliaddrlen = sizeof(struct sockaddr_in);

    clifd = accept(listenfd,(struct sockaddr*)&cliaddr,&cliaddrlen); //接受连接请求
    if(clifd == -1){
        printf("连接失败line:%d\n",__LINE__);
    }
    else  {
        printf("连接到新的客户端IP:%s  端口:%d\n",inet_ntoa(cliaddr.sin_addr),cliaddr.sin_port);
        //添加一个客户端描述符事件,添加到内核监听事件中
        add_event(epollfd,clifd,EPOLLIN);//后面这个客户端套接字有事件发生时会在handle_events根据类型处理这个事件

       //Send_message(clifd,0,"Welcome");
    }
    
    return ;
}

void do_read(int epollfd,int fd,int sockfd,char *buf)//fd表示待处理事件的描述符
{
    
     printf("处理读事件\n");
    int nread;
    nread = recv(fd,buf,MAXSIZE,MSG_WAITALL);
    if(nread == -1){
        fprintf(stderr,"客户端[%d]关闭\n",fd);
        delete_node(fd);
        //my_err("客户端",__LINE__);
        close(fd);
    }
    else if(nread == 0){
        fprintf(stderr,"客户端[%d]关闭\n",fd);
        delete_node(fd);
        close(fd);
        return ;
    }

     int choice = 0;
    memcpy(&choice,buf,4);
    printf("choice = %d\n",choice);
    switch(choice)
    {
        case 1://注册账户
            Acount_register(fd,buf);
            break;
        case 2://账户验证
            Account_veri(fd,buf);
            break;
        case 4://密保问题验证
            Question_veri_persist(fd,buf);
            break;
        case 6://添加好友
            Add_friend(fd,buf);
            break;
        case 7://接受实时聊天信息
            Receive_message(fd,buf);
            break;
        case 8://好友请求接受
            Add_friend_receipt(fd,buf);
            break;
        case 9://获取好友列表以及好友状态
            Show_friend(fd,buf);
            break;
        case 11://删除好友
            Delete_friend(fd,buf);
            break;
        case 12://屏蔽好友
            Shield_frinend(fd,buf);
            break;
        case 13://解除屏蔽
            Relieve_friend(fd,buf);
            break;
        case 15://查询聊天记录
            Query_message(fd,buf);
            break;
        case 17://创建群请求
            Creat_grp(fd,buf);
            break;
        case 18://请求加群
            Add_grp(fd,buf);
            break;
        case 19://请求加群回执
            Add_group_receipt(fd,buf);
            break;
        case 21://群消息广播给群成员
            Broadcast_grpmsg(fd,buf);
            break;
        case 22://查看已加群
            Show_grp(fd,buf);
            break;
        case 23://退出群
            Delete_grp(fd,buf);
            break;
        case 24://发送文件
            Recv_file(fd,buf);
            break;
        case 25://查询群聊天记录
            Query_grpmsg(fd,buf);
            break;
    
            


    }
    return ;
}

void do_write(int epollfd,int fd,int sockfd,char *buf)
{
    printf("处理写事件\n");
    int nwrite;
    nwrite = send(fd,buf,strlen(buf),0);
    if(nwrite == -1){
        my_err("写事件处理错误",__LINE__);
        close(fd);
    }
    else{
        printf("发送消息成功\n");
    }
    memset(buf,0,MAXSIZE);
}

void do_epoll(int listenfd)
{
    int epfd;
    struct epoll_event events[EPOLLEVENTS];//注册所感兴趣的事件和回传发生的待处理的事件
    int ret;//return 
    char buf[MAXSIZE];//缓冲区
    memset(buf,0,sizeof(buf));

    //创建一个描述符
    epfd = epoll_create(FDSIZE);//创建一个epoll的句柄，size用来告诉内核这个监听的数目一共有多大,后面需要close关闭
    if(epfd < 0) my_err("epoll创建失败",__LINE__);
    else printf("epoll[%d]创建成功\n",epfd);

    //向内核添加监听描述符事件,并设置非阻塞监听
    add_event(epfd,listenfd,EPOLLIN);

    //获取已经准备好的描述符事件,主循环
    while(1) {
        int epoll_event_count = epoll_wait(epfd,events,EPOLLEVENTS,-1);//等待事件发生,ret表示需要处理的事件数目
        if(epoll_event_count < 0) my_err("需要处理事件异常",__LINE__);//<0的时候出错
            for(int i = 0;i < epoll_event_count;i++ ){

                int fd = events[i].data.fd;//根据事件类型做相应的处理

                //根据文件描述符类型和事件类型进行处理
                if((fd == listenfd) && (events[i].events & EPOLLIN))//事件为服务端监听套接字说明是连接请求
                    handle_accept(epfd,listenfd);
                //处理读写事件
                else if(events[i].events & EPOLLIN) 
                    do_read(epfd,fd,listenfd,buf);
                else if(events[i].events & EPOLLOUT) 
                    do_write(epfd,fd,listenfd,buf);
                    }
        }

    close(epfd);//!!!
}
