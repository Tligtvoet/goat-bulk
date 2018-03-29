#ifndef MENUADMINISTRATOR_H
#define MENUADMINISTRATOR_H

#include "addemployee.h"
#include "deleteemployee.h"
#include "editemployee.h"
#include "employeetable.h"
#include "addMember.h"
#include "deleteMember.h"
#include "memberTable.h"
#include "listMembersWindow.h"
#include "addItem.h"
#include "deleteItem.h"
#include "inventoryTable.h"
#include "displayItem.h"
#include "addSalesInfo.h"
#include "newsales.h"
#include "listInventoryWindow.h"
#include <QDialog>

namespace Ui {
class menuAdministrator;
}

class menuAdministrator : public QDialog
{
    Q_OBJECT

public:
    explicit menuAdministrator(QWidget *parent = 0);
    ~menuAdministrator();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_12_clicked();

private:
    Ui::menuAdministrator *ui;
};

#endif // MENUADMINISTRATOR_H
