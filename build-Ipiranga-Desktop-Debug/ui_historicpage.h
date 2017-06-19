/********************************************************************************
** Form generated from reading UI file 'historicpage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORICPAGE_H
#define UI_HISTORICPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoricPage
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scroll;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *Button_all;
    QCommandLinkButton *Button_sales;
    QCommandLinkButton *Button_shopping;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *box_historic;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *HistoricPage)
    {
        if (HistoricPage->objectName().isEmpty())
            HistoricPage->setObjectName(QStringLiteral("HistoricPage"));
        HistoricPage->resize(641, 470);
        verticalLayout = new QVBoxLayout(HistoricPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(HistoricPage);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scroll = new QWidget();
        scroll->setObjectName(QStringLiteral("scroll"));
        scroll->setGeometry(QRect(0, 0, 619, 448));
        verticalLayout_3 = new QVBoxLayout(scroll);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame = new QFrame(scroll);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMaximumSize(QSize(16777215, 100));
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setStyleSheet(QStringLiteral("background:rgb(8, 122, 221)"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Button_all = new QCommandLinkButton(frame);
        Button_all->setObjectName(QStringLiteral("Button_all"));
        Button_all->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(Button_all);

        Button_sales = new QCommandLinkButton(frame);
        Button_sales->setObjectName(QStringLiteral("Button_sales"));
        Button_sales->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(Button_sales);

        Button_shopping = new QCommandLinkButton(frame);
        Button_shopping->setObjectName(QStringLiteral("Button_shopping"));
        Button_shopping->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(Button_shopping);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(frame);

        box_historic = new QVBoxLayout();
        box_historic->setObjectName(QStringLiteral("box_historic"));

        verticalLayout_3->addLayout(box_historic);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        scrollArea->setWidget(scroll);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(HistoricPage);

        QMetaObject::connectSlotsByName(HistoricPage);
    } // setupUi

    void retranslateUi(QWidget *HistoricPage)
    {
        HistoricPage->setWindowTitle(QApplication::translate("HistoricPage", "Form", 0));
        label->setText(QApplication::translate("HistoricPage", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#087add;\">My Historic</span></p></body></html>", 0));
        Button_all->setText(QApplication::translate("HistoricPage", "All", 0));
        Button_sales->setText(QApplication::translate("HistoricPage", "Sales", 0));
        Button_shopping->setText(QApplication::translate("HistoricPage", "Shopping", 0));
    } // retranslateUi

};

namespace Ui {
    class HistoricPage: public Ui_HistoricPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORICPAGE_H
