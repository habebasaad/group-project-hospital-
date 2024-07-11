#include "bookappointmentwindow.h"
#include "ui_bookappointmentwindow.h"
#include <qlist.h>
#include <QListWidgetItem>
#include <patient.h>
#include <patientmanagmentwindow.h>//>



BookAppointmentWindow::BookAppointmentWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BookAppointmentWindow)
{
    ui->setupUi(this);

    connect(ui->radioButton_Nutrition, &QRadioButton::clicked, this, &BookAppointmentWindow::on_radioButton_Nutrition_clicked);
    connect(ui->radioButton_OG, &QRadioButton::clicked, this, &BookAppointmentWindow::on_radioButton_OG_clicked);
    connect(ui->radioButton_Ophthalmology, &QRadioButton::clicked, this, &BookAppointmentWindow::on_radioButton_Ophthalmology_clicked);
    connect(ui->radioButton_internalmedicine, &QRadioButton::clicked, this, &BookAppointmentWindow::on_radioButton_internalmedicine_clicked);
    connect(ui->radioButton_Dermatology, &QRadioButton::clicked, this, &BookAppointmentWindow::on_radioButton_Dermatology_clicked);
    connect(ui->slotsListView, &QListWidget::itemClicked, this, &BookAppointmentWindow::on_slotsListView_itemClicked);
   // connect(ui->pushButtonSubmit, &QPushButton::clicked, this, &BookAppointmentWindow::on_pushButtonSubmit_clicked);
}

BookAppointmentWindow::~BookAppointmentWindow()
{
    delete ui;
}
void BookAppointmentWindow::clearSlotsList()
{
    ui->slotsListView->clear();
}
void BookAppointmentWindow::addSlotToList(const QString &slot)
{
    QListWidgetItem *item = new QListWidgetItem(slot);
    ui->slotsListView->addItem(item);
}



void BookAppointmentWindow::on_radioButton_Nutrition_clicked()
{
   ui->label_Available_slots->setText("Available slots and doctors are:");
    clearSlotsList();

    addSlotToList("Slot A");
    addSlotToList("Slot B");
    addSlotToList("Slot C");
}


void BookAppointmentWindow::on_radioButton_OG_clicked()
{
    ui->label_Available_slots->setText("Available slots and doctors are:");
    clearSlotsList();
    addSlotToList("Slot F");
    addSlotToList("Slot N");
    addSlotToList("Slot G");
}


void BookAppointmentWindow::on_radioButton_Ophthalmology_clicked()
{
    ui->label_Available_slots->setText("Available slots and doctors are:");
    clearSlotsList();
    addSlotToList("Slot 1");
    addSlotToList("Slot 2");
    addSlotToList("Slot 3");
}


void BookAppointmentWindow::on_radioButton_internalmedicine_clicked()
{
    ui->label_Available_slots->setText("Available slots and doctors are:");
    clearSlotsList();
    addSlotToList("Slot 3");
    addSlotToList("Slot 4");
    addSlotToList("Slot 5");
}


void BookAppointmentWindow::on_radioButton_Dermatology_clicked()
{
    ui->label_Available_slots->setText("Available slots and doctors are:");
    clearSlotsList();
    addSlotToList("Slot 6");
    addSlotToList("Slot 7");
    addSlotToList("Slot 8");
}


void BookAppointmentWindow::on_slotsListView_itemClicked(QListWidgetItem *item)
{
    //if (submitClicked) {
        QString selectedSlot = item->text();
        QString selectedSpecialty;

        if (ui->radioButton_Nutrition->isChecked()) {
            selectedSpecialty = "Nutrition";
        } else if (ui->radioButton_OG->isChecked()) {
            selectedSpecialty = "OG";
        } else if (ui->radioButton_Ophthalmology->isChecked()) {
            selectedSpecialty = "Ophthalmology";
        } else if (ui->radioButton_internalmedicine->isChecked()) {
            selectedSpecialty = "Internal Medicine";
        } else if (ui->radioButton_Dermatology->isChecked()) {
            selectedSpecialty = "Dermatology";
        }

        if (!selectedSpecialty.isEmpty()) {
            PatientManagmentWindow *parentWindow = qobject_cast<PatientManagmentWindow *>(parent());
            if (parentWindow) {
                parentWindow->appointments[selectedSlot] = selectedSpecialty;
                parentWindow->updateComboBoxes(); // Update the combo boxes
            }
       // }
      //  submitClicked = false; // Reset the flag after processing
    }
}

/*void BookAppointmentWindow::on_pushButtonSubmit_clicked()
{
    submitClicked = true;
}*/
