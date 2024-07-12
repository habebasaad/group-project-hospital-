#include "drclass.h"

drclass::drclass() {

}
drclass::drclass(QString n, QString p, QString s , QString g, int a ){
    username = n;
    pass =p;
    specialization =s;
    gender =g;
    age = a;
}
