#ifndef NURSEWINDOW_H
#define NURSEWINDOW_H

#include <QDialog>
#include "nurse.h"

namespace Ui {
class nursewindow;
}

class nursewindow : public QDialog
{
    Q_OBJECT

public:
    explicit nursewindow(QWidget *parent = nullptr,nurse n=nurse());
    ~nursewindow();

private:
    Ui::nursewindow *ui;
};

#endif // NURSEWINDOW_H
