#ifndef REGISTERING_H
#define REGISTERING_H

#include <QDialog>

namespace Ui {
class registering;
}

class registering : public QDialog
{
    Q_OBJECT

public:
    explicit registering(QWidget *parent = nullptr);
    ~registering();

private slots:
    void on_register_2_clicked();

private:
    Ui::registering *ui;
};

#endif // REGISTERING_H
