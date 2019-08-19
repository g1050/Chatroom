#ifndef FILECHAT_
#define FILECHAT_

typedef struct file
{
    int flag;
    int sender;
    int receiver;
    int size;
    char name[100];
    char data[800];
}file;

void Recv_file(int fd,char *buf);
#endif