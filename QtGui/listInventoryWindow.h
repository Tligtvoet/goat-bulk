#ifndef LISTINVENTORYWINDOW_H
#define LISTINVENTORYWINDOW_H

#include <QDialog>
#include "loginwindow.h"
#include "inventorymanager.h"
#include "displayPurchases.h"

namespace Ui {
class listInventoryWindow;
}

class listInventoryWindow : public QDialog
{
    Q_OBJECT

public:
    explicit listInventoryWindow(QWidget *parent = 0);
    ~listInventoryWindow();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_logout_clicked();

private:
    Ui::listInventoryWindow *ui;
};

#endif // LISTINVENTORYWINDOW_H
