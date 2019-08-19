#include "filechat.h"
#include "common.h"

void Recv_file(int fd,char *buf)
{
    file f;
    memcpy(&f,buf,sizeof(f));

    printf("name = %s\n",f.name);
    printf("receiver = %d\n",f.receiver);
    printf("sender = %d\n",f.sender);
    printf("size = %d\n",f.size);
    //得到好友套接自
    int fd2 = getfd(f.receiver);
    //向好友转发
    send(fd2,buf,MAXSIZE,0);
    
    return ;
}