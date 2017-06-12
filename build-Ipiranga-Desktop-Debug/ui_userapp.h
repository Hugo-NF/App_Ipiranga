/********************************************************************************
** Form generated from reading UI file 'userapp.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERAPP_H
#define UI_USERAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserApp
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserApp)
    {
        if (UserApp->objectName().isEmpty())
            UserApp->setObjectName(QStringLiteral("UserApp"));
        UserApp->resize(640, 480);
        centralwidget = new QWidget(UserApp);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 150, 81, 61));
        UserApp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserApp);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 21));
        UserApp->setMenuBar(menubar);
        statusbar = new QStatusBar(UserApp);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UserApp->setStatusBar(statusbar);

        retranslateUi(UserApp);

        QMetaObject::connectSlotsByName(UserApp);
    } // setupUi

    void retranslateUi(QMainWindow *UserApp)
    {
        UserApp->setWindowTitle(QApplication::translate("UserApp", "Ipiranga", 0));
        label->setText(QApplication::translate("UserApp", "BIRRRRRRLLLL", 0));
    } // retranslateUi

};

namespace Ui {
    class UserApp: public Ui_UserApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERAPP_H
