/********************************************************************************
** Form generated from reading UI file 'employeemanage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEMANAGE_H
#define UI_EMPLOYEEMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label_emplyeeInformation;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_Delete;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(400, 300);
        label_emplyeeInformation = new QLabel(Form);
        label_emplyeeInformation->setObjectName(QStringLiteral("label_emplyeeInformation"));
        label_emplyeeInformation->setGeometry(QRect(140, 10, 129, 16));
        label_emplyeeInformation->setAlignment(Qt::AlignCenter);
        pushButton_Add = new QPushButton(Form);
        pushButton_Add->setObjectName(QStringLiteral("pushButton_Add"));
        pushButton_Add->setGeometry(QRect(9, 31, 80, 24));
        pushButton_Delete = new QPushButton(Form);
        pushButton_Delete->setObjectName(QStringLiteral("pushButton_Delete"));
        pushButton_Delete->setGeometry(QRect(310, 30, 80, 31));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label_emplyeeInformation->setText(QApplication::translate("Form", "Empoyee Information", nullptr));
        pushButton_Add->setText(QApplication::translate("Form", "ADD", nullptr));
        pushButton_Delete->setText(QApplication::translate("Form", "DELETE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEMANAGE_H
