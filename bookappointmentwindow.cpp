#include "bookappointmentwindow.h"
#include "ui_bookappointmentwindow.h"
#include <qlist.h>
#include <QListWidgetItem>

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
    // Example: Populate slots for Nutrition
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

