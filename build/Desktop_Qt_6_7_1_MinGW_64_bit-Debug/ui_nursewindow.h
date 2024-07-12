/********************************************************************************
** Form generated from reading UI file 'nursewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NURSEWINDOW_H
#define UI_NURSEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_nursewindow
{
public:
    QPushButton *pushButton_profile;
    QPushButton *pushButton_Schedule;
    QPushButton *pushButton_Assignment;
    QLabel *label_Hellonur;

    void setupUi(QDialog *nursewindow)
    {
        if (nursewindow->objectName().isEmpty())
            nursewindow->setObjectName("nursewindow");
        nursewindow->resize(400, 300);
        pushButton_profile = new QPushButton(nursewindow);
        pushButton_profile->setObjectName("pushButton_profile");
        pushButton_profile->setGeometry(QRect(130, 90, 121, 61));
        pushButton_Schedule = new QPushButton(nursewindow);
        pushButton_Schedule->setObjectName("pushButton_Schedule");
        pushButton_Schedule->setGeometry(QRect(10, 170, 131, 61));
        pushButton_Assignment = new QPushButton(nursewindow);
        pushButton_Assignment->setObjectName("pushButton_Assignment");
        pushButton_Assignment->setGeometry(QRect(250, 170, 131, 61));
        label_Hellonur = new QLabel(nursewindow);
        label_Hellonur->setObjectName("label_Hellonur");
        label_Hellonur->setGeometry(QRect(30, 20, 141, 31));

        retranslateUi(nursewindow);

        QMetaObject::connectSlotsByName(nursewindow);
    } // setupUi

    void retranslateUi(QDialog *nursewindow)
    {
        nursewindow->setWindowTitle(QCoreApplication::translate("nursewindow", "Dialog", nullptr));
        pushButton_profile->setText(QCoreApplication::translate("nursewindow", "Profile", nullptr));
        pushButton_Schedule->setText(QCoreApplication::translate("nursewindow", "Schedule", nullptr));
        pushButton_Assignment->setText(QCoreApplication::translate("nursewindow", "Assignments", nullptr));
        label_Hellonur->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class nursewindow: public Ui_nursewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NURSEWINDOW_H
