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
    QPushButton *pushButton_back;
    QPushButton *pushButton_logout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_memStatus;
    QLineEdit *lineEdit_expDate;
    QPushButton *pushButton_submit;

    void setupUi(QDialog *addMember)
    {
        if (addMember->objectName().isEmpty())
            addMember->setObjectName(QStringLiteral("addMember"));
        addMember->resize(867, 699);
        pushButton_back = new QPushButton(addMember);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(20, 10, 113, 32));
        pushButton_logout = new QPushButton(addMember);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(340, 10, 113, 32));
        label = new QLabel(addMember);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 20, 91, 16));
        label_2 = new QLabel(addMember);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 50, 60, 16));
        label_4 = new QLabel(addMember);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 80, 101, 20));
        label_5 = new QLabel(addMember);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 110, 101, 16));
        lineEdit_name = new QLineEdit(addMember);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(110, 50, 201, 21));
        lineEdit_memStatus = new QLineEdit(addMember);
        lineEdit_memStatus->setObjectName(QStringLiteral("lineEdit_memStatus"));
        lineEdit_memStatus->setGeometry(QRect(110, 80, 201, 21));
        lineEdit_expDate = new QLineEdit(addMember);
        lineEdit_expDate->setObjectName(QStringLiteral("lineEdit_expDate"));
        lineEdit_expDate->setGeometry(QRect(110, 110, 201, 21));
        pushButton_submit = new QPushButton(addMember);
        pushButton_submit->setObjectName(QStringLiteral("pushButton_submit"));
        pushButton_submit->setGeometry(QRect(110, 140, 113, 32));

        retranslateUi(addMember);

        QMetaObject::connectSlotsByName(addMember);
    } // setupUi

    void retranslateUi(QDialog *addMember)
    {
        addMember->setWindowTitle(QApplication::translate("addMember", "Dialog", nullptr));
        pushButton_back->setText(QApplication::translate("addMember", "Back", nullptr));
        pushButton_logout->setText(QApplication::translate("addMember", "Logout", nullptr));
        label->setText(QApplication::translate("addMember", "Add Member", nullptr));
        label_2->setText(QApplication::translate("addMember", "Name:", nullptr));
        label_4->setText(QApplication::translate("addMember", "Member Status:", nullptr));
        label_5->setText(QApplication::translate("addMember", "Expiration Date:", nullptr));
        pushButton_submit->setText(QApplication::translate("addMember", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addMember: public Ui_addMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMBER_H
