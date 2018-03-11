/********************************************************************************
** Form generated from reading UI file 'employeemanager.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEMANAGER_H
#define UI_EMPLOYEEMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EmployeeManager
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_Delete;
    QLabel *label_EmployeeInformation;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_IdNum;
    QLineEdit *lineEdit_Username;
    QLineEdit *lineEdit_Password;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_IdNum;
    QLabel *label_Username;
    QLabel *label_Password;
    QLabel *label_AdministrationStatus;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_Yes;
    QCheckBox *checkBox_No;
    QPushButton *pushButton_Edit;

    void setupUi(QWidget *EmployeeManager)
    {
        if (EmployeeManager->objectName().isEmpty())
            EmployeeManager->setObjectName(QStringLiteral("EmployeeManager"));
        EmployeeManager->resize(400, 300);
        EmployeeManager->setMinimumSize(QSize(400, 300));
        EmployeeManager->setMaximumSize(QSize(400, 300));
        gridLayoutWidget = new QWidget(EmployeeManager);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(100, 30, 211, 51));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Add = new QPushButton(gridLayoutWidget);
        pushButton_Add->setObjectName(QStringLiteral("pushButton_Add"));

        gridLayout->addWidget(pushButton_Add, 1, 0, 1, 1);

        pushButton_Delete = new QPushButton(gridLayoutWidget);
        pushButton_Delete->setObjectName(QStringLiteral("pushButton_Delete"));

        gridLayout->addWidget(pushButton_Delete, 1, 1, 1, 1);

        label_EmployeeInformation = new QLabel(EmployeeManager);
        label_EmployeeInformation->setObjectName(QStringLiteral("label_EmployeeInformation"));
        label_EmployeeInformation->setGeometry(QRect(140, 10, 141, 16));
        verticalLayoutWidget = new QWidget(EmployeeManager);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(150, 91, 211, 111));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_IdNum = new QLineEdit(verticalLayoutWidget);
        lineEdit_IdNum->setObjectName(QStringLiteral("lineEdit_IdNum"));

        verticalLayout->addWidget(lineEdit_IdNum);

        lineEdit_Username = new QLineEdit(verticalLayoutWidget);
        lineEdit_Username->setObjectName(QStringLiteral("lineEdit_Username"));

        verticalLayout->addWidget(lineEdit_Username);

        lineEdit_Password = new QLineEdit(verticalLayoutWidget);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));

        verticalLayout->addWidget(lineEdit_Password);

        verticalLayoutWidget_2 = new QWidget(EmployeeManager);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 91, 133, 141));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_IdNum = new QLabel(verticalLayoutWidget_2);
        label_IdNum->setObjectName(QStringLiteral("label_IdNum"));

        verticalLayout_2->addWidget(label_IdNum);

        label_Username = new QLabel(verticalLayoutWidget_2);
        label_Username->setObjectName(QStringLiteral("label_Username"));

        verticalLayout_2->addWidget(label_Username);

        label_Password = new QLabel(verticalLayoutWidget_2);
        label_Password->setObjectName(QStringLiteral("label_Password"));

        verticalLayout_2->addWidget(label_Password);

        label_AdministrationStatus = new QLabel(verticalLayoutWidget_2);
        label_AdministrationStatus->setObjectName(QStringLiteral("label_AdministrationStatus"));

        verticalLayout_2->addWidget(label_AdministrationStatus);

        horizontalLayoutWidget = new QWidget(EmployeeManager);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(151, 210, 209, 24));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_Yes = new QCheckBox(horizontalLayoutWidget);
        checkBox_Yes->setObjectName(QStringLiteral("checkBox_Yes"));

        horizontalLayout->addWidget(checkBox_Yes);

        checkBox_No = new QCheckBox(horizontalLayoutWidget);
        checkBox_No->setObjectName(QStringLiteral("checkBox_No"));

        horizontalLayout->addWidget(checkBox_No);

        pushButton_Edit = new QPushButton(EmployeeManager);
        pushButton_Edit->setObjectName(QStringLiteral("pushButton_Edit"));
        pushButton_Edit->setGeometry(QRect(260, 260, 96, 24));

        retranslateUi(EmployeeManager);

        QMetaObject::connectSlotsByName(EmployeeManager);
    } // setupUi

    void retranslateUi(QWidget *EmployeeManager)
    {
        EmployeeManager->setWindowTitle(QApplication::translate("EmployeeManager", "Form", nullptr));
        pushButton_Add->setText(QApplication::translate("EmployeeManager", "ADD", nullptr));
        pushButton_Delete->setText(QApplication::translate("EmployeeManager", "DELETE", nullptr));
        label_EmployeeInformation->setText(QApplication::translate("EmployeeManager", "Employee Information", nullptr));
        label_IdNum->setText(QApplication::translate("EmployeeManager", "ID #", nullptr));
        label_Username->setText(QApplication::translate("EmployeeManager", "Username", nullptr));
        label_Password->setText(QApplication::translate("EmployeeManager", "Password", nullptr));
        label_AdministrationStatus->setText(QApplication::translate("EmployeeManager", "Administration Status", nullptr));
        checkBox_Yes->setText(QApplication::translate("EmployeeManager", "Yes", nullptr));
        checkBox_No->setText(QApplication::translate("EmployeeManager", "No", nullptr));
        pushButton_Edit->setText(QApplication::translate("EmployeeManager", "EDIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EmployeeManager: public Ui_EmployeeManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEMANAGER_H
