/********************************************************************************
** Form generated from reading UI file 'deleteMember.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEMEMBER_H
#define UI_DELETEMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteMember
{
public:
    QPushButton *pushButton_logout;
    QLineEdit *lineEdit_id;
    QLabel *label_deletemember;
    QPushButton *pushButton_3;
    QPushButton *pushButton_back;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QLabel *label_id;

    void setupUi(QDialog *deleteMember)
    {
        if (deleteMember->objectName().isEmpty())
            deleteMember->setObjectName(QStringLiteral("deleteMember"));
        deleteMember->resize(714, 589);
        pushButton_logout = new QPushButton(deleteMember);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(370, 10, 113, 32));
        lineEdit_id = new QLineEdit(deleteMember);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(190, 80, 151, 21));
        label_deletemember = new QLabel(deleteMember);
        label_deletemember->setObjectName(QStringLiteral("label_deletemember"));
        label_deletemember->setGeometry(QRect(190, 20, 101, 16));
        pushButton_3 = new QPushButton(deleteMember);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 110, 113, 32));
        pushButton_back = new QPushButton(deleteMember);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(10, 10, 113, 32));
        tableWidget = new QTableWidget(deleteMember);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 140, 641, 441));
        label_2 = new QLabel(deleteMember);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 50, 141, 16));
        label_id = new QLabel(deleteMember);
        label_id->setObjectName(QStringLiteral("label_id"));
        label_id->setGeometry(QRect(170, 80, 60, 16));

        retranslateUi(deleteMember);

        QMetaObject::connectSlotsByName(deleteMember);
    } // setupUi

    void retranslateUi(QDialog *deleteMember)
    {
        deleteMember->setWindowTitle(QApplication::translate("deleteMember", "Dialog", nullptr));
        pushButton_logout->setText(QApplication::translate("deleteMember", "Logout", nullptr));
        label_deletemember->setText(QApplication::translate("deleteMember", "Delete Member", nullptr));
        pushButton_3->setText(QApplication::translate("deleteMember", "Submit", nullptr));
        pushButton_back->setText(QApplication::translate("deleteMember", "Back", nullptr));
        label_2->setText(QApplication::translate("deleteMember", "Delete By ID Number", nullptr));
        label_id->setText(QApplication::translate("deleteMember", "ID: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteMember: public Ui_deleteMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEMEMBER_H
