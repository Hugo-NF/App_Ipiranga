/********************************************************************************
** Form generated from reading UI file 'historic.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORIC_H
#define UI_HISTORIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Historic
{
public:
    QSlider *horizontalSlider;

    void setupUi(QWidget *Historic)
    {
        if (Historic->objectName().isEmpty())
            Historic->setObjectName(QStringLiteral("Historic"));
        Historic->resize(400, 300);
        horizontalSlider = new QSlider(Historic);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(130, 140, 160, 20));
        horizontalSlider->setOrientation(Qt::Horizontal);

        retranslateUi(Historic);

        QMetaObject::connectSlotsByName(Historic);
    } // setupUi

    void retranslateUi(QWidget *Historic)
    {
        Historic->setWindowTitle(QApplication::translate("Historic", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Historic: public Ui_Historic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORIC_H
