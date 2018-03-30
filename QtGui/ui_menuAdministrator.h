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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menuAdministrator
{
public:
    QLabel *label_employees;
    QLabel *label_members;
    QLabel *label_items;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_11;
    QPushButton *pushButton_9;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_10;

    void setupUi(QDialog *menuAdministrator)
    {
        if (menuAdministrator->objectName().isEmpty())
            menuAdministrator->setObjectName(QStringLiteral("menuAdministrator"));
        menuAdministrator->resize(600, 700);
        menuAdministrator->setMinimumSize(QSize(600, 700));
        menuAdministrator->setMaximumSize(QSize(600, 700));
        label_employees = new QLabel(menuAdministrator);
        label_employees->setObjectName(QStringLiteral("label_employees"));
        label_employees->setGeometry(QRect(70, 170, 70, 16));
        label_employees->setAlignment(Qt::AlignCenter);
        label_members = new QLabel(menuAdministrator);
        label_members->setObjectName(QStringLiteral("label_members"));
        label_members->setGeometry(QRect(270, 170, 70, 16));
        label_members->setAlignment(Qt::AlignCenter);
        label_items = new QLabel(menuAdministrator);
        label_items->setObjectName(QStringLiteral("label_items"));
        label_items->setGeometry(QRect(460, 170, 70, 16));
        label_items->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(menuAdministrator);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 371, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        layoutWidget1 = new QWidget(menuAdministrator);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 200, 581, 331));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_7 = new QPushButton(layoutWidget1);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget1);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_11 = new QPushButton(layoutWidget1);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        verticalLayout_2->addWidget(pushButton_11);

        pushButton_9 = new QPushButton(layoutWidget1);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout_2->addWidget(pushButton_9);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton_5 = new QPushButton(layoutWidget1);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget1);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_3->addWidget(pushButton_6);

        pushButton_10 = new QPushButton(layoutWidget1);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        verticalLayout_3->addWidget(pushButton_10);


        horizontalLayout_2->addLayout(verticalLayout_3);


        retranslateUi(menuAdministrator);

        QMetaObject::connectSlotsByName(menuAdministrator);
    } // setupUi

    void retranslateUi(QDialog *menuAdministrator)
    {
        menuAdministrator->setWindowTitle(QApplication::translate("menuAdministrator", "Dialog", nullptr));
        label_employees->setText(QApplication::translate("menuAdministrator", "Employees", nullptr));
        label_members->setText(QApplication::translate("menuAdministrator", "Members", nullptr));
        label_items->setText(QApplication::translate("menuAdministrator", "Items", nullptr));
        pushButton->setText(QApplication::translate("menuAdministrator", "Logout", nullptr));
        label->setText(QApplication::translate("menuAdministrator", "Welcome Administrator", nullptr));
        pushButton_2->setText(QApplication::translate("menuAdministrator", "Add Employee", nullptr));
        pushButton_3->setText(QApplication::translate("menuAdministrator", "Delete Employee", nullptr));
        pushButton_4->setText(QApplication::translate("menuAdministrator", "Edit Employee Information", nullptr));
        pushButton_7->setText(QApplication::translate("menuAdministrator", "Add Member", nullptr));
        pushButton_8->setText(QApplication::translate("menuAdministrator", "Delete Member", nullptr));
        pushButton_11->setText(QApplication::translate("menuAdministrator", "Edit Member", nullptr));
        pushButton_9->setText(QApplication::translate("menuAdministrator", "New Purchase", nullptr));
        pushButton_5->setText(QApplication::translate("menuAdministrator", "Add Item", nullptr));
        pushButton_6->setText(QApplication::translate("menuAdministrator", "Delete Item", nullptr));
        pushButton_10->setText(QApplication::translate("menuAdministrator", "Edit Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuAdministrator: public Ui_menuAdministrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUADMINISTRATOR_H
