/********************************************************************************
** Form generated from reading UI file 'deleteemployee.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEEMPLOYEE_H
#define UI_DELETEEMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteEmployee
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_id;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;

    void setupUi(QDialog *deleteEmployee)
    {
        if (deleteEmployee->objectName().isEmpty())
            deleteEmployee->setObjectName(QStringLiteral("deleteEmployee"));
        deleteEmployee->resize(679, 671);
        pushButton = new QPushButton(deleteEmployee);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 113, 32));
        label = new QLabel(deleteEmployee);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 20, 101, 16));
        pushButton_2 = new QPushButton(deleteEmployee);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 10, 113, 32));
        label_2 = new QLabel(deleteEmployee);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 50, 141, 16));
        label_3 = new QLabel(deleteEmployee);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 80, 60, 16));
        lineEdit_id = new QLineEdit(deleteEmployee);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(200, 80, 151, 21));
        pushButton_3 = new QPushButton(deleteEmployee);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(190, 110, 113, 32));
        tableWidget = new QTableWidget(deleteEmployee);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 140, 641, 441));

        retranslateUi(deleteEmployee);

        QMetaObject::connectSlotsByName(deleteEmployee);
    } // setupUi

    void retranslateUi(QDialog *deleteEmployee)
    {
        deleteEmployee->setWindowTitle(QApplication::translate("deleteEmployee", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("deleteEmployee", "Back", nullptr));
        label->setText(QApplication::translate("deleteEmployee", "Delete Member", nullptr));
        pushButton_2->setText(QApplication::translate("deleteEmployee", "Logout", nullptr));
        label_2->setText(QApplication::translate("deleteEmployee", "Delete By ID Number", nullptr));
        label_3->setText(QApplication::translate("deleteEmployee", "ID: ", nullptr));
        pushButton_3->setText(QApplication::translate("deleteEmployee", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteEmployee: public Ui_deleteEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEEMPLOYEE_H
