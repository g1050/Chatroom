#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <list>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/epoll.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <QString>
#include <QMessageBox>
#define LISTENQ 12                    //连接请求队列的最大长度
#define SERV_ADDRESS  "127.0.0.1"
#define EPOLL_SIZE    5000
#define SERV_PORT    4507
#define EPOLLEVENTS 100
#define MAXSIZE     1024
#define FDSIZE      1000
#define REGISTER 1
#define LOGIN        2

extern int listenfd;

//消息结构体
typedef struct message
{
    int flag;
    char mg[256];
}message;

//账户信息结构体
typedef struct  account
{
    int flag;
    int  username;
    char passwd[30];
    char nickname[30];
}account;





void my_err(char *s,int line);
void connect();
void QStringtochar(char *str,QString string);
void Send_message(int fd,int flag ,char *buf);
void add_event(int epollfd,int fd,int state);
#endif
