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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteMember
{
public:
    QLineEdit *lineEdit_id;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QLabel *label_id;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QSpacerItem *horizontalSpacer;
    QLabel *label_deletemember;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_logout;

    void setupUi(QDialog *deleteMember)
    {
        if (deleteMember->objectName().isEmpty())
            deleteMember->setObjectName(QStringLiteral("deleteMember"));
        deleteMember->resize(600, 700);
        deleteMember->setMinimumSize(QSize(600, 700));
        deleteMember->setMaximumSize(QSize(600, 700));
        lineEdit_id = new QLineEdit(deleteMember);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(110, 80, 151, 21));
        pushButton_3 = new QPushButton(deleteMember);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(110, 110, 100, 30));
        tableWidget = new QTableWidget(deleteMember);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 150, 581, 541));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        label_2 = new QLabel(deleteMember);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 60, 141, 16));
        label_id = new QLabel(deleteMember);
        label_id->setObjectName(QStringLiteral("label_id"));
        label_id->setGeometry(QRect(90, 80, 60, 16));
        widget = new QWidget(deleteMember);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 581, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_back = new QPushButton(widget);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));

        horizontalLayout->addWidget(pushButton_back);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_deletemember = new QLabel(widget);
        label_deletemember->setObjectName(QStringLiteral("label_deletemember"));

        horizontalLayout->addWidget(label_deletemember);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_logout = new QPushButton(widget);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));

        horizontalLayout->addWidget(pushButton_logout);


        retranslateUi(deleteMember);

        QMetaObject::connectSlotsByName(deleteMember);
    } // setupUi

    void retranslateUi(QDialog *deleteMember)
    {
        deleteMember->setWindowTitle(QApplication::translate("deleteMember", "Dialog", nullptr));
        pushButton_3->setText(QApplication::translate("deleteMember", "Submit", nullptr));
        label_2->setText(QApplication::translate("deleteMember", "Delete By ID Number", nullptr));
        label_id->setText(QApplication::translate("deleteMember", "ID: ", nullptr));
        pushButton_back->setText(QApplication::translate("deleteMember", "Back", nullptr));
        label_deletemember->setText(QApplication::translate("deleteMember", "Delete Member", nullptr));
        pushButton_logout->setText(QApplication::translate("deleteMember", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteMember: public Ui_deleteMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEMEMBER_H
