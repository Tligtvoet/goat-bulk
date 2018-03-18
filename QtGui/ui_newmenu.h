/********************************************************************************
** Form generated from reading UI file 'newmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWMENU_H
#define UI_NEWMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_newMenu
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;

    void setupUi(QDialog *newMenu)
    {
        if (newMenu->objectName().isEmpty())
            newMenu->setObjectName(QStringLiteral("newMenu"));
        newMenu->resize(636, 586);
        pushButton = new QPushButton(newMenu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 113, 32));
        pushButton_2 = new QPushButton(newMenu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 100, 121, 32));
        pushButton_3 = new QPushButton(newMenu);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 140, 131, 32));
        pushButton_4 = new QPushButton(newMenu);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 180, 191, 32));
        pushButton_5 = new QPushButton(newMenu);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(220, 100, 113, 32));
        pushButton_6 = new QPushButton(newMenu);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(220, 130, 113, 32));
        pushButton_7 = new QPushButton(newMenu);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(220, 190, 113, 32));
        pushButton_8 = new QPushButton(newMenu);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(210, 220, 121, 32));
        pushButton_9 = new QPushButton(newMenu);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(220, 280, 113, 32));
        label = new QLabel(newMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 40, 191, 16));
        pushButton_10 = new QPushButton(newMenu);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(220, 160, 113, 32));
        pushButton_11 = new QPushButton(newMenu);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(220, 250, 113, 32));

        retranslateUi(newMenu);

        QMetaObject::connectSlotsByName(newMenu);
    } // setupUi

    void retranslateUi(QDialog *newMenu)
    {
        newMenu->setWindowTitle(QApplication::translate("newMenu", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("newMenu", "Logout", nullptr));
        pushButton_2->setText(QApplication::translate("newMenu", "Add Employee", nullptr));
        pushButton_3->setText(QApplication::translate("newMenu", "Delete Employee", nullptr));
        pushButton_4->setText(QApplication::translate("newMenu", "Edit Employee Information", nullptr));
        pushButton_5->setText(QApplication::translate("newMenu", "Add Item", nullptr));
        pushButton_6->setText(QApplication::translate("newMenu", "Delete Item", nullptr));
        pushButton_7->setText(QApplication::translate("newMenu", "Add Member", nullptr));
        pushButton_8->setText(QApplication::translate("newMenu", "Delete Member", nullptr));
        pushButton_9->setText(QApplication::translate("newMenu", "List Members", nullptr));
        label->setText(QApplication::translate("newMenu", "Welcome Administrator", nullptr));
        pushButton_10->setText(QApplication::translate("newMenu", "Edit Item", nullptr));
        pushButton_11->setText(QApplication::translate("newMenu", "Edit Member", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newMenu: public Ui_newMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWMENU_H
