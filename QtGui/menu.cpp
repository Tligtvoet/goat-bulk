#include "menu.h"
#include "sales.h"
#include "newsales.h"
#include "ui_menu.h"
#include <QMessageBox>
#include <QComboBox>
#include <QPixmap>
#include <QDialog>

Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    int w, h;
    ui->setupUi(this);
    /*******************************************************************
     * Used for the main menu picture, which is located in the img
     *******************************************************************/
    QPixmap pix(":/img/img/unknown.png");
    w = ui->label_picture->width();
    h = ui->label_picture->height();
    ui->label_picture->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_combobox_selection_currentTextChanged(const QString &arg1) //Used for checking when an option is changed
{
    switch(arg1)
    {
    case "Sales Information":
        newSales *newSalesPtr = new newSales(this);
        this->close();
        newSalesPtr->show();
        break;
    case "Employee Management":

    }


}

void Menu::on_pushButton_clicked() // Correctly returns to login screen but if the user enters incorrect username/password or enters nothing and presses login button . . . shows invalidCreds message and closes
{
    LoginWindow* logintPtr = new LoginWindow(this);
    this->close();
    logintPtr->show();
}
