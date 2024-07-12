/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminwindow
{
public:
    QLabel *hello;
    QPushButton *pat;
    QPushButton *staff;
    QComboBox *patbox;
    QComboBox *staffbox;
    QPushButton *submit;

    void setupUi(QDialog *adminwindow)
    {
        if (adminwindow->objectName().isEmpty())
            adminwindow->setObjectName("adminwindow");
        adminwindow->resize(400, 300);
        hello = new QLabel(adminwindow);
        hello->setObjectName("hello");
        hello->setGeometry(QRect(10, 10, 141, 16));
        pat = new QPushButton(adminwindow);
        pat->setObjectName("pat");
        pat->setGeometry(QRect(30, 80, 131, 31));
        staff = new QPushButton(adminwindow);
        staff->setObjectName("staff");
        staff->setGeometry(QRect(230, 80, 131, 31));
        patbox = new QComboBox(adminwindow);
        patbox->setObjectName("patbox");
        patbox->setGeometry(QRect(60, 120, 72, 24));
        staffbox = new QComboBox(adminwindow);
        staffbox->setObjectName("staffbox");
        staffbox->setGeometry(QRect(260, 120, 72, 24));
        submit = new QPushButton(adminwindow);
        submit->setObjectName("submit");
        submit->setGeometry(QRect(150, 260, 80, 24));

        retranslateUi(adminwindow);

        QMetaObject::connectSlotsByName(adminwindow);
    } // setupUi

    void retranslateUi(QDialog *adminwindow)
    {
        adminwindow->setWindowTitle(QCoreApplication::translate("adminwindow", "Dialog", nullptr));
        hello->setText(QString());
        pat->setText(QCoreApplication::translate("adminwindow", "patient management", nullptr));
        staff->setText(QCoreApplication::translate("adminwindow", "staff management", nullptr));
        submit->setText(QCoreApplication::translate("adminwindow", "submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
