#ifndef USERS_H
#define USERS_H
#include <QString>
#include <QVector>

extern QVector<QString> usernames ;
extern QVector<QString> passwords;
extern QVector<int> ages;
extern QVector<QString> roles;
extern QVector<QString> gender;


class users
{
public:
    users();
};

#endif // USERS_H
