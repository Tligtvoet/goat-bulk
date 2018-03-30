#ifndef MENUMANAGER_H
#define MENUMANAGER_H

#include "loginwindow.h"
#include "addMember.h"
#include "deleteMember.h"
#include "employeetable.h"
#include "listMembersWindow.h"

#include <QDialog>

namespace Ui {
class menuManager;
}

class menuManager : public QDialog
{
    Q_OBJECT

public:
    explicit menuManager(QWidget *parent = 0);
    ~menuManager();

private slots:
    void on_pushButton_logout_clicked();

    void on_pushButton_itemSearch_clicked();

    void on_pushButton_displayMembers_clicked();

    void on_pushButton_displaySalesReport_clicked();

    void on_pushButton_displayPurchases_clicked();

    void on_pushButton_inventory_clicked();

private:
    Ui::menuManager *ui;
};

#endif // MENUMANAGER_H
