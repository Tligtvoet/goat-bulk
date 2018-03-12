#ifndef EMPLOYEETABLE_H
#define EMPLOYEETABLE_H

#include "constants.h"
#include "employeemanager.h"
#include "user.h"
#include <QList>
#include <QtWidgets>
#include <QDialog>
#include <QtSql>
#include <QSqlTableModel>

class QDialogButtonBox;
class QPushButton;
class QSqlTableModel;

namespace Widg {
class EmployeeTable;
}

class EmployeeTable : public QWidget
{
    Q_OBJECT

public:
    explicit EmployeeTable(const QString &tableName, QWidget *parent = nullptr);
    ~EmployeeTable();

private slots:
    void submit();
<<<<<<< HEAD
    //void close();

private:
    //QList <QSqlRecord> EmployeeList;
=======
    void back();

private:
    QPushButton *backButton;
>>>>>>> 086451568f83b1c9862a214df4333cbd1b8f99dc
    QPushButton *submitButton;
    QPushButton *revertButton;
    QPushButton *quitButton;
    QDialogButtonBox *buttonBox;
    QSqlTableModel *model;
    Widg::EmployeeTable *widg;
};

#endif // EMPLOYEETABLE_H
