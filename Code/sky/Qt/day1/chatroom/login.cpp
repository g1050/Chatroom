#include "login.h"
#include "regist.h"
#include "ui_login.h"
#include <QString>
#include <QDebug>
#include "common.h"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    QString username = this->ui->le_username->text();
    QString passwd = this->ui->le_passwd->text();
    account ac;
    ac.flag = 2;
    ac.username = username.toInt();
    QStringtochar(ac.passwd,passwd);
    char str[MAXSIZE];
    memcpy(str,&ac,sizeof(ac));
    if(send(listenfd,str,MAXSIZE,0) == -1){
            my_err("登陆时时发送出错",__LINE__);
        }

    qDebug() << ac.username << endl;
    qDebug() << ac.passwd << endl;
}

void login::on_commandLinkButton_clicked()
{
    this->reg.show();
}
