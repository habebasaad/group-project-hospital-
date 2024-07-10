#ifndef BOOKAPPOINTMENTWINDOW_H
#define BOOKAPPOINTMENTWINDOW_H

#include <QDialog>

namespace Ui {
class BookAppointmentWindow;
}

class BookAppointmentWindow : public QDialog
{
    Q_OBJECT

public:
    explicit BookAppointmentWindow(QWidget *parent = nullptr);
    ~BookAppointmentWindow();

private slots:
    void clearSlotsList();
    void addSlotToList(const QString &slot);
    void on_radioButton_Nutrition_clicked();

    void on_radioButton_OG_clicked();

    void on_radioButton_Ophthalmology_clicked();

    void on_radioButton_internalmedicine_clicked();

    void on_radioButton_Dermatology_clicked();

private:
    Ui::BookAppointmentWindow *ui;
};

#endif // BOOKAPPOINTMENTWINDOW_H
