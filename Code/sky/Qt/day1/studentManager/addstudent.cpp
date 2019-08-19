#include "addstudent.h"
#include "ui_addstudent.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>
#include <QPushButton>
#include <pthread.h>
#include <qapplication.h>
#include <qsqldatabase.h>

addStudent::addStudent(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addStudent)
{
    ui->setupUi(this);
}

addStudent::~addStudent()
{
    delete ui;
}

void addStudent::on_btn_ok_clicked()
{
    QString name = this->ui->le_name->text();
    QString id = this->ui->le_id->text();

    QString age = this->ui->cbb_age->currentText();
    QString wx = this->ui->cbb_wx->currentText();

    QString content = "姓名: "+name + '\n' +"学号:" + id + '\n' + "年龄:" + age + "\n院系:" + wx;

    int ret = QMessageBox::critical(this,"Please confirm infomation",content,"取消","确定");
    if(ret == 1){
        clearinterface();
    }
//    //MessageBox
//    QMessageBox msgBOX;
//    msgBOX.setText("请确认信息");
//    msgBOX.setInformativeText("姓名:"+name+'\n'+"学号"+id);
//    //msgBOX.setStandardButtons(QMessageBox::Save | QMessageBox::Cancel);
//    //msgBOX.setDefaultButton(QMessageBox::Save);

//    QPushButton *cbtn =  msgBOX.addButton("确定",QMessageBox::AcceptRole);
//    msgBOX.addButton("取消",QMessageBox::RejectRole);
//    msgBOX.setDefaultButton(cbtn);
//    int ret = msgBOX.exec();

//    //QMessageBox::aboutQt(this,"thanks");

//    //QMessageBox::information(this,"Please confirm infomation",name+'\n'+id,QMessageBox::Ok | QMessageBox::Cancel);
//    QMessageBox::information(this,"Please confirm infomation","姓名:"+name+'\n'+"学号"+id,"确定","取消");
////    QMessageBox::question();
//   // QMessageBox::warning();
////    QMessageBox::critical();
//    //int ret = QMessageBox::critical(----);
//    qDebug() << ret << endl;

}

void addStudent::clearinterface()
{
    this->ui->le_name->clear();
    this->ui->le_id->clear();
    this->ui->rbtn_male->setChecked(true);
    this->ui->cbb_age->setCurrentIndex(0);
    this->ui->cbb_wx->setCurrentIndex(0);

    this->ui->ckb_bas->setChecked(false);
    this->ui->ckb_val->setChecked(false);
    this->ui->ckb_bad->setChecked(false);
    this->ui->ckb_soc->setChecked(false);
}

void addStudent::on_btn_cancle_clicked()
{
    this->close();
}
