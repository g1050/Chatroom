#include "addstudent.h"
#include "mainwindow.h"
#include <QApplication>
#include <QString>
#include <QSqlDatabase>
#include <QCoreApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QtDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE","tttt");
//           db.setHostName("127.0.0.1");      //连接数据库主机名，这里需要注意（若填的为”127.0.0.1“，出现不能连接，则改为localhost)
//           db.setPort(3306);                 //连接数据库端口号，与设置一致
//        db.setDatabaseName("xxxx");      //连接数据库名，与设置一致
//            db.setUserName("gxk");          //数据库用户名，与设置一致
//            db.setPassword("123456");    //数据库密码，与设置一致
//            db.open();


//            if(!db.open())
//            {
//                qDebug()<<"不能连接"<<"connect to mysql error"<<db.lastError().text();
//                return 0;
//            }
//            else
//            {
//                 qDebug()<<"连接成功"<<"connect to mysql OK";
//            }

            //创建表
//            db = QSqlDatabase::database("chatroom"); //建立数据库连接
//            QSqlQuery query(db);
//            bool success = query.exec("create table automobil(id int, name varchar)");
//            if(success)
//            {
//                qDebug() << QObject::tr("create table success.");
//            }
//            else
//            {
//                qDebug() << QObject::tr("create table failed.");
//            }

//    QSqlDatabase *defaultDB = QSqlDatabase::addDatabase("QMYSQL");
//            if ( defaultDB ) {
//                defaultDB->setDatabaseName( DB_SALES_DBNAME );
//                defaultDB->setUserName( DB_SALES_USER );
//                defaultDB->setPassword( DB_SALES_PASSWD );
//                defaultDB->setHostName( DB_SALES_HOST );

//                if ( defaultDB->open() ) {
//                    // 数据库被成功打开，我们现在可以运行SQL命令。
//                }
//            }
    //addStudent w;
    MainWindow m;
    m.show();
    //w.show();

    return a.exec();
}
