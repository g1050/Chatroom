#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "regist.h"
namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_pushButton_clicked();

    void on_commandLinkButton_clicked();

private:
    Ui::login *ui;
    regist reg;
};

#endif // LOGIN_H
