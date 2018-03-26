/********************************************************************************
** Form generated from reading UI file 'menuManager.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUMANAGER_H
#define UI_MENUMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menuManager
{
public:
    QPushButton *pushButton_9;
    QPushButton *pushButton_11;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label;
    QPushButton *pushButton_5;
    QPushButton *pushButton_10;
    QPushButton *pushButton_8;
    QPushButton *pushButton;

    void setupUi(QDialog *menuManager)
    {
        if (menuManager->objectName().isEmpty())
            menuManager->setObjectName(QStringLiteral("menuManager"));
        menuManager->resize(753, 747);
        pushButton_9 = new QPushButton(menuManager);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(160, 240, 113, 32));
        pushButton_11 = new QPushButton(menuManager);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(160, 210, 113, 32));
        pushButton_6 = new QPushButton(menuManager);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(160, 90, 113, 32));
        pushButton_7 = new QPushButton(menuManager);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(160, 150, 113, 32));
        label = new QLabel(menuManager);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 20, 191, 16));
        pushButton_5 = new QPushButton(menuManager);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(160, 60, 113, 32));
        pushButton_10 = new QPushButton(menuManager);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(160, 120, 113, 32));
        pushButton_8 = new QPushButton(menuManager);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(160, 180, 111, 32));
        pushButton = new QPushButton(menuManager);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 113, 32));

        retranslateUi(menuManager);

        QMetaObject::connectSlotsByName(menuManager);
    } // setupUi

    void retranslateUi(QDialog *menuManager)
    {
        menuManager->setWindowTitle(QApplication::translate("menuManager", "Dialog", nullptr));
        pushButton_9->setText(QApplication::translate("menuManager", "List Members", nullptr));
        pushButton_11->setText(QApplication::translate("menuManager", "Edit Member", nullptr));
        pushButton_6->setText(QApplication::translate("menuManager", "Delete Item", nullptr));
        pushButton_7->setText(QApplication::translate("menuManager", "Add Member", nullptr));
        label->setText(QApplication::translate("menuManager", "Welcome Manager", nullptr));
        pushButton_5->setText(QApplication::translate("menuManager", "Add Item", nullptr));
        pushButton_10->setText(QApplication::translate("menuManager", "Edit Item", nullptr));
        pushButton_8->setText(QApplication::translate("menuManager", "Delete Member", nullptr));
        pushButton->setText(QApplication::translate("menuManager", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuManager: public Ui_menuManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUMANAGER_H
