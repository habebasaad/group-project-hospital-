#include "adminwindow.h"
#include "ui_adminwindow.h"
#include "admin.h"
#include "users.h"
#include "patientmanagmentwindow.h"

adminwindow::adminwindow(QWidget *parent,admin ad)
    : QDialog(parent)
    , ui(new Ui::adminwindow)
{
    ui->setupUi(this);
    ui->hello->setText("Hello "+ ad.username);
    ui->patbox->setVisible(false);
    ui->staffbox->setVisible(false);
    for (int i=0;i<patients.size();i++)
        ui->patbox->addItem(patients[i].username);
    /////add items for staff for docors and nurses
}

adminwindow::~adminwindow()
{
    delete ui;
}

void adminwindow::on_pat_clicked()
{
    ui->patbox->setVisible(true);
    ui->staff->setEnabled(false);
}


void adminwindow::on_staff_clicked()
{
    ui->staffbox->setVisible(true);
    ui->pat->setEnabled(false);
}


void adminwindow::on_submit_clicked()
{
    if (ui->staffbox->isVisible()){
        //check doctor , nurses vectors to know which one to handle
    }
    if (ui->patbox->isVisible()){
        for (int i=0;i<patients.size();i++)
            if (patients[i].username==ui->patbox->currentText())
            {
                hide();
                PatientManagmentWindow* win=new PatientManagmentWindow(this);
                /////should pass the whole object
                win->show();
            }
    }
}

