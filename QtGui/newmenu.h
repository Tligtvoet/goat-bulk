#ifndef NEWMENU_H
#define NEWMENU_H

#include <QDialog>

namespace Ui {
class newMenu;
}

class newMenu : public QDialog
{
    Q_OBJECT

public:
    explicit newMenu(QWidget *parent = 0);
    ~newMenu();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::newMenu *ui;
};

#endif // NEWMENU_H
