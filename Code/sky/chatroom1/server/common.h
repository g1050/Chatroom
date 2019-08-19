#ifndef COMMON_H_
#define COMMON_H_

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
#include <my_global.h>
#include <mysql.h>
#include "./List.h"

#define LISTENQ 12                    //连接请求队列的最大长度
#define SERV_ADDRESS  "0.0.0.0"
#define EPOLL_SIZE    5000
#define SERV_PORT    4507    
#define EPOLLEVENTS 100
#define MAXSIZE     1024
#define FDSIZE      1000
#define REGISTER 1
#define LOGIN        2

typedef struct onlion_t
{
    int fd;
    int username;
}onlion_t;

typedef struct onlion_node_t
{
    onlion_t data;
    struct onlion_node_t *prev;
    struct onlion_node_t *next;
}onlion_node_t;

typedef onlion_node_t* onlion_list_t;

typedef struct union_account
{
    int flag;//3密保问题
    int username;
    char passwd[30];
    char nickname[30];
    char  phonenum[18];
    char home[256];
    
}union_account;

//消息结构体
typedef struct message
{
    int flag;
    char mg[256];
}message;

//密保问题结构体
typedef struct security_question
{
    int flag;//3密保问题
    int username;
    char  phonenum[18];
    char home[256];
    char newpasswd[30];
}security_question;

//账号信息结构体
typedef struct  account
{
    int flag;
    int  username;
    char passwd[30];
    char nickname[30];
}account;

typedef struct chat_message
{
    int flag;
    char mg[256];
    int sender;
    int receiver;
}chart_message;

typedef struct friend_status
{
    int flag;
    int username;
    int status;
}friend_status;

//全局变量
extern MYSQL *con;
extern onlion_list_t list;

void my_err(const char *s,int line);

void add_node(int fd,int username);

void delete_node(int fd);

void Send_message(int fd,int flag ,char *buf);

int Send_cmessage(int flag ,int recvfd,char *buf);

int get_username(int fd);

int getfd(int username);

int getstatus(int username);

void finish_with_error(MYSQL *con);

//创建套接字并进行绑定,返回新创建的套接字文件描述符
int socket_bind(char *ip,int port);

void Connect_Database(MYSQL *con);

//添加事件,将监听套接字加入epoll事件
void add_event(int epollfd,int fd,int state);

//处理接收到的连接
void handle_accept(int epollfd,int listenfd);

void do_epoll(int listenfd);

void do_write(int epollfd,int fd,int sockfd,char *buf);

void do_read(int epollfd,int fd,int sockfd,char *buf);//fd表示待处理事件的描述符;

int Send_srmessage(int flag ,int receiver,int sender,char *buf);
#endif
 //COMMON_H_