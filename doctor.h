#ifndef DOCTOR_H
#define DOCTOR_H
#include "drclass.h"
#include <QDialog>

namespace Ui {
class doctor;
}

class doctor : public QDialog
{
    Q_OBJECT

public:
    explicit doctor(QWidget *parent = nullptr, drclass dr = drclass());
    ~doctor();

private slots:
    void on_pushButton_profile_clicked();

private:
    Ui::doctor *ui;
    drclass currdoc;
};

#endif // DOCTOR_H
