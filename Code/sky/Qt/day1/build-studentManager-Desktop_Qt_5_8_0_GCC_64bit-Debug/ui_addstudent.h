/********************************************************************************
** Form generated from reading UI file 'addstudent.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSTUDENT_H
#define UI_ADDSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addStudent
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_18;
    QLabel *label_2;
    QLineEdit *le_name;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_17;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_19;
    QLabel *label_3;
    QLineEdit *le_id;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_11;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_20;
    QLabel *label_4;
    QRadioButton *rbtn_male;
    QRadioButton *rbtn_female;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_21;
    QLabel *label_5;
    QComboBox *cbb_age;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_22;
    QLabel *label_6;
    QComboBox *cbb_wx;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_23;
    QLabel *label_7;
    QGridLayout *gridLayout;
    QCheckBox *ckb_val;
    QCheckBox *ckb_soc;
    QCheckBox *ckb_bad;
    QCheckBox *ckb_bas;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btn_ok;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_cancle;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *addStudent)
    {
        if (addStudent->objectName().isEmpty())
            addStudent->setObjectName(QStringLiteral("addStudent"));
        addStudent->resize(381, 669);
        centralWidget = new QWidget(addStudent);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_18);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_8->addWidget(label_2);

        le_name = new QLineEdit(centralWidget);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setEchoMode(QLineEdit::Normal);
        le_name->setClearButtonEnabled(true);

        horizontalLayout_8->addWidget(le_name);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_14);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_17);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_19);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        le_id = new QLineEdit(centralWidget);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(le_id);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_20);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        rbtn_male = new QRadioButton(centralWidget);
        rbtn_male->setObjectName(QStringLiteral("rbtn_male"));

        horizontalLayout_3->addWidget(rbtn_male);

        rbtn_female = new QRadioButton(centralWidget);
        rbtn_female->setObjectName(QStringLiteral("rbtn_female"));

        horizontalLayout_3->addWidget(rbtn_female);

        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 4);
        horizontalLayout_3->setStretch(3, 4);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_21);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        cbb_age = new QComboBox(centralWidget);
        cbb_age->setObjectName(QStringLiteral("cbb_age"));

        horizontalLayout_4->addWidget(cbb_age);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_22);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        cbb_wx = new QComboBox(centralWidget);
        cbb_wx->setObjectName(QStringLiteral("cbb_wx"));

        horizontalLayout_5->addWidget(cbb_wx);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_23);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ckb_val = new QCheckBox(centralWidget);
        ckb_val->setObjectName(QStringLiteral("ckb_val"));

        gridLayout->addWidget(ckb_val, 0, 3, 1, 1);

        ckb_soc = new QCheckBox(centralWidget);
        ckb_soc->setObjectName(QStringLiteral("ckb_soc"));

        gridLayout->addWidget(ckb_soc, 1, 0, 1, 2);

        ckb_bad = new QCheckBox(centralWidget);
        ckb_bad->setObjectName(QStringLiteral("ckb_bad"));

        gridLayout->addWidget(ckb_bad, 1, 3, 1, 1);

        ckb_bas = new QCheckBox(centralWidget);
        ckb_bas->setObjectName(QStringLiteral("ckb_bas"));

        gridLayout->addWidget(ckb_bas, 0, 0, 1, 2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 0, 4, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 1, 4, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);

        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 9);

        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        btn_ok = new QPushButton(centralWidget);
        btn_ok->setObjectName(QStringLiteral("btn_ok"));

        horizontalLayout_7->addWidget(btn_ok);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        btn_cancle = new QPushButton(centralWidget);
        btn_cancle->setObjectName(QStringLiteral("btn_cancle"));

        horizontalLayout_7->addWidget(btn_cancle);


        verticalLayout->addLayout(horizontalLayout_7);

        addStudent->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(addStudent);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 381, 28));
        addStudent->setMenuBar(menuBar);
        mainToolBar = new QToolBar(addStudent);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        addStudent->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(addStudent);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        addStudent->setStatusBar(statusBar);

        retranslateUi(addStudent);

        QMetaObject::connectSlotsByName(addStudent);
    } // setupUi

    void retranslateUi(QMainWindow *addStudent)
    {
        addStudent->setWindowTitle(QApplication::translate("addStudent", "\346\267\273\345\212\240\345\255\246\347\224\237", Q_NULLPTR));
        label->setText(QApplication::translate("addStudent", "\346\267\273\345\212\240\345\255\246\347\224\237", Q_NULLPTR));
        label_2->setText(QApplication::translate("addStudent", "\345\247\223\345\220\215     ", Q_NULLPTR));
        le_name->setPlaceholderText(QApplication::translate("addStudent", "\350\257\267\350\276\223\345\205\245\345\247\223\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("addStudent", "\345\255\246\345\217\267     ", Q_NULLPTR));
        le_id->setPlaceholderText(QApplication::translate("addStudent", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267(8\344\275\215)", Q_NULLPTR));
        label_4->setText(QApplication::translate("addStudent", "\346\200\247\345\210\253       ", Q_NULLPTR));
        rbtn_male->setText(QApplication::translate("addStudent", "\347\224\267", Q_NULLPTR));
        rbtn_female->setText(QApplication::translate("addStudent", "\345\245\263", Q_NULLPTR));
        label_5->setText(QApplication::translate("addStudent", "\345\271\264\351\276\204     ", Q_NULLPTR));
        cbb_age->clear();
        cbb_age->insertItems(0, QStringList()
         << QApplication::translate("addStudent", "18", Q_NULLPTR)
         << QApplication::translate("addStudent", "19", Q_NULLPTR)
         << QApplication::translate("addStudent", "20", Q_NULLPTR)
         << QApplication::translate("addStudent", "21", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("addStudent", "\351\231\242\347\263\273     ", Q_NULLPTR));
        cbb_wx->clear();
        cbb_wx->insertItems(0, QStringList()
         << QApplication::translate("addStudent", "\350\256\241\347\256\227\346\234\272\345\255\246\351\231\242", Q_NULLPTR)
         << QApplication::translate("addStudent", "\351\200\232\344\277\241\345\267\245\347\250\213\345\255\246\351\231\242", Q_NULLPTR)
         << QApplication::translate("addStudent", "\345\244\226\345\233\275\350\257\255\345\255\246\351\231\242", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("addStudent", "\345\205\264\350\266\243     ", Q_NULLPTR));
        ckb_val->setText(QApplication::translate("addStudent", "\346\216\222\347\220\203", Q_NULLPTR));
        ckb_soc->setText(QApplication::translate("addStudent", "\350\266\263\347\220\203", Q_NULLPTR));
        ckb_bad->setText(QApplication::translate("addStudent", "\347\276\275\346\257\233\347\220\203", Q_NULLPTR));
        ckb_bas->setText(QApplication::translate("addStudent", "\347\257\256\347\220\203", Q_NULLPTR));
        btn_ok->setText(QApplication::translate("addStudent", "\347\241\256\345\256\232", Q_NULLPTR));
        btn_cancle->setText(QApplication::translate("addStudent", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addStudent: public Ui_addStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSTUDENT_H
