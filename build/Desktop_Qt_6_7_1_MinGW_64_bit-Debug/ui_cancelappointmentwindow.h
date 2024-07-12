/********************************************************************************
** Form generated from reading UI file 'cancelappointmentwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANCELAPPOINTMENTWINDOW_H
#define UI_CANCELAPPOINTMENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CancelAppointmentWindow
{
public:

    void setupUi(QDialog *CancelAppointmentWindow)
    {
        if (CancelAppointmentWindow->objectName().isEmpty())
            CancelAppointmentWindow->setObjectName("CancelAppointmentWindow");
        CancelAppointmentWindow->resize(400, 300);

        retranslateUi(CancelAppointmentWindow);

        QMetaObject::connectSlotsByName(CancelAppointmentWindow);
    } // setupUi

    void retranslateUi(QDialog *CancelAppointmentWindow)
    {
        CancelAppointmentWindow->setWindowTitle(QCoreApplication::translate("CancelAppointmentWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CancelAppointmentWindow: public Ui_CancelAppointmentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANCELAPPOINTMENTWINDOW_H
