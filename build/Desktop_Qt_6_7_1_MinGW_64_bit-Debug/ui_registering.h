/********************************************************************************
** Form generated from reading UI file 'registering.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERING_H
#define UI_REGISTERING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registering
{
public:
    QPushButton *register_2;
    QGroupBox *role;
    QRadioButton *doc;
    QRadioButton *admin;
    QRadioButton *nurse;
    QRadioButton *patient;
    QLabel *errorregister;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *repass;
    QLabel *repasserror;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *passedit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *nameedit;
    QLabel *errorname;
    QGroupBox *gender;
    QRadioButton *male;
    QRadioButton *female;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *ageedit;
    QGroupBox *days;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox;
    QGroupBox *time;
    QLineEdit *toedit;
    QLineEdit *fromedit;
    QLabel *label_8;
    QLabel *label_9;
    QGroupBox *groupBox_speciality;
    QRadioButton *radioButton_Nutrition;
    QRadioButton *radioButton_OG;
    QRadioButton *radioButton_Ophthalmology;
    QRadioButton *radioButton_internalmedicine;
    QRadioButton *radioButton_Dermatology;
    QRadioButton *radioButton_Dermatology_2;

    void setupUi(QDialog *registering)
    {
        if (registering->objectName().isEmpty())
            registering->setObjectName("registering");
        registering->resize(496, 605);
        register_2 = new QPushButton(registering);
        register_2->setObjectName("register_2");
        register_2->setGeometry(QRect(50, 570, 80, 24));
        role = new QGroupBox(registering);
        role->setObjectName("role");
        role->setGeometry(QRect(10, 180, 131, 161));
        doc = new QRadioButton(role);
        doc->setObjectName("doc");
        doc->setGeometry(QRect(10, 30, 91, 22));
        admin = new QRadioButton(role);
        admin->setObjectName("admin");
        admin->setGeometry(QRect(10, 60, 91, 22));
        nurse = new QRadioButton(role);
        nurse->setObjectName("nurse");
        nurse->setGeometry(QRect(10, 90, 91, 22));
        patient = new QRadioButton(role);
        patient->setObjectName("patient");
        patient->setGeometry(QRect(10, 120, 91, 22));
        errorregister = new QLabel(registering);
        errorregister->setObjectName("errorregister");
        errorregister->setGeometry(QRect(160, 570, 151, 20));
        horizontalLayoutWidget_3 = new QWidget(registering);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 90, 481, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_3);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        repass = new QLineEdit(horizontalLayoutWidget_3);
        repass->setObjectName("repass");

        horizontalLayout_3->addWidget(repass);

        repasserror = new QLabel(horizontalLayoutWidget_3);
        repasserror->setObjectName("repasserror");

        horizontalLayout_3->addWidget(repasserror);

        horizontalLayoutWidget_2 = new QWidget(registering);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(10, 50, 481, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        passedit = new QLineEdit(horizontalLayoutWidget_2);
        passedit->setObjectName("passedit");

        horizontalLayout_2->addWidget(passedit);

        horizontalLayoutWidget = new QWidget(registering);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 481, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        nameedit = new QLineEdit(horizontalLayoutWidget);
        nameedit->setObjectName("nameedit");

        horizontalLayout->addWidget(nameedit);

        errorname = new QLabel(horizontalLayoutWidget);
        errorname->setObjectName("errorname");

        horizontalLayout->addWidget(errorname);

        gender = new QGroupBox(registering);
        gender->setObjectName("gender");
        gender->setGeometry(QRect(240, 180, 141, 101));
        male = new QRadioButton(gender);
        male->setObjectName("male");
        male->setGeometry(QRect(10, 30, 91, 22));
        female = new QRadioButton(gender);
        female->setObjectName("female");
        female->setGeometry(QRect(10, 60, 91, 22));
        horizontalLayoutWidget_4 = new QWidget(registering);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(10, 130, 481, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_4);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        ageedit = new QLineEdit(horizontalLayoutWidget_4);
        ageedit->setObjectName("ageedit");

        horizontalLayout_4->addWidget(ageedit);

        days = new QGroupBox(registering);
        days->setObjectName("days");
        days->setGeometry(QRect(10, 360, 211, 111));
        checkBox_2 = new QCheckBox(days);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(10, 20, 77, 22));
        checkBox_4 = new QCheckBox(days);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(10, 50, 77, 22));
        checkBox_6 = new QCheckBox(days);
        checkBox_6->setObjectName("checkBox_6");
        checkBox_6->setGeometry(QRect(10, 80, 77, 22));
        checkBox_7 = new QCheckBox(days);
        checkBox_7->setObjectName("checkBox_7");
        checkBox_7->setGeometry(QRect(100, 80, 77, 22));
        checkBox_3 = new QCheckBox(days);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(100, 50, 101, 22));
        checkBox = new QCheckBox(days);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(100, 20, 77, 22));
        time = new QGroupBox(registering);
        time->setObjectName("time");
        time->setGeometry(QRect(240, 290, 201, 71));
        toedit = new QLineEdit(time);
        toedit->setObjectName("toedit");
        toedit->setGeometry(QRect(130, 30, 41, 31));
        fromedit = new QLineEdit(time);
        fromedit->setObjectName("fromedit");
        fromedit->setGeometry(QRect(50, 30, 41, 31));
        label_8 = new QLabel(time);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(100, 30, 21, 31));
        label_9 = new QLabel(time);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 30, 31, 31));
        groupBox_speciality = new QGroupBox(registering);
        groupBox_speciality->setObjectName("groupBox_speciality");
        groupBox_speciality->setGeometry(QRect(240, 370, 241, 161));
        groupBox_speciality->setStyleSheet(QString::fromUtf8("font: 700 italic 14pt \"Segoe UI\";\n"
"font: 12pt \"Segoe UI\";"));
        radioButton_Nutrition = new QRadioButton(groupBox_speciality);
        radioButton_Nutrition->setObjectName("radioButton_Nutrition");
        radioButton_Nutrition->setGeometry(QRect(10, 30, 121, 18));
        radioButton_OG = new QRadioButton(groupBox_speciality);
        radioButton_OG->setObjectName("radioButton_OG");
        radioButton_OG->setGeometry(QRect(10, 50, 221, 21));
        radioButton_Ophthalmology = new QRadioButton(groupBox_speciality);
        radioButton_Ophthalmology->setObjectName("radioButton_Ophthalmology");
        radioButton_Ophthalmology->setGeometry(QRect(10, 70, 131, 21));
        radioButton_internalmedicine = new QRadioButton(groupBox_speciality);
        radioButton_internalmedicine->setObjectName("radioButton_internalmedicine");
        radioButton_internalmedicine->setGeometry(QRect(10, 90, 151, 21));
        radioButton_Dermatology = new QRadioButton(groupBox_speciality);
        radioButton_Dermatology->setObjectName("radioButton_Dermatology");
        radioButton_Dermatology->setGeometry(QRect(10, 110, 131, 21));
        radioButton_Dermatology_2 = new QRadioButton(groupBox_speciality);
        radioButton_Dermatology_2->setObjectName("radioButton_Dermatology_2");
        radioButton_Dermatology_2->setGeometry(QRect(10, 130, 131, 21));

        retranslateUi(registering);

        QMetaObject::connectSlotsByName(registering);
    } // setupUi

    void retranslateUi(QDialog *registering)
    {
        registering->setWindowTitle(QCoreApplication::translate("registering", "Dialog", nullptr));
        register_2->setText(QCoreApplication::translate("registering", "register", nullptr));
        role->setTitle(QCoreApplication::translate("registering", "What is your role?", nullptr));
        doc->setText(QCoreApplication::translate("registering", "doctor", nullptr));
        admin->setText(QCoreApplication::translate("registering", "admin", nullptr));
        nurse->setText(QCoreApplication::translate("registering", "nurse", nullptr));
        patient->setText(QCoreApplication::translate("registering", "patient", nullptr));
        errorregister->setText(QCoreApplication::translate("registering", "<html><head/><body><p><span style=\" color:#ff0000;\">* All fields must be filled</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("registering", "re-type password", nullptr));
        repasserror->setText(QCoreApplication::translate("registering", "<html><head/><body><p><span style=\" color:#ff0000;\">* Not Matching</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("registering", "password", nullptr));
        label_2->setText(QCoreApplication::translate("registering", "username", nullptr));
        errorname->setText(QCoreApplication::translate("registering", "<html><head/><body><p><span style=\" color:#ff0000;\">* Already Existing</span></p></body></html>", nullptr));
        gender->setTitle(QCoreApplication::translate("registering", "What is your gender?", nullptr));
        male->setText(QCoreApplication::translate("registering", "male", nullptr));
        female->setText(QCoreApplication::translate("registering", "female", nullptr));
        label_6->setText(QCoreApplication::translate("registering", "age", nullptr));
        days->setTitle(QCoreApplication::translate("registering", "Choose your working days", nullptr));
        checkBox_2->setText(QCoreApplication::translate("registering", "Sunday", nullptr));
        checkBox_4->setText(QCoreApplication::translate("registering", "Tuesday", nullptr));
        checkBox_6->setText(QCoreApplication::translate("registering", "Thursday", nullptr));
        checkBox_7->setText(QCoreApplication::translate("registering", "Saturday", nullptr));
        checkBox_3->setText(QCoreApplication::translate("registering", "Wednesday", nullptr));
        checkBox->setText(QCoreApplication::translate("registering", "Monday", nullptr));
        time->setTitle(QCoreApplication::translate("registering", "Write your working time", nullptr));
        label_8->setText(QCoreApplication::translate("registering", "To", nullptr));
        label_9->setText(QCoreApplication::translate("registering", "From", nullptr));
        groupBox_speciality->setTitle(QCoreApplication::translate("registering", "Speciality", nullptr));
        radioButton_Nutrition->setText(QCoreApplication::translate("registering", "Nutrition", nullptr));
        radioButton_OG->setText(QCoreApplication::translate("registering", "Obstetrics and Gynecology", nullptr));
        radioButton_Ophthalmology->setText(QCoreApplication::translate("registering", "Ophthalmology", nullptr));
        radioButton_internalmedicine->setText(QCoreApplication::translate("registering", "Internal Medicine", nullptr));
        radioButton_Dermatology->setText(QCoreApplication::translate("registering", "Dermatology", nullptr));
        radioButton_Dermatology_2->setText(QCoreApplication::translate("registering", "Other", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registering: public Ui_registering {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERING_H
