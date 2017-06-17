/********************************************************************************
** Form generated from reading UI file 'historiclayout.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORICLAYOUT_H
#define UI_HISTORICLAYOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoricLayout
{
public:

    void setupUi(QWidget *HistoricLayout)
    {
        if (HistoricLayout->objectName().isEmpty())
            HistoricLayout->setObjectName(QStringLiteral("HistoricLayout"));
        HistoricLayout->resize(400, 300);

        retranslateUi(HistoricLayout);

        QMetaObject::connectSlotsByName(HistoricLayout);
    } // setupUi

    void retranslateUi(QWidget *HistoricLayout)
    {
        HistoricLayout->setWindowTitle(QApplication::translate("HistoricLayout", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class HistoricLayout: public Ui_HistoricLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORICLAYOUT_H
