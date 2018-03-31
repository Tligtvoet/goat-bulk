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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listMembersWindow
{
public:
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BackButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Logout;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QPushButton *searchExpirationButton;
    QPushButton *getMemberPurchasesButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *getRebatesButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *allMembersButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_show;
    QComboBox *comboBox;
    QLabel *label_2;

    void setupUi(QDialog *listMembersWindow)
    {
        if (listMembersWindow->objectName().isEmpty())
            listMembersWindow->setObjectName(QStringLiteral("listMembersWindow"));
        listMembersWindow->resize(600, 700);
        listMembersWindow->setMinimumSize(QSize(600, 700));
        listMembersWindow->setMaximumSize(QSize(600, 700));
        tableWidget = new QTableWidget(listMembersWindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 190, 581, 501));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(listMembersWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 581, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BackButton = new QPushButton(layoutWidget);
        BackButton->setObjectName(QStringLiteral("BackButton"));
        BackButton->setIconSize(QSize(5, 5));

        horizontalLayout->addWidget(BackButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        Logout = new QPushButton(layoutWidget);
        Logout->setObjectName(QStringLiteral("Logout"));
        Logout->setEnabled(true);
        Logout->setMaximumSize(QSize(500, 250));
        Logout->setIconSize(QSize(5, 5));
        Logout->setAutoDefault(true);
        Logout->setFlat(false);

        horizontalLayout->addWidget(Logout);

        layoutWidget1 = new QWidget(listMembersWindow);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 70, 581, 58));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        searchExpirationButton = new QPushButton(layoutWidget1);
        searchExpirationButton->setObjectName(QStringLiteral("searchExpirationButton"));

        verticalLayout->addWidget(searchExpirationButton);

        getMemberPurchasesButton = new QPushButton(layoutWidget1);
        getMemberPurchasesButton->setObjectName(QStringLiteral("getMemberPurchasesButton"));

        verticalLayout->addWidget(getMemberPurchasesButton);


        horizontalLayout_5->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        getRebatesButton = new QPushButton(layoutWidget1);
        getRebatesButton->setObjectName(QStringLiteral("getRebatesButton"));

        horizontalLayout_5->addWidget(getRebatesButton);

        widget = new QWidget(listMembersWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 157, 301, 29));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        allMembersButton = new QPushButton(widget);
        allMembersButton->setObjectName(QStringLiteral("allMembersButton"));

        horizontalLayout_4->addWidget(allMembersButton);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_4->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);

        label_show = new QLabel(listMembersWindow);
        label_show->setObjectName(QStringLiteral("label_show"));
        label_show->setGeometry(QRect(12, 160, 38, 21));
        comboBox = new QComboBox(listMembersWindow);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(461, 163, 113, 24));
        label_2 = new QLabel(listMembersWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(461, 141, 127, 16));

        retranslateUi(listMembersWindow);

        Logout->setDefault(false);


        QMetaObject::connectSlotsByName(listMembersWindow);
    } // setupUi

    void retranslateUi(QDialog *listMembersWindow)
    {
        listMembersWindow->setWindowTitle(QApplication::translate("listMembersWindow", "Dialog", nullptr));
        BackButton->setText(QApplication::translate("listMembersWindow", "Back", nullptr));
        label->setText(QApplication::translate("listMembersWindow", "Bulk Club Members", nullptr));
        Logout->setText(QApplication::translate("listMembersWindow", "Logout", nullptr));
        searchExpirationButton->setText(QApplication::translate("listMembersWindow", "Search Expiration", nullptr));
        getMemberPurchasesButton->setText(QApplication::translate("listMembersWindow", "Search Member Purchases", nullptr));
        getRebatesButton->setText(QApplication::translate("listMembersWindow", "Get Rebates", nullptr));
        allMembersButton->setText(QApplication::translate("listMembersWindow", "All Members", nullptr));
        pushButton->setText(QApplication::translate("listMembersWindow", "Regular", nullptr));
        pushButton_2->setText(QApplication::translate("listMembersWindow", "Executive", nullptr));
        label_show->setText(QApplication::translate("listMembersWindow", "Show:", nullptr));
        comboBox->setItemText(0, QApplication::translate("listMembersWindow", "ID Number", nullptr));
        comboBox->setItemText(1, QApplication::translate("listMembersWindow", "Member Type", nullptr));

        label_2->setText(QApplication::translate("listMembersWindow", "Sort All Members By", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listMembersWindow: public Ui_listMembersWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTMEMBERSWINDOW_H
