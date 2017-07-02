/********************************************************************************
** Form generated from reading UI file 'adminpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPAGE_H
#define UI_ADMINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminPage
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *Home;
    QVBoxLayout *verticalLayout_8;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_10;
    QGroupBox *MyAccount;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_11;
    QLabel *Admin;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_13;
    QLabel *Ipiranga;
    QWidget *Users;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QFrame *content_2;
    QLineEdit *line_search_users;
    QPushButton *Button_search_users;
    QSpacerItem *horizontalSpacer_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_16;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QFrame *line;
    QPushButton *Button_delete_users;
    QGridLayout *box_users;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QWidget *Transation;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_5;
    QFrame *content_3;
    QLineEdit *line_search_transation;
    QPushButton *Button_search_transation;
    QSpacerItem *horizontalSpacer_6;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Button_delete_transations;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *box_transation;
    QWidget *Historics;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_3;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_13;
    QFrame *line_3;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_3;
    QPushButton *Button_delete_historic;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *box_historics;

    void setupUi(QWidget *AdminPage)
    {
        if (AdminPage->objectName().isEmpty())
            AdminPage->setObjectName(QStringLiteral("AdminPage"));
        AdminPage->resize(713, 469);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img_login/images/Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        AdminPage->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(AdminPage);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(AdminPage);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        Home = new QWidget();
        Home->setObjectName(QStringLiteral("Home"));
        verticalLayout_8 = new QVBoxLayout(Home);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        scrollArea_4 = new QScrollArea(Home);
        scrollArea_4->setObjectName(QStringLiteral("scrollArea_4"));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QStringLiteral("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 676, 491));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        frame_7 = new QFrame(scrollAreaWidgetContents_4);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_7->sizePolicy().hasHeightForWidth());
        frame_7->setSizePolicy(sizePolicy);
        frame_7->setStyleSheet(QStringLiteral(""));
        horizontalLayout_6 = new QHBoxLayout(frame_7);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, -1);
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        MyAccount = new QGroupBox(frame_7);
        MyAccount->setObjectName(QStringLiteral("MyAccount"));
        MyAccount->setMinimumSize(QSize(500, 140));
        MyAccount->setMaximumSize(QSize(700, 140));
        frame_8 = new QFrame(MyAccount);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setGeometry(QRect(0, 20, 500, 45));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_8->sizePolicy().hasHeightForWidth());
        frame_8->setSizePolicy(sizePolicy1);
        frame_8->setMinimumSize(QSize(500, 30));
        horizontalLayout_7 = new QHBoxLayout(frame_8);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_11 = new QSpacerItem(139, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        Admin = new QLabel(frame_8);
        Admin->setObjectName(QStringLiteral("Admin"));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        Admin->setFont(font);

        horizontalLayout_7->addWidget(Admin);

        horizontalSpacer_12 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_12);


        horizontalLayout_6->addWidget(MyAccount);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);


        verticalLayout_7->addWidget(frame_7);

        Ipiranga = new QLabel(scrollAreaWidgetContents_4);
        Ipiranga->setObjectName(QStringLiteral("Ipiranga"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Ipiranga->sizePolicy().hasHeightForWidth());
        Ipiranga->setSizePolicy(sizePolicy2);

        verticalLayout_7->addWidget(Ipiranga);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_8->addWidget(scrollArea_4);

        tabWidget->addTab(Home, QString());
        Users = new QWidget();
        Users->setObjectName(QStringLiteral("Users"));
        verticalLayout = new QVBoxLayout(Users);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_2 = new QFrame(Users);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMaximumSize(QSize(16777215, 35));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_2);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        content_2 = new QFrame(frame_2);
        content_2->setObjectName(QStringLiteral("content_2"));
        sizePolicy.setHeightForWidth(content_2->sizePolicy().hasHeightForWidth());
        content_2->setSizePolicy(sizePolicy);
        content_2->setMinimumSize(QSize(485, 30));
        content_2->setMaximumSize(QSize(460, 30));
        line_search_users = new QLineEdit(content_2);
        line_search_users->setObjectName(QStringLiteral("line_search_users"));
        line_search_users->setGeometry(QRect(0, 0, 460, 30));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(line_search_users->sizePolicy().hasHeightForWidth());
        line_search_users->setSizePolicy(sizePolicy3);
        line_search_users->setMinimumSize(QSize(460, 30));
        line_search_users->setMaximumSize(QSize(460, 30));
        Button_search_users = new QPushButton(content_2);
        Button_search_users->setObjectName(QStringLiteral("Button_search_users"));
        Button_search_users->setEnabled(true);
        Button_search_users->setGeometry(QRect(455, 0, 30, 30));
        sizePolicy3.setHeightForWidth(Button_search_users->sizePolicy().hasHeightForWidth());
        Button_search_users->setSizePolicy(sizePolicy3);
        Button_search_users->setMinimumSize(QSize(30, 30));
        Button_search_users->setMaximumSize(QSize(30, 30));
        QPalette palette;
        Button_search_users->setPalette(palette);
        Button_search_users->setStyleSheet(QStringLiteral("Background:none;"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img_login/images/search_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_search_users->setIcon(icon1);
        Button_search_users->setIconSize(QSize(30, 30));
        Button_search_users->setAutoDefault(false);
        Button_search_users->setFlat(false);

        horizontalLayout_3->addWidget(content_2);

        horizontalSpacer_3 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(frame_2);

        scrollArea = new QScrollArea(Users);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 805, 357));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_16, 0, 0, 1, 1);

        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(700, 0));
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


        gridLayout->addWidget(frame, 0, 1, 1, 1);

        Button_delete_users = new QPushButton(scrollAreaWidgetContents);
        Button_delete_users->setObjectName(QStringLiteral("Button_delete_users"));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        Button_delete_users->setFont(font1);
        Button_delete_users->setFlat(true);

        gridLayout->addWidget(Button_delete_users, 0, 2, 1, 1);

        box_users = new QGridLayout();
        box_users->setObjectName(QStringLiteral("box_users"));
        label_6 = new QLabel(scrollAreaWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16777215, 0));

        box_users->addWidget(label_6, 0, 2, 1, 1);

        label_5 = new QLabel(scrollAreaWidgetContents);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(16777215, 0));

        box_users->addWidget(label_5, 0, 1, 1, 1);

        label_3 = new QLabel(scrollAreaWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 0));

        box_users->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 0));

        box_users->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(scrollAreaWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(16777215, 0));

        box_users->addWidget(label_4, 2, 0, 1, 1);


        gridLayout->addLayout(box_users, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        tabWidget->addTab(Users, QString());
        scrollArea->raise();
        frame_2->raise();
        Transation = new QWidget();
        Transation->setObjectName(QStringLiteral("Transation"));
        verticalLayout_2 = new QVBoxLayout(Transation);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame_4 = new QFrame(Transation);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setMaximumSize(QSize(16777215, 35));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        content_3 = new QFrame(frame_4);
        content_3->setObjectName(QStringLiteral("content_3"));
        sizePolicy.setHeightForWidth(content_3->sizePolicy().hasHeightForWidth());
        content_3->setSizePolicy(sizePolicy);
        content_3->setMinimumSize(QSize(485, 30));
        content_3->setMaximumSize(QSize(460, 30));
        line_search_transation = new QLineEdit(content_3);
        line_search_transation->setObjectName(QStringLiteral("line_search_transation"));
        line_search_transation->setGeometry(QRect(0, 0, 460, 30));
        sizePolicy3.setHeightForWidth(line_search_transation->sizePolicy().hasHeightForWidth());
        line_search_transation->setSizePolicy(sizePolicy3);
        line_search_transation->setMinimumSize(QSize(460, 30));
        line_search_transation->setMaximumSize(QSize(460, 30));
        Button_search_transation = new QPushButton(content_3);
        Button_search_transation->setObjectName(QStringLiteral("Button_search_transation"));
        Button_search_transation->setEnabled(true);
        Button_search_transation->setGeometry(QRect(455, 0, 30, 30));
        sizePolicy3.setHeightForWidth(Button_search_transation->sizePolicy().hasHeightForWidth());
        Button_search_transation->setSizePolicy(sizePolicy3);
        Button_search_transation->setMinimumSize(QSize(30, 30));
        Button_search_transation->setMaximumSize(QSize(30, 30));
        QPalette palette1;
        Button_search_transation->setPalette(palette1);
        Button_search_transation->setStyleSheet(QStringLiteral("Background:none;"));
        Button_search_transation->setIcon(icon1);
        Button_search_transation->setIconSize(QSize(30, 30));
        Button_search_transation->setAutoDefault(false);
        Button_search_transation->setFlat(false);

        horizontalLayout_4->addWidget(content_3);

        horizontalSpacer_6 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_2->addWidget(frame_4);

        scrollArea_2 = new QScrollArea(Transation);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 805, 357));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frame_3 = new QFrame(scrollAreaWidgetContents_2);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMinimumSize(QSize(700, 0));
        frame_3->setMaximumSize(QSize(16777215, 50));
        verticalLayout_5 = new QVBoxLayout(frame_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(16777215, 50));

        verticalLayout_5->addWidget(label_7);

        line_2 = new QFrame(frame_3);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setStyleSheet(QStringLiteral("background:rgb(8, 122, 221)"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);


        gridLayout_2->addWidget(frame_3, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        Button_delete_transations = new QPushButton(scrollAreaWidgetContents_2);
        Button_delete_transations->setObjectName(QStringLiteral("Button_delete_transations"));
        Button_delete_transations->setFont(font1);
        Button_delete_transations->setFlat(true);

        gridLayout_2->addWidget(Button_delete_transations, 0, 2, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_15, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        box_transation = new QVBoxLayout();
        box_transation->setObjectName(QStringLiteral("box_transation"));

        gridLayout_2->addLayout(box_transation, 1, 1, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(scrollArea_2);

        tabWidget->addTab(Transation, QString());
        Historics = new QWidget();
        Historics->setObjectName(QStringLiteral("Historics"));
        verticalLayout_3 = new QVBoxLayout(Historics);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        scrollArea_3 = new QScrollArea(Historics);
        scrollArea_3->setObjectName(QStringLiteral("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 805, 397));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        frame_5 = new QFrame(scrollAreaWidgetContents_3);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setMinimumSize(QSize(700, 0));
        frame_5->setMaximumSize(QSize(16777215, 50));
        verticalLayout_6 = new QVBoxLayout(frame_5);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_13 = new QLabel(frame_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMaximumSize(QSize(16777215, 50));

        verticalLayout_6->addWidget(label_13);

        line_3 = new QFrame(frame_5);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setStyleSheet(QStringLiteral("background:rgb(8, 122, 221)"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_3);


        gridLayout_3->addWidget(frame_5, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 2, 1, 1, 1);

        Button_delete_historic = new QPushButton(scrollAreaWidgetContents_3);
        Button_delete_historic->setObjectName(QStringLiteral("Button_delete_historic"));
        Button_delete_historic->setFont(font1);
        Button_delete_historic->setFlat(true);

        gridLayout_3->addWidget(Button_delete_historic, 0, 2, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_14, 0, 0, 1, 1);

        box_historics = new QVBoxLayout();
        box_historics->setObjectName(QStringLiteral("box_historics"));

        gridLayout_3->addLayout(box_historics, 1, 1, 1, 1);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_3->addWidget(scrollArea_3);

        tabWidget->addTab(Historics, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(AdminPage);

        tabWidget->setCurrentIndex(0);
        Button_search_users->setDefault(true);
        Button_search_transation->setDefault(true);


        QMetaObject::connectSlotsByName(AdminPage);
    } // setupUi

    void retranslateUi(QWidget *AdminPage)
    {
        AdminPage->setWindowTitle(QApplication::translate("AdminPage", "Administrative Painel", Q_NULLPTR));
        MyAccount->setTitle(QApplication::translate("AdminPage", "My Informations", Q_NULLPTR));
        Admin->setText(QApplication::translate("AdminPage", "Administrator Painel", Q_NULLPTR));
        Ipiranga->setText(QApplication::translate("AdminPage", "<html><head/><body><p align=\"center\"><span style=\" font-size:72pt; font-weight:600; font-style:italic; color:#3465a4;\">I</span><span style=\" font-size:72pt; font-weight:600; font-style:italic; color:#3f66ca;\">piranga!</span></p><p align=\"center\"><span style=\" font-weight:600; color:#729fcf;\">Welcome</span><span style=\" font-weight:600;\"> to a new world,</span></p><p align=\"center\"><span style=\" font-weight:600;\">where you can find all, that exist in the universe!</span></p><p align=\"center\"><br/></p><p align=\"center\"><br/></p><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Home), QApplication::translate("AdminPage", "Home", Q_NULLPTR));
        Button_search_users->setText(QString());
        label->setText(QApplication::translate("AdminPage", "<html><head/><body><p><span style=\" font-weight:600; color:#087add;\">Users</span></p></body></html>", Q_NULLPTR));
        Button_delete_users->setText(QApplication::translate("AdminPage", "Delete All", Q_NULLPTR));
        label_6->setText(QString());
        label_5->setText(QString());
        label_3->setText(QString());
        label_2->setText(QString());
        label_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(Users), QApplication::translate("AdminPage", "Users", Q_NULLPTR));
        Button_search_transation->setText(QString());
        label_7->setText(QApplication::translate("AdminPage", "<html><head/><body><p><span style=\" font-weight:600; color:#087add;\">Transations</span></p></body></html>", Q_NULLPTR));
        Button_delete_transations->setText(QApplication::translate("AdminPage", "Delete All", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Transation), QApplication::translate("AdminPage", "Transations", Q_NULLPTR));
        label_13->setText(QApplication::translate("AdminPage", "<html><head/><body><p><span style=\" font-weight:600; color:#087add;\">Historics</span></p></body></html>", Q_NULLPTR));
        Button_delete_historic->setText(QApplication::translate("AdminPage", "Delete All", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Historics), QApplication::translate("AdminPage", "Historics", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminPage: public Ui_AdminPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H
