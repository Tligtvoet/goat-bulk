#ifndef MENU_H
#define MENU_H

#include "salesinfo.h"
#include "newsales.h"
#include "loginmanager.h"
#include <QMainWindow>

namespace Ui {

class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = 0);
    ~Menu();

private slots:
    void on_combobox_selection_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
