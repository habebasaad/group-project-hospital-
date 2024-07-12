/********************************************************************************
** Form generated from reading UI file 'rescheduleappointmentwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESCHEDULEAPPOINTMENTWINDOW_H
#define UI_RESCHEDULEAPPOINTMENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_RescheduleAppointmentWindow
{
public:

    void setupUi(QDialog *RescheduleAppointmentWindow)
    {
        if (RescheduleAppointmentWindow->objectName().isEmpty())
            RescheduleAppointmentWindow->setObjectName("RescheduleAppointmentWindow");
        RescheduleAppointmentWindow->resize(400, 300);

        retranslateUi(RescheduleAppointmentWindow);

        QMetaObject::connectSlotsByName(RescheduleAppointmentWindow);
    } // setupUi

    void retranslateUi(QDialog *RescheduleAppointmentWindow)
    {
        RescheduleAppointmentWindow->setWindowTitle(QCoreApplication::translate("RescheduleAppointmentWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RescheduleAppointmentWindow: public Ui_RescheduleAppointmentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESCHEDULEAPPOINTMENTWINDOW_H
