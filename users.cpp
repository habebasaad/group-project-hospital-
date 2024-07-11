#include "users.h"

#include <QString>
#include <QVector>
#include "patient.h"
#include "admin.h"

QVector<patient> patients={patient("Ali","1234",22,"male"),patient("Omar","4321",43,"male")};
QVector<admin> admins={admin("Saly","ssss","female",21),admin("Dina","dddd","female",32)};


users::users() {}
