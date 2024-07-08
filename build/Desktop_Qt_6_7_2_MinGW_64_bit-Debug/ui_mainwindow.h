/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelimagelogin;
    QCheckBox *checkBoxRememberme;
    QLabel *labelForgetPass;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelusername;
    QLabel *labelpassword;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonLogin;
    QPushButton *PushbuttonRegister;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(544, 336);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        labelimagelogin = new QLabel(centralwidget);
        labelimagelogin->setObjectName("labelimagelogin");
        labelimagelogin->setGeometry(QRect(10, -10, 201, 321));
        checkBoxRememberme = new QCheckBox(centralwidget);
        checkBoxRememberme->setObjectName("checkBoxRememberme");
        checkBoxRememberme->setGeometry(QRect(220, 190, 111, 18));
        labelForgetPass = new QLabel(centralwidget);
        labelForgetPass->setObjectName("labelForgetPass");
        labelForgetPass->setGeometry(QRect(450, 190, 91, 20));
        QFont font;
        font.setUnderline(true);
        labelForgetPass->setFont(font);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(330, 70, 191, 71));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditUsername = new QLineEdit(widget);
        lineEditUsername->setObjectName("lineEditUsername");

        verticalLayout->addWidget(lineEditUsername);

        lineEditPassword = new QLineEdit(widget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEditPassword);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(250, 70, 101, 71));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelusername = new QLabel(widget1);
        labelusername->setObjectName("labelusername");
        labelusername->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));

        verticalLayout_2->addWidget(labelusername);

        labelpassword = new QLabel(widget1);
        labelpassword->setObjectName("labelpassword");
        labelpassword->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));

        verticalLayout_2->addWidget(labelpassword);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(210, 230, 331, 61));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonLogin = new QPushButton(widget2);
        pushButtonLogin->setObjectName("pushButtonLogin");

        horizontalLayout->addWidget(pushButtonLogin);

        PushbuttonRegister = new QPushButton(widget2);
        PushbuttonRegister->setObjectName("PushbuttonRegister");

        horizontalLayout->addWidget(PushbuttonRegister);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 544, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelimagelogin->setText(QString());
        checkBoxRememberme->setText(QCoreApplication::translate("MainWindow", "Remember me", nullptr));
        labelForgetPass->setText(QCoreApplication::translate("MainWindow", "Forgot Password", nullptr));
        labelusername->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        labelpassword->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        PushbuttonRegister->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
