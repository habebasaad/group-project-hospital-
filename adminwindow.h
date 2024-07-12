#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QDialog>
#include "admin.h"
#include "drclass.h"
namespace Ui {
class adminwindow;
}

class adminwindow : public QDialog
{
    Q_OBJECT

public:
    explicit adminwindow(QWidget *parent = nullptr,admin ad=admin("","","",0), drclass d= drclass("","","","",0));
    ~adminwindow();

private slots:
    void on_pat_clicked();

    void on_staff_clicked();

    void on_submit_clicked();

private:
    Ui::adminwindow *ui;
};

#endif // ADMINWINDOW_H
