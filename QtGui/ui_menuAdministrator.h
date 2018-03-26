/********************************************************************************
** Form generated from reading UI file 'menuAdministrator.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUADMINISTRATOR_H
#define UI_MENUADMINISTRATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menuAdministrator
{
public:
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_10;
    QLabel *label;
    QPushButton *pushButton_8;
    QPushButton *pushButton_11;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_12;

    void setupUi(QDialog *menuAdministrator)
    {
        if (menuAdministrator->objectName().isEmpty())
            menuAdministrator->setObjectName(QStringLiteral("menuAdministrator"));
        menuAdministrator->resize(359, 309);
        pushButton_2 = new QPushButton(menuAdministrator);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 90, 141, 32));
        pushButton_5 = new QPushButton(menuAdministrator);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(220, 90, 113, 32));
        pushButton_6 = new QPushButton(menuAdministrator);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(220, 120, 113, 32));
        pushButton_10 = new QPushButton(menuAdministrator);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(220, 150, 113, 32));
        label = new QLabel(menuAdministrator);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 30, 191, 16));
        pushButton_8 = new QPushButton(menuAdministrator);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(220, 210, 111, 32));
        pushButton_11 = new QPushButton(menuAdministrator);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(220, 240, 113, 32));
        pushButton_7 = new QPushButton(menuAdministrator);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(220, 180, 113, 32));
        pushButton_4 = new QPushButton(menuAdministrator);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 170, 141, 32));
        pushButton = new QPushButton(menuAdministrator);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 0, 113, 32));
        pushButton_3 = new QPushButton(menuAdministrator);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 130, 141, 32));
        pushButton_9 = new QPushButton(menuAdministrator);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(220, 270, 113, 32));
        pushButton_12 = new QPushButton(menuAdministrator);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(20, 210, 141, 31));

        retranslateUi(menuAdministrator);

        QMetaObject::connectSlotsByName(menuAdministrator);
    } // setupUi

    void retranslateUi(QDialog *menuAdministrator)
    {
        menuAdministrator->setWindowTitle(QApplication::translate("menuAdministrator", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("menuAdministrator", "Add Employee", nullptr));
        pushButton_5->setText(QApplication::translate("menuAdministrator", "Add Item", nullptr));
        pushButton_6->setText(QApplication::translate("menuAdministrator", "Delete Item", nullptr));
        pushButton_10->setText(QApplication::translate("menuAdministrator", "Edit Item", nullptr));
        label->setText(QApplication::translate("menuAdministrator", "Welcome Administrator", nullptr));
        pushButton_8->setText(QApplication::translate("menuAdministrator", "Delete Member", nullptr));
        pushButton_11->setText(QApplication::translate("menuAdministrator", "Edit Member", nullptr));
        pushButton_7->setText(QApplication::translate("menuAdministrator", "Add Member", nullptr));
        pushButton_4->setText(QApplication::translate("menuAdministrator", "Edit Employee Information", nullptr));
        pushButton->setText(QApplication::translate("menuAdministrator", "Logout", nullptr));
        pushButton_3->setText(QApplication::translate("menuAdministrator", "Delete Employee", nullptr));
        pushButton_9->setText(QApplication::translate("menuAdministrator", "List Members", nullptr));
        pushButton_12->setText(QApplication::translate("menuAdministrator", "Add Sale", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuAdministrator: public Ui_menuAdministrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUADMINISTRATOR_H
