/********************************************************************************
** Form generated from reading UI file 'addemployee.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEMPLOYEE_H
#define UI_ADDEMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addEmployee
{
public:
    QLabel *username;
    QLabel *password;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *adminstatus;
    QPushButton *button_submit;
    QCheckBox *adminyes;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *back_button;
    QSpacerItem *horizontalSpacer;
    QLabel *addmemberlogo;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *logout_button;

    void setupUi(QDialog *addEmployee)
    {
        if (addEmployee->objectName().isEmpty())
            addEmployee->setObjectName(QStringLiteral("addEmployee"));
        addEmployee->resize(600, 700);
        addEmployee->setMinimumSize(QSize(600, 700));
        addEmployee->setMaximumSize(QSize(600, 700));
        username = new QLabel(addEmployee);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(90, 140, 81, 21));
        password = new QLabel(addEmployee);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(90, 190, 71, 21));
        lineEdit_username = new QLineEdit(addEmployee);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(160, 140, 211, 21));
        lineEdit_password = new QLineEdit(addEmployee);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(160, 190, 211, 21));
        adminstatus = new QLabel(addEmployee);
        adminstatus->setObjectName(QStringLiteral("adminstatus"));
        adminstatus->setGeometry(QRect(90, 240, 131, 16));
        button_submit = new QPushButton(addEmployee);
        button_submit->setObjectName(QStringLiteral("button_submit"));
        button_submit->setGeometry(QRect(160, 290, 100, 30));
        adminyes = new QCheckBox(addEmployee);
        adminyes->setObjectName(QStringLiteral("adminyes"));
        adminyes->setGeometry(QRect(230, 240, 87, 20));
        widget = new QWidget(addEmployee);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 581, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        back_button = new QPushButton(widget);
        back_button->setObjectName(QStringLiteral("back_button"));

        horizontalLayout->addWidget(back_button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addmemberlogo = new QLabel(widget);
        addmemberlogo->setObjectName(QStringLiteral("addmemberlogo"));

        horizontalLayout->addWidget(addmemberlogo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        logout_button = new QPushButton(widget);
        logout_button->setObjectName(QStringLiteral("logout_button"));

        horizontalLayout->addWidget(logout_button);


        retranslateUi(addEmployee);

        QMetaObject::connectSlotsByName(addEmployee);
    } // setupUi

    void retranslateUi(QDialog *addEmployee)
    {
        addEmployee->setWindowTitle(QApplication::translate("addEmployee", "Dialog", nullptr));
        username->setText(QApplication::translate("addEmployee", "Username:", nullptr));
        password->setText(QApplication::translate("addEmployee", "Password:", nullptr));
        adminstatus->setText(QApplication::translate("addEmployee", "Administrator Status:", nullptr));
        button_submit->setText(QApplication::translate("addEmployee", "Submit", nullptr));
        adminyes->setText(QApplication::translate("addEmployee", "Yes", nullptr));
        back_button->setText(QApplication::translate("addEmployee", "Back", nullptr));
        addmemberlogo->setText(QApplication::translate("addEmployee", "Add Employee", nullptr));
        logout_button->setText(QApplication::translate("addEmployee", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addEmployee: public Ui_addEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEMPLOYEE_H
