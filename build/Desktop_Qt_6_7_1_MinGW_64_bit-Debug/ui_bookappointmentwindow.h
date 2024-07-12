/********************************************************************************
** Form generated from reading UI file 'bookappointmentwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKAPPOINTMENTWINDOW_H
#define UI_BOOKAPPOINTMENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_BookAppointmentWindow
{
public:
    QGroupBox *groupBox_speciality;
    QRadioButton *radioButton_Nutrition;
    QRadioButton *radioButton_OG;
    QRadioButton *radioButton_Ophthalmology;
    QRadioButton *radioButton_internalmedicine;
    QRadioButton *radioButton_Dermatology;
    QLabel *label_Available_slots;
    QListWidget *slotsListView;
    QPushButton *pushButtonSubmit;

    void setupUi(QDialog *BookAppointmentWindow)
    {
        if (BookAppointmentWindow->objectName().isEmpty())
            BookAppointmentWindow->setObjectName("BookAppointmentWindow");
        BookAppointmentWindow->resize(400, 349);
        groupBox_speciality = new QGroupBox(BookAppointmentWindow);
        groupBox_speciality->setObjectName("groupBox_speciality");
        groupBox_speciality->setGeometry(QRect(10, 10, 281, 151));
        groupBox_speciality->setStyleSheet(QString::fromUtf8("font: 700 italic 14pt \"Segoe UI\";\n"
"font: 12pt \"Segoe UI\";"));
        radioButton_Nutrition = new QRadioButton(groupBox_speciality);
        radioButton_Nutrition->setObjectName("radioButton_Nutrition");
        radioButton_Nutrition->setGeometry(QRect(10, 30, 121, 18));
        radioButton_OG = new QRadioButton(groupBox_speciality);
        radioButton_OG->setObjectName("radioButton_OG");
        radioButton_OG->setGeometry(QRect(10, 50, 201, 18));
        radioButton_Ophthalmology = new QRadioButton(groupBox_speciality);
        radioButton_Ophthalmology->setObjectName("radioButton_Ophthalmology");
        radioButton_Ophthalmology->setGeometry(QRect(10, 70, 131, 18));
        radioButton_internalmedicine = new QRadioButton(groupBox_speciality);
        radioButton_internalmedicine->setObjectName("radioButton_internalmedicine");
        radioButton_internalmedicine->setGeometry(QRect(10, 90, 151, 18));
        radioButton_Dermatology = new QRadioButton(groupBox_speciality);
        radioButton_Dermatology->setObjectName("radioButton_Dermatology");
        radioButton_Dermatology->setGeometry(QRect(10, 110, 131, 18));
        label_Available_slots = new QLabel(BookAppointmentWindow);
        label_Available_slots->setObjectName("label_Available_slots");
        label_Available_slots->setGeometry(QRect(10, 170, 271, 16));
        label_Available_slots->setStyleSheet(QString::fromUtf8("font: 14pt \"Segoe UI\";"));
        slotsListView = new QListWidget(BookAppointmentWindow);
        slotsListView->setObjectName("slotsListView");
        slotsListView->setGeometry(QRect(30, 190, 331, 71));
        pushButtonSubmit = new QPushButton(BookAppointmentWindow);
        pushButtonSubmit->setObjectName("pushButtonSubmit");
        pushButtonSubmit->setGeometry(QRect(259, 277, 101, 31));

        retranslateUi(BookAppointmentWindow);

        QMetaObject::connectSlotsByName(BookAppointmentWindow);
    } // setupUi

    void retranslateUi(QDialog *BookAppointmentWindow)
    {
        BookAppointmentWindow->setWindowTitle(QCoreApplication::translate("BookAppointmentWindow", "Dialog", nullptr));
        groupBox_speciality->setTitle(QCoreApplication::translate("BookAppointmentWindow", "Speciality", nullptr));
        radioButton_Nutrition->setText(QCoreApplication::translate("BookAppointmentWindow", "Nutrition", nullptr));
        radioButton_OG->setText(QCoreApplication::translate("BookAppointmentWindow", "Obstetrics and Gynecology", nullptr));
        radioButton_Ophthalmology->setText(QCoreApplication::translate("BookAppointmentWindow", "Ophthalmology", nullptr));
        radioButton_internalmedicine->setText(QCoreApplication::translate("BookAppointmentWindow", "Internal Medicine", nullptr));
        radioButton_Dermatology->setText(QCoreApplication::translate("BookAppointmentWindow", "Dermatology", nullptr));
        label_Available_slots->setText(QCoreApplication::translate("BookAppointmentWindow", "Available slots and Doctors", nullptr));
        pushButtonSubmit->setText(QCoreApplication::translate("BookAppointmentWindow", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookAppointmentWindow: public Ui_BookAppointmentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKAPPOINTMENTWINDOW_H
