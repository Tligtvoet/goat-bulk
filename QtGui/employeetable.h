#ifndef EMPLOYEETABLE_H
#define EMPLOYEETABLE_H

#include "constants.h"
#include <QtWidgets>
#include <QDialog>
#include <QtSql>
#include <QSqlTableModel>

class QDialogButtonBox;
class QPushButton;
class QSqlTableModel;

class EmployeeTable : public QWidget
{
    Q_OBJECT

public:
    explicit EmployeeTable(const QString &tableName, QWidget *parent = nullptr);

private slots:
    void submit();

private:
    QPushButton *submitButton;
    QPushButton *revertButton;
    QPushButton *quitButton;
    QDialogButtonBox *buttonBox;
    QSqlTableModel *model;
};

#endif // EMPLOYEETABLE_H
