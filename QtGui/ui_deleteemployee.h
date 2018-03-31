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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteEmployee
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_id;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *deleteEmployee)
    {
        if (deleteEmployee->objectName().isEmpty())
            deleteEmployee->setObjectName(QStringLiteral("deleteEmployee"));
        deleteEmployee->resize(600, 700);
        deleteEmployee->setMinimumSize(QSize(600, 700));
        deleteEmployee->setMaximumSize(QSize(600, 700));
        label_2 = new QLabel(deleteEmployee);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 60, 141, 16));
        label_3 = new QLabel(deleteEmployee);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 80, 60, 16));
        lineEdit_id = new QLineEdit(deleteEmployee);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(130, 80, 151, 21));
        pushButton_3 = new QPushButton(deleteEmployee);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 110, 100, 30));
        tableWidget = new QTableWidget(deleteEmployee);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 150, 581, 541));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        widget = new QWidget(deleteEmployee);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 10, 571, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(deleteEmployee);

        QMetaObject::connectSlotsByName(deleteEmployee);
    } // setupUi

    void retranslateUi(QDialog *deleteEmployee)
    {
        deleteEmployee->setWindowTitle(QApplication::translate("deleteEmployee", "Dialog", nullptr));
        label_2->setText(QApplication::translate("deleteEmployee", "Delete By ID Number", nullptr));
        label_3->setText(QApplication::translate("deleteEmployee", "ID#: ", nullptr));
        pushButton_3->setText(QApplication::translate("deleteEmployee", "Submit", nullptr));
        pushButton->setText(QApplication::translate("deleteEmployee", "Back", nullptr));
        label->setText(QApplication::translate("deleteEmployee", "Delete Employee", nullptr));
        pushButton_2->setText(QApplication::translate("deleteEmployee", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteEmployee: public Ui_deleteEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEEMPLOYEE_H
