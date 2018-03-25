#ifndef EXPIRATIONSEARCH_H
#define EXPIRATIONSEARCH_H

#include <QDialog>
#include "menuAdministrator.h"
#include "loginwindow.h"

namespace Ui {
class expirationSearch;
}

class expirationSearch : public QDialog
{
    Q_OBJECT

public:
    explicit expirationSearch(QWidget *parent = 0);
    ~expirationSearch();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_comboBox_month_activated(int index);

private:
    Ui::expirationSearch *ui;
};

#endif // EXPIRATIONSEARCH_H
