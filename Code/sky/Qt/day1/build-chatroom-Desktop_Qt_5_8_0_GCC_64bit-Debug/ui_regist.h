/********************************************************************************
** Form generated from reading UI file 'regist.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIST_H
#define UI_REGIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regist
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *le_nickname;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *cbb_year;
    QComboBox *cbb_month;
    QComboBox *cbb_day;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QRadioButton *rdb_male;
    QRadioButton *rdb_female;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *le_phonenum;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *le_home;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *le_passwd1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *le_passwd2;
    QPushButton *btn_reg;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *regist)
    {
        if (regist->objectName().isEmpty())
            regist->setObjectName(QStringLiteral("regist"));
        regist->resize(496, 582);
        centralwidget = new QWidget(regist);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        le_nickname = new QLineEdit(centralwidget);
        le_nickname->setObjectName(QStringLiteral("le_nickname"));

        horizontalLayout->addWidget(le_nickname);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        cbb_year = new QComboBox(centralwidget);
        cbb_year->setObjectName(QStringLiteral("cbb_year"));

        horizontalLayout_2->addWidget(cbb_year);

        cbb_month = new QComboBox(centralwidget);
        cbb_month->setObjectName(QStringLiteral("cbb_month"));

        horizontalLayout_2->addWidget(cbb_month);

        cbb_day = new QComboBox(centralwidget);
        cbb_day->setObjectName(QStringLiteral("cbb_day"));

        horizontalLayout_2->addWidget(cbb_day);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        rdb_male = new QRadioButton(centralwidget);
        rdb_male->setObjectName(QStringLiteral("rdb_male"));

        horizontalLayout_3->addWidget(rdb_male);

        rdb_female = new QRadioButton(centralwidget);
        rdb_female->setObjectName(QStringLiteral("rdb_female"));

        horizontalLayout_3->addWidget(rdb_female);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        le_phonenum = new QLineEdit(centralwidget);
        le_phonenum->setObjectName(QStringLiteral("le_phonenum"));

        horizontalLayout_4->addWidget(le_phonenum);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        le_home = new QLineEdit(centralwidget);
        le_home->setObjectName(QStringLiteral("le_home"));

        horizontalLayout_5->addWidget(le_home);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        le_passwd1 = new QLineEdit(centralwidget);
        le_passwd1->setObjectName(QStringLiteral("le_passwd1"));

        horizontalLayout_6->addWidget(le_passwd1);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);

        le_passwd2 = new QLineEdit(centralwidget);
        le_passwd2->setObjectName(QStringLiteral("le_passwd2"));

        horizontalLayout_7->addWidget(le_passwd2);


        verticalLayout->addLayout(horizontalLayout_7);

        btn_reg = new QPushButton(centralwidget);
        btn_reg->setObjectName(QStringLiteral("btn_reg"));
        btn_reg->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));

        verticalLayout->addWidget(btn_reg);

        regist->setCentralWidget(centralwidget);
        menubar = new QMenuBar(regist);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 496, 28));
        regist->setMenuBar(menubar);
        statusbar = new QStatusBar(regist);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        regist->setStatusBar(statusbar);

        retranslateUi(regist);

        QMetaObject::connectSlotsByName(regist);
    } // setupUi

    void retranslateUi(QMainWindow *regist)
    {
        regist->setWindowTitle(QApplication::translate("regist", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("regist", "\346\254\242\350\277\216\345\212\240\345\205\245\350\201\212\345\244\251\345\256\244", Q_NULLPTR));
        label_6->setText(QApplication::translate("regist", "\346\230\265\347\247\260", Q_NULLPTR));
        label_4->setText(QApplication::translate("regist", "\345\271\264\351\276\204", Q_NULLPTR));
        cbb_year->clear();
        cbb_year->insertItems(0, QStringList()
         << QApplication::translate("regist", "1900", Q_NULLPTR)
         << QApplication::translate("regist", "1998", Q_NULLPTR)
         << QApplication::translate("regist", "1999", Q_NULLPTR)
         << QApplication::translate("regist", "2000", Q_NULLPTR)
         << QApplication::translate("regist", "2001", Q_NULLPTR)
        );
        cbb_month->clear();
        cbb_month->insertItems(0, QStringList()
         << QApplication::translate("regist", "1", Q_NULLPTR)
         << QApplication::translate("regist", "2", Q_NULLPTR)
         << QApplication::translate("regist", "3", Q_NULLPTR)
         << QApplication::translate("regist", "4", Q_NULLPTR)
         << QApplication::translate("regist", "5", Q_NULLPTR)
         << QApplication::translate("regist", "6", Q_NULLPTR)
         << QApplication::translate("regist", "7", Q_NULLPTR)
         << QApplication::translate("regist", "8", Q_NULLPTR)
         << QApplication::translate("regist", "9", Q_NULLPTR)
         << QApplication::translate("regist", "10", Q_NULLPTR)
         << QApplication::translate("regist", "11", Q_NULLPTR)
         << QApplication::translate("regist", "12", Q_NULLPTR)
        );
        cbb_day->clear();
        cbb_day->insertItems(0, QStringList()
         << QApplication::translate("regist", "1", Q_NULLPTR)
         << QApplication::translate("regist", "2", Q_NULLPTR)
         << QApplication::translate("regist", "3", Q_NULLPTR)
         << QApplication::translate("regist", "4", Q_NULLPTR)
         << QApplication::translate("regist", "5", Q_NULLPTR)
         << QApplication::translate("regist", "6", Q_NULLPTR)
         << QApplication::translate("regist", "7", Q_NULLPTR)
         << QApplication::translate("regist", "8", Q_NULLPTR)
         << QApplication::translate("regist", "10", Q_NULLPTR)
         << QApplication::translate("regist", "11", Q_NULLPTR)
         << QApplication::translate("regist", "12", Q_NULLPTR)
         << QApplication::translate("regist", "13", Q_NULLPTR)
         << QApplication::translate("regist", "14", Q_NULLPTR)
         << QApplication::translate("regist", "15", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("regist", "\346\200\247\345\210\253", Q_NULLPTR));
        rdb_male->setText(QApplication::translate("regist", "\347\224\267", Q_NULLPTR));
        rdb_female->setText(QApplication::translate("regist", "\345\245\263", Q_NULLPTR));
        label_2->setText(QApplication::translate("regist", "\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        label_7->setText(QApplication::translate("regist", "\345\257\206\344\277\235\351\227\256\351\242\230\357\274\232\346\202\250\347\232\204\345\256\266\344\271\241\346\230\257\357\274\237", Q_NULLPTR));
        label_5->setText(QApplication::translate("regist", "\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        label_8->setText(QApplication::translate("regist", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        btn_reg->setText(QApplication::translate("regist", "\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class regist: public Ui_regist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIST_H
