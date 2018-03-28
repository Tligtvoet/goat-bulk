#ifndef ADDSALESINFO_H
#define ADDSALESINFO_H

#include "loginwindow.h"
#include "salesInfo.h"
#include "salesInfoManager.h"
#include <QDialog>

namespace Ui {
class addSalesInfo;
}

class addSalesInfo : public QDialog
{
    Q_OBJECT

public:
    explicit addSalesInfo(QWidget *parent = 0);
    ~addSalesInfo();

private slots:
    void on_logout_button_clicked();

    void on_back_button_clicked();

    void on_button_submit_clicked();

private:
    Ui::addSalesInfo *ui;
};

#endif // ADDSALESINFO_H
