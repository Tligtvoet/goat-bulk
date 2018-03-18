/********************************************************************************
** Form generated from reading UI file 'addmember.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEMBER_H
#define UI_ADDMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addMember
{
public:
    QPushButton *back_button;
    QLabel *addmemberlogo;
    QPushButton *logout_button;
    QLabel *username;
    QLabel *password;
    QLabel *adminstatus;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QCheckBox *adminyes;
    QPushButton *button_submit;

    void setupUi(QDialog *addMember)
    {
        if (addMember->objectName().isEmpty())
            addMember->setObjectName(QStringLiteral("addMember"));
        addMember->resize(691, 613);
        back_button = new QPushButton(addMember);
        back_button->setObjectName(QStringLiteral("back_button"));
        back_button->setGeometry(QRect(10, 10, 113, 32));
        addmemberlogo = new QLabel(addMember);
        addmemberlogo->setObjectName(QStringLiteral("addmemberlogo"));
        addmemberlogo->setGeometry(QRect(200, 10, 91, 21));
        logout_button = new QPushButton(addMember);
        logout_button->setObjectName(QStringLiteral("logout_button"));
        logout_button->setGeometry(QRect(330, 10, 113, 32));
        username = new QLabel(addMember);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(80, 60, 81, 21));
        password = new QLabel(addMember);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(80, 90, 71, 21));
        adminstatus = new QLabel(addMember);
        adminstatus->setObjectName(QStringLiteral("adminstatus"));
        adminstatus->setGeometry(QRect(80, 120, 131, 16));
        lineEdit_username = new QLineEdit(addMember);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(150, 60, 211, 21));
        lineEdit_password = new QLineEdit(addMember);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(150, 90, 211, 21));
        adminyes = new QCheckBox(addMember);
        adminyes->setObjectName(QStringLiteral("adminyes"));
        adminyes->setGeometry(QRect(220, 120, 87, 20));
        button_submit = new QPushButton(addMember);
        button_submit->setObjectName(QStringLiteral("button_submit"));
        button_submit->setGeometry(QRect(140, 150, 113, 32));

        retranslateUi(addMember);

        QMetaObject::connectSlotsByName(addMember);
    } // setupUi

    void retranslateUi(QDialog *addMember)
    {
        addMember->setWindowTitle(QApplication::translate("addMember", "Dialog", nullptr));
        back_button->setText(QApplication::translate("addMember", "Back", nullptr));
        addmemberlogo->setText(QApplication::translate("addMember", "Add Member", nullptr));
        logout_button->setText(QApplication::translate("addMember", "Logout", nullptr));
        username->setText(QApplication::translate("addMember", "Username:", nullptr));
        password->setText(QApplication::translate("addMember", "Password:", nullptr));
        adminstatus->setText(QApplication::translate("addMember", "Administrator Status:", nullptr));
        adminyes->setText(QApplication::translate("addMember", "Yes", nullptr));
        button_submit->setText(QApplication::translate("addMember", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addMember: public Ui_addMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMBER_H
