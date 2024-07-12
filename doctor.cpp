#include "doctor.h"
#include "ui_doctor.h"
#include "drclass.h"
#include <QFile>
#include <QMessageBox>
#include <QString>
#include "registering.h"
doctor::doctor(QWidget *parent, drclass d)
    : QDialog(parent)
    , ui(new Ui::doctor)

{
    ui->setupUi(this);
}

doctor::~doctor()
{
    delete ui;
}

void doctor::on_pushButton_profile_clicked()
{
    QMessageBox:: information(this, tr("profile"), "Name: " +d.username +"\nspecialization: "+d.specialize + "\nGender: "+d.gender+"\nAge: "+QString::number(d.age) );
}









