#ifndef DELETEITEM_H
#define DELETEITEM_H

#include <QDialog>
#include "loginwindow.h"
#include "inventory.h"
#include "inventoryManager.h"

namespace Ui {
class deleteItem;
}

class deleteItem : public QDialog
{
    Q_OBJECT

public:
    explicit deleteItem(QWidget *parent = 0);
    ~deleteItem();
private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_logout_clicked();

    void on_pushButton_3_clicked();
private:
    Ui::deleteItem *ui;
};

#endif // DELETEITEM_H
