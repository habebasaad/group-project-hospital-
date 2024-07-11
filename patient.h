#ifndef PATIENT_H
#define PATIENT_H
#include <QString>
#include <QFile>

class patient
{
public:
    patient(QString, QString, int, QString);
    QString username;
    QString pass;
    int age;
    QString gender;
};

#endif // PATIENT_H
