
#ifndef USERS_H
#define USERS_H
#include <QString>
#include <QVector>
#include "patient.h"
#include "admin.h"

extern QVector<patient> patients;
extern QVector<admin> admins;
class users
{
public:
    users();
};

#endif // USERS_H
