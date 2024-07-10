#include "patientmanagmentwindow.h"
#include "ui_patientmanagmentwindow.h"
#include <rescheduleappointmentwindow.h>
#include <bookappointmentwindow.h>
#include <cancelappointmentwindow.h>
#include <chat.h>
#include <qpixmap.h>
#include<mainwindow.h>

PatientManagmentWindow::PatientManagmentWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PatientManagmentWindow)
{
    ui->setupUi(this);
    ui->labelUsername->setText(ui->labelUsername->text());
    QPixmap pix(":/Images/Imagepatientwindow");
    int w = ui->labelImage->width();
    int h = ui->labelImage->height();
    ui->labelImage->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    ui->labelImage->setVisible(true);
}

PatientManagmentWindow::~PatientManagmentWindow()
{
    delete ui;
}
void PatientManagmentWindow::setUsername(const QString &username)
{
    QFont font1;
    font1.setFamily("Arial");
    font1.setPointSize(9);
    font1.setItalic(true);
    font1.setBold(true);

    QFont font2;
    font2.setFamily("Segoe UI");
    font2.setPointSize(16);

    ui->labelUsername->setFont(font1); // Apply the first font
    ui->labelUsername->setText(username);
    ui->labelUsername->setFont(font2); // Apply the second font
}
void PatientManagmentWindow::on_pushButtonBook_clicked()
{
    BookAppointmentWindow* book= new BookAppointmentWindow(this);
    book->exec();

}


void PatientManagmentWindow::on_pushButtonReschedule_clicked()
{
    RescheduleAppointmentWindow* reschedule = new RescheduleAppointmentWindow(this);
    reschedule->exec();
}


void PatientManagmentWindow::on_pushButtonCancel_clicked()
{
    CancelAppointmentWindow* cancel= new CancelAppointmentWindow(this);
    cancel->exec();
}


void PatientManagmentWindow::on_pushButtonChat_clicked()
{
    chat* chat =new class chat (this);
    chat->exec();
}

