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
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserApp
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *Frame_Search;
    QHBoxLayout *horizontalLayout_2;
    QFrame *left;
    QPushButton *Button_search_advertise;
    QPushButton *Button_search_friends;
    QFrame *content;
    QLineEdit *line_search;
    QPushButton *Button_search;
    QFrame *right;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *Box_Menu;
    QFrame *Menu;
    QLabel *User_img;
    QLabel *UserName;
    QCommandLinkButton *Button_logout;
    QCommandLinkButton *Button_historic;
    QCommandLinkButton *Button_edit;
    QCommandLinkButton *Button_friends;
    QCommandLinkButton *Button_advertise;
    QCommandLinkButton *Button_home;
    QFrame *Anuncio_Menu;
    QStackedWidget *Pages;
    QVBoxLayout *Box_anuncio;
    QFrame *frame;

    void setupUi(QMainWindow *UserApp)
    {
        if (UserApp->objectName().isEmpty())
            UserApp->setObjectName(QStringLiteral("UserApp"));
        UserApp->resize(651, 562);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img_login/images/Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        UserApp->setWindowIcon(icon);
        centralwidget = new QWidget(UserApp);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(4, 3, 4, 3);
        Frame_Search = new QFrame(centralwidget);
        Frame_Search->setObjectName(QStringLiteral("Frame_Search"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Frame_Search->sizePolicy().hasHeightForWidth());
        Frame_Search->setSizePolicy(sizePolicy);
        Frame_Search->setMinimumSize(QSize(0, 40));
        Frame_Search->setStyleSheet(QStringLiteral(""));
        Frame_Search->setFrameShape(QFrame::StyledPanel);
        Frame_Search->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(Frame_Search);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        left = new QFrame(Frame_Search);
        left->setObjectName(QStringLiteral("left"));
        left->setFrameShape(QFrame::StyledPanel);
        left->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(left);

        Button_search_advertise = new QPushButton(Frame_Search);
        Button_search_advertise->setObjectName(QStringLiteral("Button_search_advertise"));
        Button_search_advertise->setMinimumSize(QSize(30, 30));
        Button_search_advertise->setMaximumSize(QSize(30, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img_login/images/announcement-icon_inactive.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/img_login/images/announcement-icon.png"), QSize(), QIcon::Disabled, QIcon::Off);
        Button_search_advertise->setIcon(icon1);
        Button_search_advertise->setFlat(true);

        horizontalLayout_2->addWidget(Button_search_advertise);

        Button_search_friends = new QPushButton(Frame_Search);
        Button_search_friends->setObjectName(QStringLiteral("Button_search_friends"));
        Button_search_friends->setMinimumSize(QSize(30, 30));
        Button_search_friends->setMaximumSize(QSize(30, 30));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img_login/images/friends_icon_inactive.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/img_login/images/friends_icon.png"), QSize(), QIcon::Disabled, QIcon::Off);
        Button_search_friends->setIcon(icon2);
        Button_search_friends->setFlat(true);

        horizontalLayout_2->addWidget(Button_search_friends);

        content = new QFrame(Frame_Search);
        content->setObjectName(QStringLiteral("content"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(content->sizePolicy().hasHeightForWidth());
        content->setSizePolicy(sizePolicy1);
        content->setMinimumSize(QSize(485, 30));
        content->setMaximumSize(QSize(460, 30));
        content->setFrameShape(QFrame::StyledPanel);
        content->setFrameShadow(QFrame::Raised);
        line_search = new QLineEdit(content);
        line_search->setObjectName(QStringLiteral("line_search"));
        line_search->setGeometry(QRect(0, 0, 460, 30));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line_search->sizePolicy().hasHeightForWidth());
        line_search->setSizePolicy(sizePolicy2);
        line_search->setMinimumSize(QSize(460, 30));
        line_search->setMaximumSize(QSize(460, 30));
        Button_search = new QPushButton(content);
        Button_search->setObjectName(QStringLiteral("Button_search"));
        Button_search->setEnabled(true);
        Button_search->setGeometry(QRect(455, 0, 30, 30));
        sizePolicy2.setHeightForWidth(Button_search->sizePolicy().hasHeightForWidth());
        Button_search->setSizePolicy(sizePolicy2);
        Button_search->setMinimumSize(QSize(30, 30));
        Button_search->setMaximumSize(QSize(30, 30));
        QPalette palette;
        Button_search->setPalette(palette);
        Button_search->setStyleSheet(QStringLiteral("Background:none;"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img_login/images/search_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_search->setIcon(icon3);
        Button_search->setIconSize(QSize(30, 30));
        Button_search->setAutoDefault(false);
        Button_search->setFlat(false);

        horizontalLayout_2->addWidget(content);

        right = new QFrame(Frame_Search);
        right->setObjectName(QStringLiteral("right"));
        right->setFrameShape(QFrame::StyledPanel);
        right->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(right);


        verticalLayout->addWidget(Frame_Search);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        Box_Menu = new QVBoxLayout();
        Box_Menu->setObjectName(QStringLiteral("Box_Menu"));
        Box_Menu->setSizeConstraint(QLayout::SetDefaultConstraint);
        Menu = new QFrame(centralwidget);
        Menu->setObjectName(QStringLiteral("Menu"));
        sizePolicy2.setHeightForWidth(Menu->sizePolicy().hasHeightForWidth());
        Menu->setSizePolicy(sizePolicy2);
        Menu->setMinimumSize(QSize(150, 500));
        Menu->setStyleSheet(QStringLiteral(""));
        Menu->setFrameShape(QFrame::StyledPanel);
        Menu->setFrameShadow(QFrame::Raised);
        User_img = new QLabel(Menu);
        User_img->setObjectName(QStringLiteral("User_img"));
        User_img->setGeometry(QRect(10, 30, 50, 50));
        User_img->setPixmap(QPixmap(QString::fromUtf8(":/img_login/images/User_img.png")));
        User_img->setScaledContents(true);
        User_img->setTextInteractionFlags(Qt::NoTextInteraction);
        UserName = new QLabel(Menu);
        UserName->setObjectName(QStringLiteral("UserName"));
        UserName->setGeometry(QRect(70, 39, 81, 31));
        QPalette palette1;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        UserName->setPalette(palette1);
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        UserName->setFont(font);
        UserName->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        Button_logout = new QCommandLinkButton(Menu);
        Button_logout->setObjectName(QStringLiteral("Button_logout"));
        Button_logout->setGeometry(QRect(30, 260, 121, 30));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img_login/images/logout_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_logout->setIcon(icon4);
        Button_historic = new QCommandLinkButton(Menu);
        Button_historic->setObjectName(QStringLiteral("Button_historic"));
        Button_historic->setGeometry(QRect(30, 180, 121, 30));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img_login/images/historic_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_historic->setIcon(icon5);
        Button_edit = new QCommandLinkButton(Menu);
        Button_edit->setObjectName(QStringLiteral("Button_edit"));
        Button_edit->setGeometry(QRect(30, 120, 121, 30));
        QIcon icon6;
        icon6.addFile(QStringLiteral("images/teste.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_edit->setIcon(icon6);
        Button_friends = new QCommandLinkButton(Menu);
        Button_friends->setObjectName(QStringLiteral("Button_friends"));
        Button_friends->setGeometry(QRect(30, 150, 121, 30));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img_login/images/friends_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_friends->setIcon(icon7);
        Button_advertise = new QCommandLinkButton(Menu);
        Button_advertise->setObjectName(QStringLiteral("Button_advertise"));
        Button_advertise->setGeometry(QRect(30, 210, 121, 30));
        Button_advertise->setStyleSheet(QStringLiteral(""));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/img_login/images/announcement-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_advertise->setIcon(icon8);
        Button_home = new QCommandLinkButton(Menu);
        Button_home->setObjectName(QStringLiteral("Button_home"));
        Button_home->setGeometry(QRect(30, 90, 121, 30));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/img_login/images/home_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_home->setIcon(icon9);

        Box_Menu->addWidget(Menu);

        Anuncio_Menu = new QFrame(centralwidget);
        Anuncio_Menu->setObjectName(QStringLiteral("Anuncio_Menu"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Anuncio_Menu->sizePolicy().hasHeightForWidth());
        Anuncio_Menu->setSizePolicy(sizePolicy3);
        Anuncio_Menu->setMinimumSize(QSize(150, 0));
        Anuncio_Menu->setFrameShape(QFrame::StyledPanel);
        Anuncio_Menu->setFrameShadow(QFrame::Raised);

        Box_Menu->addWidget(Anuncio_Menu);


        horizontalLayout->addLayout(Box_Menu);

        Pages = new QStackedWidget(centralwidget);
        Pages->setObjectName(QStringLiteral("Pages"));
        Pages->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(Pages);

        Box_anuncio = new QVBoxLayout();
        Box_anuncio->setObjectName(QStringLiteral("Box_anuncio"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        Box_anuncio->addWidget(frame);


        horizontalLayout->addLayout(Box_anuncio);


        verticalLayout->addLayout(horizontalLayout);

        UserApp->setCentralWidget(centralwidget);

        retranslateUi(UserApp);

        Button_search->setDefault(true);


        QMetaObject::connectSlotsByName(UserApp);
    } // setupUi

    void retranslateUi(QMainWindow *UserApp)
    {
        UserApp->setWindowTitle(QApplication::translate("UserApp", "Ipiranga", 0));
        Button_search_advertise->setText(QString());
        Button_search_friends->setText(QString());
        Button_search->setText(QString());
        User_img->setText(QString());
        UserName->setText(QApplication::translate("UserApp", "User Name", 0));
        Button_logout->setText(QApplication::translate("UserApp", "Logout", 0));
        Button_historic->setText(QApplication::translate("UserApp", "Historic", 0));
#ifndef QT_NO_WHATSTHIS
        Button_edit->setWhatsThis(QApplication::translate("UserApp", "<html><head/><body><p>this is nothing</p><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        Button_edit->setText(QApplication::translate("UserApp", "Edit. Profile", 0));
        Button_friends->setText(QApplication::translate("UserApp", "Friends", 0));
        Button_advertise->setText(QApplication::translate("UserApp", "Advertise", 0));
        Button_home->setText(QApplication::translate("UserApp", "Home", 0));
    } // retranslateUi

};

namespace Ui {
    class UserApp: public Ui_UserApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERAPP_H
