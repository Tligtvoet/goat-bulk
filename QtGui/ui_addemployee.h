/********************************************************************************
** Form generated from reading UI file 'addemployee.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEMPLOYEE_H
#define UI_ADDEMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addEmployee
{
public:
    QLabel *username;
    QLabel *password;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *adminstatus;
    QLabel *addmemberlogo;
    QPushButton *back_button;
    QPushButton *button_submit;
    QPushButton *logout_button;
    QCheckBox *adminyes;

    void setupUi(QDialog *addEmployee)
    {
        if (addEmployee->objectName().isEmpty())
            addEmployee->setObjectName(QStringLiteral("addEmployee"));
        addEmployee->resize(539, 190);
        username = new QLabel(addEmployee);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(80, 60, 81, 21));
        password = new QLabel(addEmployee);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(80, 90, 71, 21));
        lineEdit_username = new QLineEdit(addEmployee);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(150, 60, 211, 21));
        lineEdit_password = new QLineEdit(addEmployee);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(150, 90, 211, 21));
        adminstatus = new QLabel(addEmployee);
        adminstatus->setObjectName(QStringLiteral("adminstatus"));
        adminstatus->setGeometry(QRect(80, 120, 131, 16));
        addmemberlogo = new QLabel(addEmployee);
        addmemberlogo->setObjectName(QStringLiteral("addmemberlogo"));
        addmemberlogo->setGeometry(QRect(180, 20, 91, 21));
        back_button = new QPushButton(addEmployee);
        back_button->setObjectName(QStringLiteral("back_button"));
        back_button->setGeometry(QRect(10, 10, 113, 32));
        button_submit = new QPushButton(addEmployee);
        button_submit->setObjectName(QStringLiteral("button_submit"));
        button_submit->setGeometry(QRect(360, 140, 113, 32));
        logout_button = new QPushButton(addEmployee);
        logout_button->setObjectName(QStringLiteral("logout_button"));
        logout_button->setGeometry(QRect(360, 10, 113, 32));
        adminyes = new QCheckBox(addEmployee);
        adminyes->setObjectName(QStringLiteral("adminyes"));
        adminyes->setGeometry(QRect(220, 120, 87, 20));

        retranslateUi(addEmployee);

        QMetaObject::connectSlotsByName(addEmployee);
    } // setupUi

    void retranslateUi(QDialog *addEmployee)
    {
        addEmployee->setWindowTitle(QApplication::translate("addEmployee", "Dialog", nullptr));
        username->setText(QApplication::translate("addEmployee", "Username:", nullptr));
        password->setText(QApplication::translate("addEmployee", "Password:", nullptr));
        adminstatus->setText(QApplication::translate("addEmployee", "Administrator Status:", nullptr));
        addmemberlogo->setText(QApplication::translate("addEmployee", "Add Employee", nullptr));
        back_button->setText(QApplication::translate("addEmployee", "Back", nullptr));
        button_submit->setText(QApplication::translate("addEmployee", "Submit", nullptr));
        logout_button->setText(QApplication::translate("addEmployee", "Logout", nullptr));
        adminyes->setText(QApplication::translate("addEmployee", "Yes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addEmployee: public Ui_addEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEMPLOYEE_H
