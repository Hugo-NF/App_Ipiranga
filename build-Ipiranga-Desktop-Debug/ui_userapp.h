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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
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
    QPushButton *Button_adjust;
    QFrame *right;
    QFrame *Adjust_ads;
    QGridLayout *gridLayout_7;
    QLabel *label_category;
    QGroupBox *Order_by;
    QGridLayout *gridLayout_5;
    QCommandLinkButton *command_rating;
    QCommandLinkButton *command_quantity;
    QCommandLinkButton *command_price;
    QCommandLinkButton *command_city;
    QCommandLinkButton *command_title;
    QCommandLinkButton *command_category;
    QComboBox *comboBox_category;
    QGroupBox *Friendship;
    QGridLayout *gridLayout_6;
    QRadioButton *radio_all;
    QRadioButton *radio_friends;
    QRadioButton *radio_friends_of;
    QLabel *label_state;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *line_state;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_rating;
    QGroupBox *price;
    QGridLayout *gridLayout_4;
    QLineEdit *line_min;
    QLineEdit *line_max;
    QLabel *label_min;
    QLabel *label_max;
    QComboBox *comboBox_rating;
    QFrame *Adjust_friends;
    QGridLayout *gridLayout;
    QGroupBox *Order_by_2;
    QVBoxLayout *verticalLayout_5;
    QCommandLinkButton *command_rating_2;
    QCommandLinkButton *command_name;
    QCommandLinkButton *command_city_2;
    QComboBox *comboBox_rating_2;
    QLineEdit *line_state_2;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *Friendship_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radio_all_2;
    QRadioButton *radio_friends_2;
    QRadioButton *radio_friends_of_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_state_2;
    QLabel *label_rating_2;
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
    QFrame *line;
    QFrame *Anuncio_Menu;
    QStackedWidget *Pages;
    QVBoxLayout *Box_anuncio;
    QFrame *frame;

    void setupUi(QMainWindow *UserApp)
    {
        if (UserApp->objectName().isEmpty())
            UserApp->setObjectName(QStringLiteral("UserApp"));
        UserApp->resize(778, 888);
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

        Button_adjust = new QPushButton(Frame_Search);
        Button_adjust->setObjectName(QStringLiteral("Button_adjust"));
        Button_adjust->setMaximumSize(QSize(30, 30));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img_login/images/adjuste_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_adjust->setIcon(icon4);
        Button_adjust->setFlat(true);

        horizontalLayout_2->addWidget(Button_adjust);

        right = new QFrame(Frame_Search);
        right->setObjectName(QStringLiteral("right"));
        right->setFrameShape(QFrame::StyledPanel);
        right->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(right);


        verticalLayout->addWidget(Frame_Search);

        Adjust_ads = new QFrame(centralwidget);
        Adjust_ads->setObjectName(QStringLiteral("Adjust_ads"));
        Adjust_ads->setMinimumSize(QSize(0, 200));
        Adjust_ads->setStyleSheet(QStringLiteral("background:rgb(8, 122, 221)"));
        Adjust_ads->setFrameShape(QFrame::StyledPanel);
        Adjust_ads->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(Adjust_ads);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        label_category = new QLabel(Adjust_ads);
        label_category->setObjectName(QStringLiteral("label_category"));
        sizePolicy2.setHeightForWidth(label_category->sizePolicy().hasHeightForWidth());
        label_category->setSizePolicy(sizePolicy2);

        gridLayout_7->addWidget(label_category, 0, 1, 1, 1);

        Order_by = new QGroupBox(Adjust_ads);
        Order_by->setObjectName(QStringLiteral("Order_by"));
        gridLayout_5 = new QGridLayout(Order_by);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        command_rating = new QCommandLinkButton(Order_by);
        command_rating->setObjectName(QStringLiteral("command_rating"));
        command_rating->setMaximumSize(QSize(100, 16777215));

        gridLayout_5->addWidget(command_rating, 0, 1, 1, 1);

        command_quantity = new QCommandLinkButton(Order_by);
        command_quantity->setObjectName(QStringLiteral("command_quantity"));
        command_quantity->setMaximumSize(QSize(100, 16777215));

        gridLayout_5->addWidget(command_quantity, 2, 1, 1, 1);

        command_price = new QCommandLinkButton(Order_by);
        command_price->setObjectName(QStringLiteral("command_price"));
        command_price->setMaximumSize(QSize(100, 16777215));

        gridLayout_5->addWidget(command_price, 2, 0, 1, 1);

        command_city = new QCommandLinkButton(Order_by);
        command_city->setObjectName(QStringLiteral("command_city"));
        command_city->setMaximumSize(QSize(100, 16777215));

        gridLayout_5->addWidget(command_city, 1, 1, 1, 1);

        command_title = new QCommandLinkButton(Order_by);
        command_title->setObjectName(QStringLiteral("command_title"));
        command_title->setMaximumSize(QSize(100, 16777215));

        gridLayout_5->addWidget(command_title, 0, 0, 1, 1);

        command_category = new QCommandLinkButton(Order_by);
        command_category->setObjectName(QStringLiteral("command_category"));
        command_category->setMaximumSize(QSize(100, 16777215));

        gridLayout_5->addWidget(command_category, 1, 0, 1, 1);


        gridLayout_7->addWidget(Order_by, 0, 6, 6, 1);

        comboBox_category = new QComboBox(Adjust_ads);
        comboBox_category->setObjectName(QStringLiteral("comboBox_category"));
        sizePolicy2.setHeightForWidth(comboBox_category->sizePolicy().hasHeightForWidth());
        comboBox_category->setSizePolicy(sizePolicy2);
        comboBox_category->setMaximumSize(QSize(225, 22));
        comboBox_category->setStyleSheet(QStringLiteral("background:white;"));

        gridLayout_7->addWidget(comboBox_category, 1, 1, 1, 2);

        Friendship = new QGroupBox(Adjust_ads);
        Friendship->setObjectName(QStringLiteral("Friendship"));
        Friendship->setMaximumSize(QSize(150, 16777215));
        gridLayout_6 = new QGridLayout(Friendship);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        radio_all = new QRadioButton(Friendship);
        radio_all->setObjectName(QStringLiteral("radio_all"));

        gridLayout_6->addWidget(radio_all, 0, 0, 1, 1);

        radio_friends = new QRadioButton(Friendship);
        radio_friends->setObjectName(QStringLiteral("radio_friends"));

        gridLayout_6->addWidget(radio_friends, 1, 0, 1, 1);

        radio_friends_of = new QRadioButton(Friendship);
        radio_friends_of->setObjectName(QStringLiteral("radio_friends_of"));

        gridLayout_6->addWidget(radio_friends_of, 2, 0, 1, 1);


        gridLayout_7->addWidget(Friendship, 1, 4, 5, 1);

        label_state = new QLabel(Adjust_ads);
        label_state->setObjectName(QStringLiteral("label_state"));
        sizePolicy2.setHeightForWidth(label_state->sizePolicy().hasHeightForWidth());
        label_state->setSizePolicy(sizePolicy2);

        gridLayout_7->addWidget(label_state, 2, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_8, 3, 0, 1, 1);

        line_state = new QLineEdit(Adjust_ads);
        line_state->setObjectName(QStringLiteral("line_state"));
        sizePolicy2.setHeightForWidth(line_state->sizePolicy().hasHeightForWidth());
        line_state->setSizePolicy(sizePolicy2);
        line_state->setMaximumSize(QSize(225, 22));

        gridLayout_7->addWidget(line_state, 3, 1, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_5, 3, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 3, 5, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(59, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_7, 3, 7, 1, 1);

        label_rating = new QLabel(Adjust_ads);
        label_rating->setObjectName(QStringLiteral("label_rating"));
        sizePolicy2.setHeightForWidth(label_rating->sizePolicy().hasHeightForWidth());
        label_rating->setSizePolicy(sizePolicy2);

        gridLayout_7->addWidget(label_rating, 4, 1, 1, 1);

        price = new QGroupBox(Adjust_ads);
        price->setObjectName(QStringLiteral("price"));
        gridLayout_4 = new QGridLayout(price);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(3);
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(3, 0, 2, 0);
        line_min = new QLineEdit(price);
        line_min->setObjectName(QStringLiteral("line_min"));
        sizePolicy2.setHeightForWidth(line_min->sizePolicy().hasHeightForWidth());
        line_min->setSizePolicy(sizePolicy2);
        line_min->setMaximumSize(QSize(51, 21));

        gridLayout_4->addWidget(line_min, 0, 1, 1, 1);

        line_max = new QLineEdit(price);
        line_max->setObjectName(QStringLiteral("line_max"));
        sizePolicy2.setHeightForWidth(line_max->sizePolicy().hasHeightForWidth());
        line_max->setSizePolicy(sizePolicy2);
        line_max->setMaximumSize(QSize(51, 21));

        gridLayout_4->addWidget(line_max, 1, 1, 1, 1);

        label_min = new QLabel(price);
        label_min->setObjectName(QStringLiteral("label_min"));
        sizePolicy2.setHeightForWidth(label_min->sizePolicy().hasHeightForWidth());
        label_min->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(label_min, 0, 0, 1, 1);

        label_max = new QLabel(price);
        label_max->setObjectName(QStringLiteral("label_max"));
        sizePolicy2.setHeightForWidth(label_max->sizePolicy().hasHeightForWidth());
        label_max->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(label_max, 1, 0, 1, 1);


        gridLayout_7->addWidget(price, 4, 2, 2, 1);

        comboBox_rating = new QComboBox(Adjust_ads);
        comboBox_rating->setObjectName(QStringLiteral("comboBox_rating"));
        sizePolicy2.setHeightForWidth(comboBox_rating->sizePolicy().hasHeightForWidth());
        comboBox_rating->setSizePolicy(sizePolicy2);
        comboBox_rating->setMaximumSize(QSize(55, 22));
        comboBox_rating->setStyleSheet(QStringLiteral("background:white;"));

        gridLayout_7->addWidget(comboBox_rating, 5, 1, 1, 1);


        verticalLayout->addWidget(Adjust_ads);

        Adjust_friends = new QFrame(centralwidget);
        Adjust_friends->setObjectName(QStringLiteral("Adjust_friends"));
        Adjust_friends->setMinimumSize(QSize(0, 100));
        Adjust_friends->setStyleSheet(QStringLiteral("background:rgb(8, 122, 221)"));
        Adjust_friends->setFrameShape(QFrame::StyledPanel);
        Adjust_friends->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(Adjust_friends);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Order_by_2 = new QGroupBox(Adjust_friends);
        Order_by_2->setObjectName(QStringLiteral("Order_by_2"));
        Order_by_2->setMaximumSize(QSize(100, 16777215));
        verticalLayout_5 = new QVBoxLayout(Order_by_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        command_rating_2 = new QCommandLinkButton(Order_by_2);
        command_rating_2->setObjectName(QStringLiteral("command_rating_2"));
        command_rating_2->setMaximumSize(QSize(100, 16777215));

        verticalLayout_5->addWidget(command_rating_2);

        command_name = new QCommandLinkButton(Order_by_2);
        command_name->setObjectName(QStringLiteral("command_name"));
        command_name->setMaximumSize(QSize(100, 16777215));

        verticalLayout_5->addWidget(command_name);

        command_city_2 = new QCommandLinkButton(Order_by_2);
        command_city_2->setObjectName(QStringLiteral("command_city_2"));
        command_city_2->setMaximumSize(QSize(100, 16777215));

        verticalLayout_5->addWidget(command_city_2);


        gridLayout->addWidget(Order_by_2, 0, 7, 6, 1);

        comboBox_rating_2 = new QComboBox(Adjust_friends);
        comboBox_rating_2->setObjectName(QStringLiteral("comboBox_rating_2"));
        comboBox_rating_2->setMaximumSize(QSize(55, 22));
        comboBox_rating_2->setStyleSheet(QStringLiteral("background:white;"));

        gridLayout->addWidget(comboBox_rating_2, 4, 1, 1, 1);

        line_state_2 = new QLineEdit(Adjust_friends);
        line_state_2->setObjectName(QStringLiteral("line_state_2"));
        line_state_2->setMaximumSize(QSize(55, 22));

        gridLayout->addWidget(line_state_2, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(35, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 2, 1, 1);

        Friendship_2 = new QGroupBox(Adjust_friends);
        Friendship_2->setObjectName(QStringLiteral("Friendship_2"));
        Friendship_2->setMaximumSize(QSize(150, 16777215));
        verticalLayout_2 = new QVBoxLayout(Friendship_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radio_all_2 = new QRadioButton(Friendship_2);
        radio_all_2->setObjectName(QStringLiteral("radio_all_2"));

        verticalLayout_2->addWidget(radio_all_2);

        radio_friends_2 = new QRadioButton(Friendship_2);
        radio_friends_2->setObjectName(QStringLiteral("radio_friends_2"));

        verticalLayout_2->addWidget(radio_friends_2);

        radio_friends_of_2 = new QRadioButton(Friendship_2);
        radio_friends_of_2->setObjectName(QStringLiteral("radio_friends_of_2"));

        verticalLayout_2->addWidget(radio_friends_of_2);


        gridLayout->addWidget(Friendship_2, 0, 3, 6, 1);

        horizontalSpacer_4 = new QSpacerItem(35, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 8, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        label_state_2 = new QLabel(Adjust_friends);
        label_state_2->setObjectName(QStringLiteral("label_state_2"));

        gridLayout->addWidget(label_state_2, 1, 1, 1, 2);

        label_rating_2 = new QLabel(Adjust_friends);
        label_rating_2->setObjectName(QStringLiteral("label_rating_2"));

        gridLayout->addWidget(label_rating_2, 3, 1, 1, 2);


        verticalLayout->addWidget(Adjust_friends);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 15, -1, -1);
        Box_Menu = new QVBoxLayout();
        Box_Menu->setObjectName(QStringLiteral("Box_Menu"));
        Box_Menu->setSizeConstraint(QLayout::SetDefaultConstraint);
        Menu = new QFrame(centralwidget);
        Menu->setObjectName(QStringLiteral("Menu"));
        sizePolicy2.setHeightForWidth(Menu->sizePolicy().hasHeightForWidth());
        Menu->setSizePolicy(sizePolicy2);
        Menu->setMinimumSize(QSize(160, 400));
        Menu->setStyleSheet(QStringLiteral(""));
        Menu->setFrameShape(QFrame::StyledPanel);
        Menu->setFrameShadow(QFrame::Raised);
        User_img = new QLabel(Menu);
        User_img->setObjectName(QStringLiteral("User_img"));
        User_img->setGeometry(QRect(10, 20, 50, 50));
        User_img->setPixmap(QPixmap(QString::fromUtf8(":/img_login/images/User_img.png")));
        User_img->setScaledContents(true);
        User_img->setTextInteractionFlags(Qt::NoTextInteraction);
        UserName = new QLabel(Menu);
        UserName->setObjectName(QStringLiteral("UserName"));
        UserName->setGeometry(QRect(70, 29, 81, 31));
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
        Button_logout->setGeometry(QRect(30, 250, 121, 30));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img_login/images/logout_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_logout->setIcon(icon5);
        Button_historic = new QCommandLinkButton(Menu);
        Button_historic->setObjectName(QStringLiteral("Button_historic"));
        Button_historic->setGeometry(QRect(30, 170, 121, 30));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img_login/images/historic_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_historic->setIcon(icon6);
        Button_edit = new QCommandLinkButton(Menu);
        Button_edit->setObjectName(QStringLiteral("Button_edit"));
        Button_edit->setGeometry(QRect(30, 110, 121, 30));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img_login/images/profile_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_edit->setIcon(icon7);
        Button_friends = new QCommandLinkButton(Menu);
        Button_friends->setObjectName(QStringLiteral("Button_friends"));
        Button_friends->setGeometry(QRect(30, 140, 121, 30));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/img_login/images/friends_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_friends->setIcon(icon8);
        Button_advertise = new QCommandLinkButton(Menu);
        Button_advertise->setObjectName(QStringLiteral("Button_advertise"));
        Button_advertise->setGeometry(QRect(30, 200, 121, 30));
        Button_advertise->setStyleSheet(QStringLiteral(""));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/img_login/images/announcement-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_advertise->setIcon(icon9);
        Button_home = new QCommandLinkButton(Menu);
        Button_home->setObjectName(QStringLiteral("Button_home"));
        Button_home->setGeometry(QRect(30, 80, 121, 30));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/img_login/images/home_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_home->setIcon(icon10);
        line = new QFrame(Menu);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(155, 10, 3, 350));
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setMinimumSize(QSize(0, 320));
        line->setMaximumSize(QSize(16777215, 350));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        Box_Menu->addWidget(Menu);

        Anuncio_Menu = new QFrame(centralwidget);
        Anuncio_Menu->setObjectName(QStringLiteral("Anuncio_Menu"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Anuncio_Menu->sizePolicy().hasHeightForWidth());
        Anuncio_Menu->setSizePolicy(sizePolicy3);
        Anuncio_Menu->setMinimumSize(QSize(160, 0));
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
        QWidget::setTabOrder(Button_search_friends, line_search);
        QWidget::setTabOrder(line_search, Button_search_advertise);
        QWidget::setTabOrder(Button_search_advertise, Button_search);
        QWidget::setTabOrder(Button_search, Button_home);
        QWidget::setTabOrder(Button_home, Button_edit);
        QWidget::setTabOrder(Button_edit, Button_friends);
        QWidget::setTabOrder(Button_friends, Button_historic);
        QWidget::setTabOrder(Button_historic, Button_advertise);
        QWidget::setTabOrder(Button_advertise, Button_logout);

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
        Button_adjust->setText(QString());
        label_category->setText(QApplication::translate("UserApp", "Category", 0));
        Order_by->setTitle(QApplication::translate("UserApp", " Order by", 0));
        command_rating->setText(QApplication::translate("UserApp", "Rating", 0));
        command_quantity->setText(QApplication::translate("UserApp", "Quantity", 0));
        command_price->setText(QApplication::translate("UserApp", "Price", 0));
        command_city->setText(QApplication::translate("UserApp", "City", 0));
        command_title->setText(QApplication::translate("UserApp", "Title", 0));
        command_category->setText(QApplication::translate("UserApp", "Category", 0));
        comboBox_category->clear();
        comboBox_category->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("UserApp", "Animals", 0)
         << QApplication::translate("UserApp", "Automobiles", 0)
         << QApplication::translate("UserApp", "Books", 0)
         << QApplication::translate("UserApp", "Clothes", 0)
         << QApplication::translate("UserApp", "Computing", 0)
         << QApplication::translate("UserApp", "Construction", 0)
         << QApplication::translate("UserApp", "Drinks", 0)
         << QApplication::translate("UserApp", "Electronics", 0)
         << QApplication::translate("UserApp", "Food", 0)
         << QApplication::translate("UserApp", "Furniture", 0)
         << QApplication::translate("UserApp", "Games", 0)
         << QApplication::translate("UserApp", "Home Appliances", 0)
         << QApplication::translate("UserApp", "Kitchen", 0)
         << QApplication::translate("UserApp", "Leisure", 0)
         << QApplication::translate("UserApp", "Leisure Services", 0)
         << QApplication::translate("UserApp", "Medicines", 0)
         << QApplication::translate("UserApp", "Music", 0)
         << QApplication::translate("UserApp", "Office", 0)
         << QApplication::translate("UserApp", "Properties", 0)
         << QApplication::translate("UserApp", "Shoes", 0)
         << QApplication::translate("UserApp", "Sport", 0)
         << QApplication::translate("UserApp", "Ticket", 0)
         << QApplication::translate("UserApp", "Travel", 0)
        );
        Friendship->setTitle(QApplication::translate("UserApp", "Friendship", 0));
        radio_all->setText(QApplication::translate("UserApp", "All", 0));
        radio_friends->setText(QApplication::translate("UserApp", "Friends", 0));
        radio_friends_of->setText(QApplication::translate("UserApp", "Friends of \n"
"Friends", 0));
        label_state->setText(QApplication::translate("UserApp", "State", 0));
        label_rating->setText(QApplication::translate("UserApp", "Rating", 0));
        price->setTitle(QApplication::translate("UserApp", "Price", 0));
        label_min->setText(QApplication::translate("UserApp", "Min(R$)", 0));
        label_max->setText(QApplication::translate("UserApp", "Max(R$)", 0));
        comboBox_rating->clear();
        comboBox_rating->insertItems(0, QStringList()
         << QApplication::translate("UserApp", "1", 0)
         << QApplication::translate("UserApp", "2", 0)
         << QApplication::translate("UserApp", "3", 0)
         << QApplication::translate("UserApp", "4", 0)
         << QApplication::translate("UserApp", "5", 0)
        );
        Order_by_2->setTitle(QApplication::translate("UserApp", " Order by", 0));
        command_rating_2->setText(QApplication::translate("UserApp", "Rating", 0));
        command_name->setText(QApplication::translate("UserApp", "Name", 0));
        command_city_2->setText(QApplication::translate("UserApp", "City", 0));
        comboBox_rating_2->clear();
        comboBox_rating_2->insertItems(0, QStringList()
         << QApplication::translate("UserApp", "1", 0)
         << QApplication::translate("UserApp", "2", 0)
         << QApplication::translate("UserApp", "3", 0)
         << QApplication::translate("UserApp", "4", 0)
         << QApplication::translate("UserApp", "5", 0)
        );
        line_state_2->setInputMask(QApplication::translate("UserApp", "AA", 0));
        line_state_2->setText(QString());
        Friendship_2->setTitle(QApplication::translate("UserApp", "Friendship", 0));
        radio_all_2->setText(QApplication::translate("UserApp", "All", 0));
        radio_friends_2->setText(QApplication::translate("UserApp", "Friends", 0));
        radio_friends_of_2->setText(QApplication::translate("UserApp", "Friends of \n"
"Friends", 0));
        label_state_2->setText(QApplication::translate("UserApp", "State", 0));
        label_rating_2->setText(QApplication::translate("UserApp", "Rating", 0));
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
