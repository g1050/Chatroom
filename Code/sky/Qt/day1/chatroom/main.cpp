#include "login.h"
#include <QApplication>
#include "regist.h"
#include "account.h"
#include "common.h"
extern int listenfd;
int main(int argc, char *argv[])
{
    connect();
    QApplication a(argc, argv);

    login w;
    //regist m;
    //m.show();
    w.show();

    return a.exec();
}
