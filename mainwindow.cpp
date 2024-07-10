#include "mainwindow.h"
#include "patientmanagmentwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "registering.h"
#include "users.h"

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
    for (int i=0;i < usernames.size() ;i++)
    {
        if (usernames[i]==ui->lineEditUsername->text() && passwords[i]==ui->lineEditPassword->text())
        {
            if (roles[i]=="staff")
            {
                hide();
                //open staff management

            }
            else if (roles[i]=="patient")
            {
                // Open patient management window
                hide(); // Hide the login window

                // Create and show PatientManagmentWindow
                PatientManagmentWindow* patientWindow = new PatientManagmentWindow(this);
                patientWindow->setUsername(ui->lineEditUsername->text());
                patientWindow->show();

                return;
            }
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

