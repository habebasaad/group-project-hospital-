/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelusername;
    QLabel *labelpassword;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonLogin;
    QPushButton *PushbuttonRegister;
    QLabel *error;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(544, 307);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        labelimagelogin = new QLabel(centralwidget);
        labelimagelogin->setObjectName("labelimagelogin");
        labelimagelogin->setGeometry(QRect(10, -10, 201, 291));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(330, 70, 191, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditUsername = new QLineEdit(layoutWidget);
        lineEditUsername->setObjectName("lineEditUsername");

        verticalLayout->addWidget(lineEditUsername);

        lineEditPassword = new QLineEdit(layoutWidget);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEditPassword);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(250, 70, 81, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelusername = new QLabel(layoutWidget1);
        labelusername->setObjectName("labelusername");
        labelusername->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));

        verticalLayout_2->addWidget(labelusername);

        labelpassword = new QLabel(layoutWidget1);
        labelpassword->setObjectName("labelpassword");
        labelpassword->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Segoe UI\";"));

        verticalLayout_2->addWidget(labelpassword);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(250, 200, 271, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonLogin = new QPushButton(layoutWidget2);
        pushButtonLogin->setObjectName("pushButtonLogin");

        horizontalLayout->addWidget(pushButtonLogin);

        PushbuttonRegister = new QPushButton(layoutWidget2);
        PushbuttonRegister->setObjectName("PushbuttonRegister");

        horizontalLayout->addWidget(PushbuttonRegister);

        error = new QLabel(centralwidget);
        error->setObjectName("error");
        error->setEnabled(true);
        error->setGeometry(QRect(250, 140, 289, 32));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 544, 21));
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
        labelusername->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        labelpassword->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        PushbuttonRegister->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        error->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Error: wrong username or passwrd</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
