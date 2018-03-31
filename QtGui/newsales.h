#ifndef NEWSALES_H
#define NEWSALES_H

#include "menu.h"
#include <iostream>
#include <QMainWindow>
#include <QInputDialog>
#include <QFile>
#include <QTextStream>

namespace Ui {
class newSales;
}

class newSales : public QWidget
{
    Q_OBJECT

public:
    explicit newSales(QWidget *parent = 0);
    QString nameOfCustomer(int);
    QString memberStatus(int);
    ~newSales();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_clicked();

private:
    Ui::newSales *ui;
};

#endif // NEWSALES_H
