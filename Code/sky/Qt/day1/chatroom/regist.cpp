#include "regist.h"
#include "ui_regist.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include "account.h"
#include <stdio.h>
#include "common.h"

//extern listenfd;

regist::regist(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::regist)
{
    ui->setupUi(this);
}

regist::~regist()
{
    delete ui;
}



void regist::on_btn_regist_clicked()
{
    QString nickname = this->ui->le_nickname->text();
    qDebug() << nickname ;
//    QString id = this->ui->le_id->text();

//    QString age = this->ui->cbb_age->currentText();
//    QString wx = this->ui->cbb_wx->currentText();

//    QString content = "姓名: "+name + '\n' +"学号:" + id + '\n' + "年龄:" + age + "\n院系:" + wx;

//    int ret = QMessageBox::critical(this,"Please confirm infomation",content,"取消","确定");
//    if(ret == 1){
//        clearinterface();
//    }
}

void regist::on_btn_reg_clicked()
{

    account ac;
    QString nickname = this->ui->le_nickname->text();
    QString phonenum = this->ui->le_phonenum->text();
    QString hometoen = this->ui->le_home->text();
    QString passwd1 = this->ui->le_passwd1->text();
    QString passwd2 = this->ui->le_passwd2->text();
    QStringtochar(ac.nickname,nickname);
    QStringtochar(ac.passwd,passwd1);
    ac.flag = 1;
    char str[MAXSIZE];
    memcpy(str,&ac,sizeof(ac));
    if(send(listenfd,str,MAXSIZE,0) == -1){
            my_err("注册账户时发送出错",__LINE__);
        }
    else{
        QMessageBox::critical(this,"注册成功","恭喜你注册成功！","确定","取消");
        this->close();
    }


    //printf("sss = %s\n",ac.nickname);
    //strcpy(ac.nickname,nickname);
    //ac.nickname = nickname;
    if(passwd1 != passwd2){
        QMessageBox::critical(this,"确认信息","请保证两次输入密码一致","确定","取消");
    }

    //qDebug() << nickname ;
}
