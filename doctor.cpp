#include "doctor.h"
#include "ui_doctor.h"
#include "drclass.h"
#include "drclass.cpp"
#include <QFile>
#include <QMessageBox>
#include <QString>

doctor::doctor(QWidget *parent, drclass doc)
    : QDialog(parent)

    , ui(new Ui::doctor)

{
    ui->setupUi(this);
    currdoc=doc;
}

doctor::~doctor()
{
    delete ui;
}

void doctor::on_pushButton_profile_clicked()
{
    QString profile = "Name: "+currdoc.username;
    ///continue
}









