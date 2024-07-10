#include "chat.h"
#include "ui_chat.h"

chat::chat(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::chat)
{
    ui->setupUi(this);
}

chat::~chat()
{
    delete ui;
}

void chat::on_pushButtonsubmit_clicked()
{
    ui->plainTextEdit_Chat->setPlainText("");
    ui->labelafterpresssubmit->setText("Your message was sent to the Admin. Expect a call very soon");
}

