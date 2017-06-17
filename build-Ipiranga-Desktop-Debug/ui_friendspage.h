/********************************************************************************
** Form generated from reading UI file 'friendspage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDSPAGE_H
#define UI_FRIENDSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriendsPage
{
public:
    QSlider *verticalSlider;

    void setupUi(QWidget *FriendsPage)
    {
        if (FriendsPage->objectName().isEmpty())
            FriendsPage->setObjectName(QStringLiteral("FriendsPage"));
        FriendsPage->resize(400, 300);
        verticalSlider = new QSlider(FriendsPage);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(190, 60, 20, 160));
        verticalSlider->setOrientation(Qt::Vertical);

        retranslateUi(FriendsPage);

        QMetaObject::connectSlotsByName(FriendsPage);
    } // setupUi

    void retranslateUi(QWidget *FriendsPage)
    {
        FriendsPage->setWindowTitle(QApplication::translate("FriendsPage", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class FriendsPage: public Ui_FriendsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDSPAGE_H
