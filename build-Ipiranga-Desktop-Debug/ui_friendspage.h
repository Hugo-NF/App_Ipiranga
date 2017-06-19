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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriendsPage
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QFrame *line;
    QGridLayout *box_friends;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *FriendsPage)
    {
        if (FriendsPage->objectName().isEmpty())
            FriendsPage->setObjectName(QStringLiteral("FriendsPage"));
        FriendsPage->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FriendsPage->sizePolicy().hasHeightForWidth());
        FriendsPage->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(FriendsPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(FriendsPage);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 378, 278));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMaximumSize(QSize(16777215, 50));
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 50));

        verticalLayout_4->addWidget(label);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setStyleSheet(QStringLiteral("background:rgb(8, 122, 221)"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        box_friends = new QGridLayout();
        box_friends->setObjectName(QStringLiteral("box_friends"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 0));

        box_friends->addWidget(label_2, 0, 0, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 0));

        box_friends->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(16777215, 0));

        box_friends->addWidget(label_4, 2, 0, 1, 1);

        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16777215, 0));

        box_friends->addWidget(label_6, 0, 2, 1, 1);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(16777215, 0));

        box_friends->addWidget(label_5, 0, 1, 1, 1);


        gridLayout->addLayout(box_friends, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(FriendsPage);

        QMetaObject::connectSlotsByName(FriendsPage);
    } // setupUi

    void retranslateUi(QWidget *FriendsPage)
    {
        FriendsPage->setWindowTitle(QApplication::translate("FriendsPage", "Form", 0));
        label->setText(QApplication::translate("FriendsPage", "<html><head/><body><p><span style=\" font-weight:600; color:#087add;\">My Friends</span></p></body></html>", 0));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FriendsPage: public Ui_FriendsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDSPAGE_H
