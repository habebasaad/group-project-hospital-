/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_chat
{
public:
    QPushButton *pushButtonsubmit;
    QPlainTextEdit *plainTextEdit_Chat;
    QLabel *labelsubmitclicked;

    void setupUi(QDialog *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName("chat");
        chat->resize(400, 300);
        pushButtonsubmit = new QPushButton(chat);
        pushButtonsubmit->setObjectName("pushButtonsubmit");
        pushButtonsubmit->setGeometry(QRect(270, 257, 80, 21));
        plainTextEdit_Chat = new QPlainTextEdit(chat);
        plainTextEdit_Chat->setObjectName("plainTextEdit_Chat");
        plainTextEdit_Chat->setGeometry(QRect(40, 20, 221, 191));
        labelsubmitclicked = new QLabel(chat);
        labelsubmitclicked->setObjectName("labelsubmitclicked");
        labelsubmitclicked->setGeometry(QRect(40, 230, 351, 20));

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QDialog *chat)
    {
        chat->setWindowTitle(QCoreApplication::translate("chat", "Dialog", nullptr));
        pushButtonsubmit->setText(QCoreApplication::translate("chat", "Submit", nullptr));
        labelsubmitclicked->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
