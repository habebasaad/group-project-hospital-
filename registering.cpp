#include "registering.h"
#include "ui_registering.h"
#include "users.h"

registering::registering(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registering)
{
    ui->setupUi(this);
    ui->errorname->setVisible(false);
    ui->errorregister->setVisible(false);
    ui->repasserror->setVisible(false);

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

    QString username= ui->nameedit->text();
    for (int i=0;i<usernames.size();i++)
    {
        if (username==usernames[i])
            ui->errorname->setVisible(true);
    }
    int age=0;
    if (ui->ageedit->text()!=""){
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
    else if(ui->admin->isChecked()||ui->doc->isChecked()||ui->nurse->isChecked())
        role="staff";



    QString pass;
    if (ui->repass->text()!=ui->passedit->text())
        ui->repasserror->setVisible(true);
    else
        pass=ui->passedit->text();

    if (username==""||pass==""||gender==""||age==0||role=="")
        ui->errorregister->setVisible(true);

    if (!ui->repasserror->isVisible()&&!ui->errorregister->isVisible()&&!ui->errorname->isVisible())
    {
        usernames.push_back(username);
        ages.push_back(age);
        passwords.push_back(pass);
        roles.push_back(role);
        hide();
        if (role=="staff")
        {
            hide();
            //open staff management

        }
        else if (role=="patient")
        {
            hide();
            //open patient management
        }
    }
}
