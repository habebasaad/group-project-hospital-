#ifndef PATIENTMANAGMENTWINDOW_H
#define PATIENTMANAGMENTWINDOW_H

#include <QDialog>
#include <QFile>
namespace Ui {
class PatientManagmentWindow;
}

class PatientManagmentWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PatientManagmentWindow(QWidget *parent = nullptr);
    ~PatientManagmentWindow();
     void setUsername(const QString &username);

private slots:
    void on_pushButtonBook_clicked();

    void on_pushButtonReschedule_clicked();

    void on_pushButtonCancel_clicked();

    void on_pushButtonChat_clicked();

private:
    Ui::PatientManagmentWindow *ui;

};

#endif // PATIENTMANAGMENTWINDOW_H
