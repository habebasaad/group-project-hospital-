/********************************************************************************
** Form generated from reading UI file 'patientmanagmentwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTMANAGMENTWINDOW_H
#define UI_PATIENTMANAGMENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PatientManagmentWindow
{
public:
    QLabel *labelHello;
    QLabel *labelUsername;
    QPushButton *pushButtonBook;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonReschedule;
    QPushButton *pushButtonMedical_Record;
    QPushButton *pushButtonChat;
    QComboBox *comboBoxReschedule;
    QComboBox *comboBoxCancel;
    QPushButton *pushButtonSubmit;

    void setupUi(QDialog *PatientManagmentWindow)
    {
        if (PatientManagmentWindow->objectName().isEmpty())
            PatientManagmentWindow->setObjectName("PatientManagmentWindow");
        PatientManagmentWindow->resize(503, 332);
        labelHello = new QLabel(PatientManagmentWindow);
        labelHello->setObjectName("labelHello");
        labelHello->setGeometry(QRect(30, 20, 191, 20));
        labelHello->setStyleSheet(QString::fromUtf8("font: 700 italic 9pt \"Arial\";\n"
"font: 16pt \"Segoe UI\";"));
        labelUsername = new QLabel(PatientManagmentWindow);
        labelUsername->setObjectName("labelUsername");
        labelUsername->setGeometry(QRect(300, 20, 91, 21));
        pushButtonBook = new QPushButton(PatientManagmentWindow);
        pushButtonBook->setObjectName("pushButtonBook");
        pushButtonBook->setGeometry(QRect(80, 60, 271, 41));
        pushButtonCancel = new QPushButton(PatientManagmentWindow);
        pushButtonCancel->setObjectName("pushButtonCancel");
        pushButtonCancel->setGeometry(QRect(20, 170, 181, 31));
        pushButtonReschedule = new QPushButton(PatientManagmentWindow);
        pushButtonReschedule->setObjectName("pushButtonReschedule");
        pushButtonReschedule->setGeometry(QRect(210, 170, 181, 31));
        pushButtonMedical_Record = new QPushButton(PatientManagmentWindow);
        pushButtonMedical_Record->setObjectName("pushButtonMedical_Record");
        pushButtonMedical_Record->setGeometry(QRect(210, 120, 181, 31));
        pushButtonChat = new QPushButton(PatientManagmentWindow);
        pushButtonChat->setObjectName("pushButtonChat");
        pushButtonChat->setGeometry(QRect(20, 120, 181, 31));
        comboBoxReschedule = new QComboBox(PatientManagmentWindow);
        comboBoxReschedule->setObjectName("comboBoxReschedule");
        comboBoxReschedule->setGeometry(QRect(260, 210, 221, 31));
        comboBoxCancel = new QComboBox(PatientManagmentWindow);
        comboBoxCancel->setObjectName("comboBoxCancel");
        comboBoxCancel->setGeometry(QRect(10, 210, 231, 31));
        pushButtonSubmit = new QPushButton(PatientManagmentWindow);
        pushButtonSubmit->setObjectName("pushButtonSubmit");
        pushButtonSubmit->setGeometry(QRect(170, 280, 91, 31));

        retranslateUi(PatientManagmentWindow);

        QMetaObject::connectSlotsByName(PatientManagmentWindow);
    } // setupUi

    void retranslateUi(QDialog *PatientManagmentWindow)
    {
        PatientManagmentWindow->setWindowTitle(QCoreApplication::translate("PatientManagmentWindow", "Dialog", nullptr));
        labelHello->setText(QCoreApplication::translate("PatientManagmentWindow", "Hello", nullptr));
        labelUsername->setText(QString());
        pushButtonBook->setText(QCoreApplication::translate("PatientManagmentWindow", "Book an Appoimtemt", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("PatientManagmentWindow", "Cancel an Appointment ", nullptr));
        pushButtonReschedule->setText(QCoreApplication::translate("PatientManagmentWindow", "Reschedule an Appointment", nullptr));
        pushButtonMedical_Record->setText(QCoreApplication::translate("PatientManagmentWindow", "View medical record", nullptr));
        pushButtonChat->setText(QCoreApplication::translate("PatientManagmentWindow", "Chat with us ", nullptr));
        pushButtonSubmit->setText(QCoreApplication::translate("PatientManagmentWindow", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientManagmentWindow: public Ui_PatientManagmentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTMANAGMENTWINDOW_H
