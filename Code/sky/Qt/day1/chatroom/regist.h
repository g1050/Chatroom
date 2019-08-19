#ifndef REGIST_H
#define REGIST_H

#include <QMainWindow>

namespace Ui {
class regist;
}

class regist : public QMainWindow
{
    Q_OBJECT

public:
    explicit regist(QWidget *parent = 0);
    ~regist();

private slots:
    void on_pushButton_clicked();

private slots:

    
    void on_btn_regist_clicked();

    void on_btn_reg_clicked();

private:
    Ui::regist *ui;
};

#endif // REGIST_H
