#ifndef ADDMEMBER_H
#define ADDMEMBER_H

#include <QDialog>
#include <loginwindow.h>

/*THIS SHOULD BE addEmployee.h */

namespace Ui {
class addMember;
}

class addMember : public QDialog
{
    Q_OBJECT

public:
    explicit addMember(QWidget *parent = 0);
    ~addMember();

private slots:
    void on_button_submit_clicked();

    void on_back_button_clicked();

    void on_logout_button_clicked();

private:
    Ui::addMember *ui;
};

#endif // ADDMEMBER_H
