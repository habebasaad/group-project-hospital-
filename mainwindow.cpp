#include "mainwindow.h"
#include "patientmanagmentwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "registering.h"
#include "users.h"
#include "adminwindow.h"
#include "admin.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    imageLabel = new QLabel(this);

    QPixmap pix(":/Images/imageloginpage.jpg");
    int w = ui->labelimagelogin->width();
    int h = ui->labelimagelogin->height();
    ui->labelimagelogin->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    ui->labelimagelogin->setVisible(true);
    ui->error->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonLogin_clicked()
{
    /*for (int i=0;i < patients.size() ;i++)
    {
        if (patients[i].username==ui->lineEditUsername->text() && patients[i].pass==ui->lineEditPassword->text())
        {

                // Open patient management window
                hide(); // Hide the login window

                // Create and show PatientManagmentWindow
                PatientManagmentWindow* patientWindow = new PatientManagmentWindow(this);
                patientWindow->setUsername(ui->lineEditUsername->text());
                ////////////// you should sent all the object patient[i] to have access to the data for this patient not just its name
                patientWindow->show();

                return;

        }
    }*/
    for (int i = 0; i < patients.size(); ++i) {
        if (patients[i].name == ui->lineEditUsername->text() && patients[i].pass == ui->lineEditPassword->text()) {

            hide();
            PatientManagmentWindow* patientWindow = new PatientManagmentWindow(this);
            patientWindow->setPatient(patients[i]);
            patientWindow->show();

            return;
        }
    }

    for (int i=0;i < admins.size() ;i++)
    {
        if (admins[i].username==ui->lineEditUsername->text() && admins[i].pass==ui->lineEditPassword->text())
        {
            hide();
            adminwindow* ad=new adminwindow(this,admins[i]);
            ad->show();
            return;

        }
    }
    ui->error->setVisible(true);
}


void MainWindow::on_PushbuttonRegister_clicked()
{
    hide();
    registering* reg = new registering(this);
    reg->show();
}

