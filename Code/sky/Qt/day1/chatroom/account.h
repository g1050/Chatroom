#ifndef COMMON_H
#define COMMON_H
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

#define LISTENQ 12                    //连接请求队列的最大长度
#define SERV_ADDRESS  "127.0.0.1"
#define EPOLL_SIZE    5000
#define SERV_PORT    4507
#define EPOLLEVENTS 100
#define MAXSIZE     1024
#define FDSIZE      1000
#define REGISTER 1
#define LOGIN        2









//void my_err(char *s,int line);
//void connect();

#endif
