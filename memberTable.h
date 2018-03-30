#ifndef MEMBERTABLE_H
#define MEMBERTABLE_H

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
class MemberTable;
}

class MemberTable : public QWidget
{
    Q_OBJECT

public:
    explicit MemberTable(const QString &tableName, QWidget *parent = nullptr);
    ~MemberTable();

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
    Widg::MemberTable *widg;
};

#endif // MEMBERTABLE_H
