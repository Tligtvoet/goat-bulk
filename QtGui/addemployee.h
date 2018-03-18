#ifndef ADDEMPLOYEE_H
#define ADDEMPLOYEE_H

#include <loginwindow.h>

#include <QDialog>


namespace Ui {
class addEmployee;
}

class addEmployee : public QDialog
{
    Q_OBJECT

public:
    explicit addEmployee(QWidget *parent = 0);
    ~addEmployee();

private slots:
    void on_back_button_clicked();

    void on_logout_button_clicked();

    void on_button_submit_clicked();

private:
    Ui::addEmployee *ui;
};

#endif // ADDEMPLOYEE_H
