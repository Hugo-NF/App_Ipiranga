/********************************************************************************
** Form generated from reading UI file 'searchs.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHS_H
#define UI_SEARCHS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Searchs
{
public:

    void setupUi(QWidget *Searchs)
    {
        if (Searchs->objectName().isEmpty())
            Searchs->setObjectName(QStringLiteral("Searchs"));
        Searchs->resize(400, 300);

        retranslateUi(Searchs);

        QMetaObject::connectSlotsByName(Searchs);
    } // setupUi

    void retranslateUi(QWidget *Searchs)
    {
        Searchs->setWindowTitle(QApplication::translate("Searchs", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Searchs: public Ui_Searchs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHS_H
