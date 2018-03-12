#ifndef DELETEEMPLOYEE_H
#define DELETEEMPLOYEE_H

#include <QDialog>
#include <loginwindow.h>

namespace Ui {
class deleteEmployee;
}

class deleteEmployee : public QDialog
{
    Q_OBJECT

public:
    explicit deleteEmployee(QWidget *parent = 0);
    ~deleteEmployee();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::deleteEmployee *ui;
};

#endif // DELETEEMPLOYEE_H
