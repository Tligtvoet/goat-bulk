/********************************************************************************
** Form generated from reading UI file 'addMember.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEMBER_H
#define UI_ADDMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_memStatus;
    QPushButton *button_submit;
    QLineEdit *lineEdit_expDate;

    void setupUi(QDialog *addMember)
    {
        if (addMember->objectName().isEmpty())
            addMember->setObjectName(QStringLiteral("addMember"));
        addMember->resize(452, 216);
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
        username->setGeometry(QRect(20, 60, 141, 21));
        password = new QLabel(addMember);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(20, 90, 141, 21));
        adminstatus = new QLabel(addMember);
        adminstatus->setObjectName(QStringLiteral("adminstatus"));
        adminstatus->setGeometry(QRect(20, 120, 191, 20));
        lineEdit_name = new QLineEdit(addMember);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(180, 60, 211, 21));
        lineEdit_memStatus = new QLineEdit(addMember);
        lineEdit_memStatus->setObjectName(QStringLiteral("lineEdit_memStatus"));
        lineEdit_memStatus->setGeometry(QRect(180, 90, 211, 21));
        button_submit = new QPushButton(addMember);
        button_submit->setObjectName(QStringLiteral("button_submit"));
        button_submit->setGeometry(QRect(170, 170, 113, 32));
        lineEdit_expDate = new QLineEdit(addMember);
        lineEdit_expDate->setObjectName(QStringLiteral("lineEdit_expDate"));
        lineEdit_expDate->setGeometry(QRect(180, 120, 211, 20));

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
        password->setText(QApplication::translate("addMember", "Member Status:", nullptr));
        adminstatus->setText(QApplication::translate("addMember", "Expiration Date:", nullptr));
        button_submit->setText(QApplication::translate("addMember", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addMember: public Ui_addMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMBER_H
