#include "nursewindow.h"
#include "ui_nursewindow.h"

nursewindow::nursewindow(QWidget *parent,nurse n)
    : QDialog(parent)
    , ui(new Ui::nursewindow)
{
    ui->setupUi(this);
}

nursewindow::~nursewindow()
{
    delete ui;
}
