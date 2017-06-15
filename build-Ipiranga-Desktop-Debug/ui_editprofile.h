/********************************************************************************
** Form generated from reading UI file 'editprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILE_H
#define UI_EDITPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditProfile
{
public:
    QLabel *label;

    void setupUi(QWidget *EditProfile)
    {
        if (EditProfile->objectName().isEmpty())
            EditProfile->setObjectName(QStringLiteral("EditProfile"));
        EditProfile->resize(400, 300);
        label = new QLabel(EditProfile);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 80, 68, 20));

        retranslateUi(EditProfile);

        QMetaObject::connectSlotsByName(EditProfile);
    } // setupUi

    void retranslateUi(QWidget *EditProfile)
    {
        EditProfile->setWindowTitle(QApplication::translate("EditProfile", "Form", 0));
        label->setText(QApplication::translate("EditProfile", "ehhhh", 0));
    } // retranslateUi

};

namespace Ui {
    class EditProfile: public Ui_EditProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILE_H
