#ifndef NEWTABLE_H
#define NEWTABLE_H

#include "constants.h"
#include "employeemanager.h"
#include "user.h"
#include <QDebug>
#include <QList>
#include <QWidget>
#include <QDialog>
#include <QtSql>
#include <QSqlTableModel>

namespace Ui {
class newTable;
}

class newTable : public QWidget
{
    Q_OBJECT

public:
    explicit newTable(QWidget *parent = 0);
    ~newTable();

private:
    Ui::newTable *ui;
    QList <QSqlRecord> EmployeeList;
};

#endif // NEWTABLE_H
