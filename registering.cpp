#include "registering.h"
#include "ui_registering.h"
#include "users.h"
#include "mainwindow.h"
#include "patient.h"

registering::registering(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registering)
{
    ui->setupUi(this);
    ui->errorname->setVisible(false);
    ui->errorregister->setVisible(false);
    ui->repasserror->setVisible(false);
    ui->groupBox_speciality->setVisible(false);
    ui->time->setVisible(false);
    ui->days->setVisible(false);
}

registering::~registering()
{
    delete ui;
}

void registering::on_register_2_clicked()
{
    ui->errorname->setVisible(false);
    ui->errorregister->setVisible(false);
    ui->repasserror->setVisible(false);

    QString name= ui->nameedit->text();
    for (int i=0;i<patients.size();i++)
    {
        if (name==patients[i].name)
            ui->errorname->setVisible(true);
    }
    for (int i=0;i<admins.size();i++)
    {
        if (name==admins[i].username)
            ui->errorname->setVisible(true);
    }

    int age=0;
    if (ui->ageedit->text()!="")
    {
    age =ui->ageedit->text().toInt();
    }
    QString gender;
    if (ui->female->isChecked())
        gender="female";
    else if(ui->male->isChecked())
        gender="male";

    QString role;
    if (ui->patient->isChecked())
        role="patient";
    else if(ui->admin->isChecked())
        role="admin";
    else if (ui->doc->isChecked())
        role="doctor";
    else if (ui->nurse->isChecked())
        role="nurse";

    QString pass;
    if (ui->repass->text()!=ui->passedit->text())
        ui->repasserror->setVisible(true);
    else
        pass=ui->passedit->text();

    if (name==""||pass==""||gender==""||age==0||role=="")
        ui->errorregister->setVisible(true);

    if (!ui->repasserror->isVisible()&&!ui->errorregister->isVisible()&&!ui->errorname->isVisible())
    {
        if (role=="admin")
        {
            admins.push_back(admin(name,pass,gender,age));
        }
        else if (role=="patient")
        {
            patients.push_back(patient(name,pass,age,gender));
        }
        /////add doctor and nurse
        hide();
        MainWindow *win=new MainWindow(this);
        win->show();
    }
}

void registering::on_doc_clicked()
{
    ui->days->setVisible(true);
    ui->time->setVisible(true);
    ui->groupBox_speciality->setVisible(true);
    //////store data in object dr
}


void registering::on_nurse_clicked()
{
    ui->days->setVisible(true);
    ui->time->setVisible(true);
    //////store data in object nurse
}

