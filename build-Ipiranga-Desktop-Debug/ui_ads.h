/********************************************************************************
** Form generated from reading UI file 'ads.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADS_H
#define UI_ADS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ads
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Ads)
    {
        if (Ads->objectName().isEmpty())
            Ads->setObjectName(QStringLiteral("Ads"));
        Ads->resize(400, 300);
        Ads->setMinimumSize(QSize(100, 100));
        Ads->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(Ads);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox = new QGroupBox(Ads);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(50, 50));
        pushButton->setStyleSheet(QStringLiteral(""));
        QIcon icon(QIcon::fromTheme(QStringLiteral("x")));
        pushButton->setIcon(icon);
        pushButton->setFlat(true);

        horizontalLayout_2->addWidget(pushButton);


        horizontalLayout->addWidget(groupBox);


        retranslateUi(Ads);

        QMetaObject::connectSlotsByName(Ads);
    } // setupUi

    void retranslateUi(QWidget *Ads)
    {
        Ads->setWindowTitle(QApplication::translate("Ads", "Form", 0));
        groupBox->setTitle(QApplication::translate("Ads", "GroupBox", 0));
        label->setText(QApplication::translate("Ads", "<html><head/><body><p align=\"center\">Teste</p></body></html>", 0));
        label_2->setText(QApplication::translate("Ads", "<html><head/><body><p align=\"center\">Teste</p></body></html>", 0));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Ads: public Ui_Ads {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADS_H
