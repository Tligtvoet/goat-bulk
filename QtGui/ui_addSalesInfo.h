/********************************************************************************
** Form generated from reading UI file 'addSalesInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSALESINFO_H
#define UI_ADDSALESINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addSalesInfo
{
public:
    QLabel *password;
    QLineEdit *lineEdit_itemName;
    QLineEdit *lineEdit_itemDate;
    QLineEdit *lineEdit_membID;
    QLabel *username;
    QPushButton *back_button;
    QPushButton *button_submit;
    QLabel *adminstatus;
    QLabel *addmemberlogo;
    QPushButton *logout_button;
    QLineEdit *lineEdit_itemCost;
    QLineEdit *lineEdit_itemQuantity;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *addSalesInfo)
    {
        if (addSalesInfo->objectName().isEmpty())
            addSalesInfo->setObjectName(QStringLiteral("addSalesInfo"));
        addSalesInfo->resize(451, 251);
        password = new QLabel(addSalesInfo);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(80, 90, 81, 21));
        lineEdit_itemName = new QLineEdit(addSalesInfo);
        lineEdit_itemName->setObjectName(QStringLiteral("lineEdit_itemName"));
        lineEdit_itemName->setGeometry(QRect(180, 120, 211, 20));
        lineEdit_itemDate = new QLineEdit(addSalesInfo);
        lineEdit_itemDate->setObjectName(QStringLiteral("lineEdit_itemDate"));
        lineEdit_itemDate->setGeometry(QRect(180, 60, 211, 21));
        lineEdit_membID = new QLineEdit(addSalesInfo);
        lineEdit_membID->setObjectName(QStringLiteral("lineEdit_membID"));
        lineEdit_membID->setGeometry(QRect(180, 90, 211, 21));
        username = new QLabel(addSalesInfo);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(80, 60, 81, 21));
        back_button = new QPushButton(addSalesInfo);
        back_button->setObjectName(QStringLiteral("back_button"));
        back_button->setGeometry(QRect(10, 10, 113, 32));
        button_submit = new QPushButton(addSalesInfo);
        button_submit->setObjectName(QStringLiteral("button_submit"));
        button_submit->setGeometry(QRect(180, 210, 113, 32));
        adminstatus = new QLabel(addSalesInfo);
        adminstatus->setObjectName(QStringLiteral("adminstatus"));
        adminstatus->setGeometry(QRect(80, 120, 131, 16));
        addmemberlogo = new QLabel(addSalesInfo);
        addmemberlogo->setObjectName(QStringLiteral("addmemberlogo"));
        addmemberlogo->setGeometry(QRect(180, 10, 91, 21));
        logout_button = new QPushButton(addSalesInfo);
        logout_button->setObjectName(QStringLiteral("logout_button"));
        logout_button->setGeometry(QRect(330, 10, 113, 32));
        lineEdit_itemCost = new QLineEdit(addSalesInfo);
        lineEdit_itemCost->setObjectName(QStringLiteral("lineEdit_itemCost"));
        lineEdit_itemCost->setGeometry(QRect(180, 150, 211, 20));
        lineEdit_itemQuantity = new QLineEdit(addSalesInfo);
        lineEdit_itemQuantity->setObjectName(QStringLiteral("lineEdit_itemQuantity"));
        lineEdit_itemQuantity->setGeometry(QRect(180, 180, 211, 20));
        label = new QLabel(addSalesInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 150, 71, 16));
        label_2 = new QLabel(addSalesInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 180, 81, 16));

        retranslateUi(addSalesInfo);

        QMetaObject::connectSlotsByName(addSalesInfo);
    } // setupUi

    void retranslateUi(QDialog *addSalesInfo)
    {
        addSalesInfo->setWindowTitle(QApplication::translate("addSalesInfo", "Dialog", nullptr));
        password->setText(QApplication::translate("addSalesInfo", "ID of Purchaser:", nullptr));
        username->setText(QApplication::translate("addSalesInfo", "Date:", nullptr));
        back_button->setText(QApplication::translate("addSalesInfo", "Back", nullptr));
        button_submit->setText(QApplication::translate("addSalesInfo", "Submit", nullptr));
        adminstatus->setText(QApplication::translate("addSalesInfo", "Item Name:", nullptr));
        addmemberlogo->setText(QApplication::translate("addSalesInfo", "Add Sales Info", nullptr));
        logout_button->setText(QApplication::translate("addSalesInfo", "Logout", nullptr));
        label->setText(QApplication::translate("addSalesInfo", "Item Price:", nullptr));
        label_2->setText(QApplication::translate("addSalesInfo", "Item Quantity:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addSalesInfo: public Ui_addSalesInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSALESINFO_H
