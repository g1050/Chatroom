#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addstudent.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_4_triggered()
{
    //addStudent a;
    //a.exec(); //mo tai shi tu

    //show dui xiang bu hui bei xiao hui
    //this->a.show();// private
}
