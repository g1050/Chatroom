#include "find_passwd.h"
#include "ui_find_passwd.h"

find_passwd::find_passwd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::find_passwd)
{
    ui->setupUi(this);
}

find_passwd::~find_passwd()
{
    delete ui;
}
