#include "employeetable.h"
#include "ui_employeetable.h"

EmployeeTable::EmployeeTable(const QString &tableName, QWidget *parent) :
    QWidget(parent)
{
    model = new QSqlTableModel(this);
        model->setTable(tableName);
        model->setEditStrategy(QSqlTableModel::OnManualSubmit);
        model->select();

        model->setHeaderData(0, Qt::Horizontal, tr("ID"));
        model->setHeaderData(1, Qt::Horizontal, tr("Username"));
        model->setHeaderData(2, Qt::Horizontal, tr("Password"));
        model->setHeaderData(3, Qt::Horizontal, tr("Administrator"));

        QTableView *view = new QTableView;
        view->setModel(model);
        view->resizeColumnsToContents();

        submitButton = new QPushButton(tr("Submit"));
        submitButton->setDefault(true);
        revertButton = new QPushButton(tr("&Revert"));
        quitButton = new QPushButton(tr("Quit"));

        buttonBox = new QDialogButtonBox(Qt::Vertical);
        buttonBox->addButton(submitButton, QDialogButtonBox::ActionRole);
        buttonBox->addButton(revertButton, QDialogButtonBox::ActionRole);
        buttonBox->addButton(quitButton, QDialogButtonBox::RejectRole);

        connect(submitButton, &QPushButton::clicked, this, &EmployeeTable::submit);
        connect(revertButton, &QPushButton::clicked,  model, &QSqlTableModel::revertAll);
        connect(quitButton, &QPushButton::clicked, this, &EmployeeTable::close);

        QHBoxLayout *mainLayout = new QHBoxLayout;
        mainLayout->addWidget(view);
        mainLayout->addWidget(buttonBox);
        setLayout(mainLayout);

        setWindowTitle(tr("Employee's"));

}

void EmployeeTable::submit()
{

    model->database().transaction();
    if (model->submitAll()) {
        model->database().commit();
    } else {
        model->database().rollback();
        QMessageBox::warning(this, tr("Employee's"),
                             tr("The database reported an error: %1")
                             .arg(model->lastError().text()));
    }
}
