#include "common.h"
#include <stdio.h>
#include <QMessageBox>
#include "login.h"
int listenfd;

//自定义错误处理函数
void my_err(char *s,int line)
{
//    char str[MAXSIZE];
//    sprintf(str,"%s:[line:%d]",s,line);
//   QMessageBox::critical(this,"确认信息","请保证两次输入密码一致","确定","取消");
    fprintf(stderr,"line:%d",line);
    perror(s);
    exit(1);
}
void QStringtochar(char *str,QString string)
{
    QByteArray ba = string.toLatin1();
    strcpy(str,ba.data());
    return ;
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

//创建套接字并进行连接,返回新创建的套接字文件描述符
int socket_connect(char *ip,int port)
{
    int listenfd;
    struct sockaddr_in servaddr;
    listenfd = socket(AF_INET,SOCK_STREAM,0);//获取新创建的套接字的文件描述符
    if(listenfd == -1) {

        my_err("套接字创建失败",__LINE__);
    }
    bzero(&servaddr,sizeof(servaddr)); //初始化套接字地址结构体
    servaddr.sin_family = AF_INET;
    inet_pton(AF_INET,ip,&servaddr.sin_addr);
    servaddr.sin_port = htons(port);

    if(connect(listenfd,(struct sockaddr*)&servaddr,sizeof(servaddr)) < 0){
        my_err("连接失败",__LINE__);
    }
    else
        printf("成功连接至服务器。。。\n");
    return listenfd;
}

//添加事件
void add_event(int epollfd,int fd,int state)
{
    struct epoll_event ev;
    ev.events = state;
    ev.data.fd = fd;
    epoll_ctl(epollfd,EPOLL_CTL_ADD,fd,&ev);//事件注册函数
    return ;
}

int Account_veri(char *buf)
{
    message msg;
    memcpy(&msg,buf,sizeof(msg));
    if(!strcmp(msg.mg,"Y")){
        printf("success\n");
    }else{
        printf("failes\n");
        //QMessageBox::critical(this,"注册成功","账号或密码错误","确定","取消");
    }
}

//处理读请求的事件
void do_read(int epollfd,int fd,int sockfd,char *buf)//fd表示待处理事件的描述符
{
    printf("处理读事件\n");
    int ret;
    ret = recv(fd,buf,MAXSIZE,MSG_WAITALL);
    if(ret == -1){
        my_err("读事件处理错误",__LINE__);
        close(fd);
    }
    else if(ret == 0){
        fprintf(stderr,"服务器关闭\n");
        close(fd);
    }

    int choice;
    memcpy(&choice,buf,4);
    printf("choice = %d\n",choice);
    switch(choice)
    {
        case 0:
            break;
        case 2:
            Account_veri(buf);
            break;
    }



    memset(buf,0,MAXSIZE);
    return ;
}

void *do_epoll(void *arg)
{
    int epfd;
    struct epoll_event events[EPOLLEVENTS];
    char buf[MAXSIZE];
    int ret;

    epfd = epoll_create(FDSIZE);
    add_event(epfd,listenfd,EPOLLIN);

    //获取已经准备好的描述符事件,主循环
    while(1) {
        int epoll_event_count = epoll_wait(epfd,events,EPOLLEVENTS,-1);//等待事件发生,ret表示需要处理的事件数目
        if(epoll_event_count < 0) my_err("需要处理事件异常",__LINE__);//<0的时候出错
            for(int i = 0;i < epoll_event_count;i++ ){

                int fd = events[i].data.fd;//根据事件类型做相应的处理

                //只处理读写事件
                if(events[i].events & EPOLLIN)
                    do_read(epfd,fd,listenfd,buf);
             }
    }
    close(epfd);
    return NULL;
}

void connect()
{

    pthread_mutex_t lock_login;
    pthread_cond_t  cond_login;
    int flag_login  = 0;

    pthread_t thid;
    pthread_mutex_init(&lock_login,NULL);
    pthread_cond_init(&cond_login,NULL);
    listenfd = socket_connect(SERV_ADDRESS,SERV_PORT);

//    创建子线程专门接受消息
        if(pthread_create(&thid,NULL,do_epoll,NULL) != 0){
            my_err("创建线程失败",__LINE__);
        }

}
