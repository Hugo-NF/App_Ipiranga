/********************************************************************************
** Form generated from reading UI file 'advertise.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVERTISE_H
#define UI_ADVERTISE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Advertise
{
public:
    QProgressBar *progressBar;

    void setupUi(QWidget *Advertise)
    {
        if (Advertise->objectName().isEmpty())
            Advertise->setObjectName(QStringLiteral("Advertise"));
        Advertise->resize(400, 300);
        progressBar = new QProgressBar(Advertise);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(160, 120, 118, 23));
        progressBar->setValue(24);

        retranslateUi(Advertise);

        QMetaObject::connectSlotsByName(Advertise);
    } // setupUi

    void retranslateUi(QWidget *Advertise)
    {
        Advertise->setWindowTitle(QApplication::translate("Advertise", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Advertise: public Ui_Advertise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVERTISE_H
