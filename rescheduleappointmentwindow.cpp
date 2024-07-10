#include "rescheduleappointmentwindow.h"
#include "ui_rescheduleappointmentwindow.h"

RescheduleAppointmentWindow::RescheduleAppointmentWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RescheduleAppointmentWindow)
{
    ui->setupUi(this);
}

RescheduleAppointmentWindow::~RescheduleAppointmentWindow()
{
    delete ui;
}
