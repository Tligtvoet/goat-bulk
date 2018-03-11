#ifndef EMPLOYEETABLE_H
#define EMPLOYEETABLE_H

#include "constants.h"
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
    void close();

private:
    QPushButton *submitButton;
    QPushButton *revertButton;
    QPushButton *quitButton;
    QDialogButtonBox *buttonBox;
    QSqlTableModel *model;
    Widg::EmployeeTable *widg;
};

#endif // EMPLOYEETABLE_H
