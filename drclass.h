#ifndef DRCLASS_H
#define DRCLASS_H
#include <QString>
#include <QFile>
#include <QMap>

class drclass
{
public:
    drclass();
    drclass(QString n, QString p, QString s , QString g, int a);
    QString username;
    QString pass;
    QString specialization; // Example: Blood type of the patient
     QString gender;
    int age;
    QMap<int, int> schedule;
};

#endif // DRCLASS_H
