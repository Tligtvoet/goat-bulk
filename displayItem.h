#ifndef DISPLAYITEM_H
#define DISPLAYITEM_H

#include <QDialog>
#include "loginwindow.h"

namespace Ui {
class displayItem;
}

class displayItem : public QDialog
{
    Q_OBJECT

public:
    explicit displayItem(QWidget *parent = 0);
    ~displayItem();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::displayItem *ui;
};

#endif // DISPLAYITEM_H
