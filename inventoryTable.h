#ifndef INVENTORYTABLE_H
#define INVENTORYTABLE_H

#include "constants.h"
#include "menuAdministrator.h"

#include <QtWidgets>
#include <QDialog>
#include <QtSql>
#include <QSqlTableModel>

class QDialogButtonBox;
class QPushButton;
class QSqlTableModel;

namespace Widg {
class inventoryTable;
}

class inventoryTable : public QWidget
{
    Q_OBJECT

public:
    explicit inventoryTable(const QString &tableName, QWidget *parent = nullptr);
    ~inventoryTable();

private slots:
    void submit();
    void back();

private:
    QPushButton *backButton;
    QPushButton *submitButton;
    QPushButton *revertButton;
    QPushButton *quitButton;
    QDialogButtonBox *buttonBox;
    QSqlTableModel *model;
    Widg::inventoryTable *widg;
};

#endif // INVENTORYTABLE_H
