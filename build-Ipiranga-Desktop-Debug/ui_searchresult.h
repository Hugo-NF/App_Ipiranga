/********************************************************************************
** Form generated from reading UI file 'searchresult.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHRESULT_H
#define UI_SEARCHRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchResult
{
public:
    QLCDNumber *lcdNumber;

    void setupUi(QWidget *SearchResult)
    {
        if (SearchResult->objectName().isEmpty())
            SearchResult->setObjectName(QStringLiteral("SearchResult"));
        SearchResult->resize(400, 300);
        lcdNumber = new QLCDNumber(SearchResult);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(170, 130, 64, 23));

        retranslateUi(SearchResult);

        QMetaObject::connectSlotsByName(SearchResult);
    } // setupUi

    void retranslateUi(QWidget *SearchResult)
    {
        SearchResult->setWindowTitle(QApplication::translate("SearchResult", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class SearchResult: public Ui_SearchResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHRESULT_H
