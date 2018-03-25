/********************************************************************************
** Form generated from reading UI file 'listMembersWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTMEMBERSWINDOW_H
#define UI_LISTMEMBERSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listMembersWindow
{
public:
    QTableWidget *tableWidget;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QComboBox *comboBox;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *BackButton;
    QLabel *label;
    QPushButton *Logout;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *searchExpirationButton;
    QPushButton *allMembersButton;
    QPushButton *getRebatesButton;
    QPushButton *getMemberPurchasesButton;

    void setupUi(QDialog *listMembersWindow)
    {
        if (listMembersWindow->objectName().isEmpty())
            listMembersWindow->setObjectName(QStringLiteral("listMembersWindow"));
        listMembersWindow->resize(915, 763);
        tableWidget = new QTableWidget(listMembersWindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 100, 911, 521));
        layoutWidget_2 = new QWidget(listMembersWindow);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(-68, 70, 981, 32));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        pushButton_2 = new QPushButton(layoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_6->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_6->addWidget(pushButton);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        comboBox = new QComboBox(layoutWidget_2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_6->addWidget(comboBox);

        layoutWidget_3 = new QWidget(listMembersWindow);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(0, 0, 934, 44));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        BackButton = new QPushButton(layoutWidget_3);
        BackButton->setObjectName(QStringLiteral("BackButton"));
        BackButton->setIconSize(QSize(5, 5));

        horizontalLayout_4->addWidget(BackButton);

        label = new QLabel(layoutWidget_3);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label);

        Logout = new QPushButton(layoutWidget_3);
        Logout->setObjectName(QStringLiteral("Logout"));
        Logout->setEnabled(true);
        Logout->setMaximumSize(QSize(500, 250));
        Logout->setIconSize(QSize(5, 5));
        Logout->setAutoDefault(true);
        Logout->setFlat(false);

        horizontalLayout_4->addWidget(Logout);

        layoutWidget = new QWidget(listMembersWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 40, 921, 32));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        searchExpirationButton = new QPushButton(layoutWidget);
        searchExpirationButton->setObjectName(QStringLiteral("searchExpirationButton"));

        horizontalLayout_5->addWidget(searchExpirationButton);

        allMembersButton = new QPushButton(layoutWidget);
        allMembersButton->setObjectName(QStringLiteral("allMembersButton"));

        horizontalLayout_5->addWidget(allMembersButton);

        getRebatesButton = new QPushButton(layoutWidget);
        getRebatesButton->setObjectName(QStringLiteral("getRebatesButton"));

        horizontalLayout_5->addWidget(getRebatesButton);

        getMemberPurchasesButton = new QPushButton(layoutWidget);
        getMemberPurchasesButton->setObjectName(QStringLiteral("getMemberPurchasesButton"));

        horizontalLayout_5->addWidget(getMemberPurchasesButton);


        retranslateUi(listMembersWindow);

        Logout->setDefault(false);


        QMetaObject::connectSlotsByName(listMembersWindow);
    } // setupUi

    void retranslateUi(QDialog *listMembersWindow)
    {
        listMembersWindow->setWindowTitle(QApplication::translate("listMembersWindow", "Dialog", nullptr));
        label_3->setText(QApplication::translate("listMembersWindow", "Show Only", nullptr));
        pushButton_2->setText(QApplication::translate("listMembersWindow", "Executive", nullptr));
        pushButton->setText(QApplication::translate("listMembersWindow", "Regular", nullptr));
        label_2->setText(QApplication::translate("listMembersWindow", "Sort All Members By:", nullptr));
        comboBox->setItemText(0, QApplication::translate("listMembersWindow", "ID Number", nullptr));
        comboBox->setItemText(1, QApplication::translate("listMembersWindow", "Member Type", nullptr));

        BackButton->setText(QApplication::translate("listMembersWindow", "Back", nullptr));
        label->setText(QApplication::translate("listMembersWindow", "Bulk Club Members", nullptr));
        Logout->setText(QApplication::translate("listMembersWindow", "Logout", nullptr));
        searchExpirationButton->setText(QApplication::translate("listMembersWindow", "Search Expiration", nullptr));
        allMembersButton->setText(QApplication::translate("listMembersWindow", "All Members", nullptr));
        getRebatesButton->setText(QApplication::translate("listMembersWindow", "Get Rebates", nullptr));
        getMemberPurchasesButton->setText(QApplication::translate("listMembersWindow", "Search Member Purchases", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listMembersWindow: public Ui_listMembersWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTMEMBERSWINDOW_H
