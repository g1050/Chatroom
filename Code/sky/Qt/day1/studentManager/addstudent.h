#ifndef ADDSTUDENT_H
#define ADDSTUDENT_H

#include <QMainWindow>

namespace Ui {
class addStudent;
}

class addStudent : public QMainWindow
{
    Q_OBJECT

public:
    explicit addStudent(QWidget *parent = 0);
    ~addStudent();
    void clearinterface();

private slots:
    void on_btn_ok_clicked();

    void on_btn_cancle_clicked();

private:
    Ui::addStudent *ui;
};

#endif // ADDSTUDENT_H
