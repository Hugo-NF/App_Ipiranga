/********************************************************************************
** Form generated from reading UI file 'initialpage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIALPAGE_H
#define UI_INITIALPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InitialPage
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;

    void setupUi(QWidget *InitialPage)
    {
        if (InitialPage->objectName().isEmpty())
            InitialPage->setObjectName(QStringLiteral("InitialPage"));
        InitialPage->resize(526, 409);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InitialPage->sizePolicy().hasHeightForWidth());
        InitialPage->setSizePolicy(sizePolicy);
        InitialPage->setMinimumSize(QSize(100, 0));
        InitialPage->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(InitialPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(InitialPage);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 522, 405));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(InitialPage);

        QMetaObject::connectSlotsByName(InitialPage);
    } // setupUi

    void retranslateUi(QWidget *InitialPage)
    {
        InitialPage->setWindowTitle(QApplication::translate("InitialPage", "Form", 0));
        label->setText(QApplication::translate("InitialPage", "<html><head/><body><p align=\"center\"><span style=\" font-size:72pt; font-weight:600; font-style:italic; color:#3465a4;\">I</span><span style=\" font-size:72pt; font-weight:600; font-style:italic; color:#3f66ca;\">piranga!</span></p><p align=\"center\"><span style=\" font-weight:600; color:#729fcf;\">Welcome</span><span style=\" font-weight:600;\"> to a new world,</span></p><p align=\"center\"><span style=\" font-weight:600;\">where you can find all, that exist in the universe!</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class InitialPage: public Ui_InitialPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIALPAGE_H
