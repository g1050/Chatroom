/********************************************************************************
** Form generated from reading UI file 'login_interface.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_INTERFACE_H
#define UI_LOGIN_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login_interface
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *login_interface)
    {
        if (login_interface->objectName().isEmpty())
            login_interface->setObjectName(QStringLiteral("login_interface"));
        login_interface->resize(598, 494);
        centralWidget = new QWidget(login_interface);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 40, 67, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 110, 67, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 170, 67, 17));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 110, 113, 25));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(140, 170, 113, 25));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 240, 89, 25));
        commandLinkButton = new QCommandLinkButton(centralWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(280, 110, 177, 41));
        commandLinkButton_2 = new QCommandLinkButton(centralWidget);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(280, 160, 177, 41));
        login_interface->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(login_interface);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 598, 28));
        login_interface->setMenuBar(menuBar);
        mainToolBar = new QToolBar(login_interface);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        login_interface->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(login_interface);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        login_interface->setStatusBar(statusBar);

        retranslateUi(login_interface);

        QMetaObject::connectSlotsByName(login_interface);
    } // setupUi

    void retranslateUi(QMainWindow *login_interface)
    {
        login_interface->setWindowTitle(QApplication::translate("login_interface", "login_interface", Q_NULLPTR));
        label->setText(QApplication::translate("login_interface", "\350\201\212\345\244\251\345\256\244", Q_NULLPTR));
        label_2->setText(QApplication::translate("login_interface", "\350\264\246\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("login_interface", "\345\257\206\347\240\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("login_interface", "\347\231\273\345\275\225", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("login_interface", "\346\263\250\345\206\214\350\264\246\345\217\267", Q_NULLPTR));
        commandLinkButton_2->setText(QApplication::translate("login_interface", "\346\211\276\345\233\236\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login_interface: public Ui_login_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_INTERFACE_H
