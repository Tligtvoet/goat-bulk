#ifndef EDITEMPLOYEE_H
#define EDITEMPLOYEE_H

#include "loginmanager.h"
#include "loginwindow.h"
#include "menuAdministrator.h"

#include <QDialog>

namespace Ui {
class editEmployee;
}

class editEmployee : public QDialog
{
    Q_OBJECT

public:
    explicit editEmployee(QWidget *parent = 0);
    ~editEmployee();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::editEmployee *ui;
};

#endif // EDITEMPLOYEE_H
