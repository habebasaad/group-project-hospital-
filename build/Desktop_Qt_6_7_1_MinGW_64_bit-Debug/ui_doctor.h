/********************************************************************************
** Form generated from reading UI file 'doctor.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTOR_H
#define UI_DOCTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_doctor
{
public:
    QPushButton *pushButton_profile;
    QLabel *label_HelloDr;
    QPushButton *pushButton_profile_2;
    QPushButton *pushButton_schedule;

    void setupUi(QDialog *doctor)
    {
        if (doctor->objectName().isEmpty())
            doctor->setObjectName("doctor");
        doctor->resize(400, 300);
        pushButton_profile = new QPushButton(doctor);
        pushButton_profile->setObjectName("pushButton_profile");
        pushButton_profile->setGeometry(QRect(100, 100, 151, 41));
        label_HelloDr = new QLabel(doctor);
        label_HelloDr->setObjectName("label_HelloDr");
        label_HelloDr->setGeometry(QRect(30, 30, 151, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rage Italic")});
        font.setPointSize(14);
        label_HelloDr->setFont(font);
        pushButton_profile_2 = new QPushButton(doctor);
        pushButton_profile_2->setObjectName("pushButton_profile_2");
        pushButton_profile_2->setGeometry(QRect(240, 180, 151, 41));
        pushButton_schedule = new QPushButton(doctor);
        pushButton_schedule->setObjectName("pushButton_schedule");
        pushButton_schedule->setGeometry(QRect(10, 180, 151, 41));

        retranslateUi(doctor);

        QMetaObject::connectSlotsByName(doctor);
    } // setupUi

    void retranslateUi(QDialog *doctor)
    {
        doctor->setWindowTitle(QCoreApplication::translate("doctor", "Dialog", nullptr));
        pushButton_profile->setText(QCoreApplication::translate("doctor", "Profile", nullptr));
        label_HelloDr->setText(QString());
        pushButton_profile_2->setText(QCoreApplication::translate("doctor", "Assignment", nullptr));
        pushButton_schedule->setText(QCoreApplication::translate("doctor", "Schedule", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doctor: public Ui_doctor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTOR_H
