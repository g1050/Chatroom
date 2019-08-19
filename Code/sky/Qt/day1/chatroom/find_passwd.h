#ifndef FIND_PASSWD_H
#define FIND_PASSWD_H

#include <QMainWindow>

namespace Ui {
class find_passwd;
}

class find_passwd : public QMainWindow
{
    Q_OBJECT

public:
    explicit find_passwd(QWidget *parent = 0);
    ~find_passwd();

private:
    Ui::find_passwd *ui;
};

#endif // FIND_PASSWD_H
