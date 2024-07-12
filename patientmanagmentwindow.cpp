#include "patientmanagmentwindow.h"
#include "ui_patientmanagmentwindow.h"
#include <rescheduleappointmentwindow.h>
#include <bookappointmentwindow.h>
#include <cancelappointmentwindow.h>
#include <chat.h>
#include <qpixmap.h>
#include<mainwindow.h>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>
#include <patient.h>



PatientManagmentWindow::PatientManagmentWindow(QWidget *parent,patient p) :
    QDialog(parent),
    ui(new Ui::PatientManagmentWindow),
    currentPatient(p),
    submit(false) // Initialize submit as false
{
    ui->setupUi(this);
    //ui->labelUsername->setText(ui->labelUsername->text());
    QPixmap pix(":/Images/Imagepatientwindow");
    ui->comboBoxCancel->setVisible(false);
    ui->comboBoxReschedule->setVisible(false);
    //int w = ui->labelImage->width();
    ui->pushButtonSubmit->setVisible(false);
    ui->labelHello->setText("Hello "+currentPatient.name);
    //int h = ui->labelImage->height();
    //ui->labelImage->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
   // ui->labelImage->setVisible(true);
}

PatientManagmentWindow::~PatientManagmentWindow()
{
    delete ui;
}
// void PatientManagmentWindow::setPatient(const patient &patient)
// {
//     currentPatient = patient;
// }
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
    BookAppointmentWindow* book = new BookAppointmentWindow(this);
    book->exec();



}


void PatientManagmentWindow::on_pushButtonReschedule_clicked()
{
    ui->comboBoxReschedule->setVisible(true);
    ui->pushButtonSubmit->setVisible(true);
    ui->pushButtonCancel->setEnabled(false);
    //submit = true;

    //RescheduleAppointmentWindow* reschedule = new RescheduleAppointmentWindow(this);
    //reschedule->exec();
}


void PatientManagmentWindow::on_pushButtonCancel_clicked()
{
    ui->comboBoxCancel->setVisible(true);
    ui->pushButtonSubmit->setVisible(true);
    ui->pushButtonReschedule->setEnabled(false);
    //CancelAppointmentWindow* cancel= new CancelAppointmentWindow(this);
    //cancel->exec();
}

void PatientManagmentWindow::on_pushButtonChat_clicked()
{
    chat* chat =new class chat (this);
    chat->exec();
}

void PatientManagmentWindow::on_pushButtonMedical_Record_clicked()
{
    QString filePath = ":/Medical record file/medical record.txt";
QString medicalRecord;

if (!filePath.isEmpty()) {
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        QString line;
        bool found = false;
        while (!in.atEnd()) {
            line = in.readLine().trimmed(); // Read and trim whitespace
            if (line.startsWith("Name: " + currentPatient.name)) {
                found = true;
                medicalRecord += line + "\n";
                while (!in.atEnd() && !line.isEmpty()) {
                    line = in.readLine().trimmed();
                    if (!line.isEmpty()) {
                        medicalRecord += line + "\n";
                    }
                }
                break;
            }
        }
        file.close();

        if (found) {
            QMessageBox::information(this, tr("Medical Record"), medicalRecord);
        } else {
            medicalRecord="Name: "+ currentPatient.name+"\nAge "+ QString::number(currentPatient.age)+"\nGender: "+currentPatient.gender+"\nNo Medical Record\n";
            QMessageBox::information(this, tr("Error"), medicalRecord);
        }
    } else {
        QMessageBox::critical(this, tr("Error"), tr("Failed to open the file."));
    }
}
}
void PatientManagmentWindow::addToAppointments(const QString &slot)
{
    // Determine selected specialty from UI, assuming it's stored in a member variable
    QString selectedSpecialty = "Selected Specialty"; // Replace with actual logic to get specialty

    // Update appointments map
    appointments[slot] = selectedSpecialty;

    // Update ComboBoxes in other windows (RescheduleAppointmentWindow and CancelAppointmentWindow)
    updateComboBoxes();
}

void PatientManagmentWindow::updateComboBoxes()
{
    // Update ComboBox in RescheduleAppointmentWindow
    ui->comboBoxReschedule->clear();
    for (auto it = appointments.begin(); it != appointments.end(); ++it) {
        ui->comboBoxReschedule->addItem(it.key() + " - " + it.value());
    }

    // Update ComboBox in CancelAppointmentWindow
    ui->comboBoxCancel->clear();
    for (auto it = appointments.begin(); it != appointments.end(); ++it) {
        ui->comboBoxCancel->addItem(it.key() + " - " + it.value());
    }
}


void PatientManagmentWindow::on_pushButtonSubmit_clicked()
{
    if (ui->comboBoxCancel->isVisible()) {
        int currentIndex = ui->comboBoxCancel->currentIndex();
        if (currentIndex >= 0) {
            QString selectedItem = ui->comboBoxCancel->itemText(currentIndex);
            appointments.remove(selectedItem.section(" - ", 0, 0)); // Remove slot from appointments map
            ui->comboBoxCancel->removeItem(currentIndex); // Remove item from ComboBox#
        }
    }

    if (ui->comboBoxReschedule->isVisible()) {
        int currentIndex = ui->comboBoxReschedule->currentIndex();
        if (currentIndex >= 0) {
            QString selectedItem = ui->comboBoxReschedule->itemText(currentIndex);
            appointments.remove(selectedItem.section(" - ", 0, 0)); // Remove slot from appointments map
            ui->comboBoxReschedule->removeItem(currentIndex); // Remove item from ComboBox
            BookAppointmentWindow* app = new BookAppointmentWindow(this);
            app->exec();
        }
    }
}

