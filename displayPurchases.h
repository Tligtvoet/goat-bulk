#ifndef DISPLAYPURCHASES_H
#define DISPLAYPURCHASES_H

#include <QDialog>
#include "loginwindow.h"

namespace Ui {
class displayPurchases;
}

class displayPurchases : public QDialog
{
    Q_OBJECT

public:
    explicit displayPurchases(QWidget *parent = 0);
    ~displayPurchases();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::displayPurchases *ui;
};

#endif // DISPLAYPURCHASES_H
