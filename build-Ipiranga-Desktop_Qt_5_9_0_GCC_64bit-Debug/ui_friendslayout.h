/********************************************************************************
** Form generated from reading UI file 'friendslayout.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDSLAYOUT_H
#define UI_FRIENDSLAYOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriendsLayout
{
public:
    QHBoxLayout *horizontalLayout_2;
    QFrame *principal_information;
    QGridLayout *gridLayout;
    QLabel *label_email;
    QPushButton *Button_delete;
    QLabel *label_name;
    QLabel *label_number;
    QLabel *Friend_img;
    QFrame *rating;
    QHBoxLayout *horizontalLayout;
    QLabel *label_rating;
    QLabel *label;
    QPushButton *see_more;
    QPushButton *Button_show_friends;

    void setupUi(QWidget *FriendsLayout)
    {
        if (FriendsLayout->objectName().isEmpty())
            FriendsLayout->setObjectName(QStringLiteral("FriendsLayout"));
        FriendsLayout->resize(290, 100);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FriendsLayout->sizePolicy().hasHeightForWidth());
        FriendsLayout->setSizePolicy(sizePolicy);
        FriendsLayout->setMinimumSize(QSize(290, 100));
        FriendsLayout->setMaximumSize(QSize(290, 100));
        horizontalLayout_2 = new QHBoxLayout(FriendsLayout);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        principal_information = new QFrame(FriendsLayout);
        principal_information->setObjectName(QStringLiteral("principal_information"));
        principal_information->setFrameShape(QFrame::StyledPanel);
        principal_information->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(principal_information);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_email = new QLabel(principal_information);
        label_email->setObjectName(QStringLiteral("label_email"));

        gridLayout->addWidget(label_email, 1, 1, 1, 1);

        Button_delete = new QPushButton(principal_information);
        Button_delete->setObjectName(QStringLiteral("Button_delete"));
        Button_delete->setMaximumSize(QSize(30, 30));
        QIcon icon;
        QString iconThemeName = QStringLiteral("x");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        Button_delete->setIcon(icon);
        Button_delete->setFlat(true);

        gridLayout->addWidget(Button_delete, 0, 2, 1, 1);

        label_name = new QLabel(principal_information);
        label_name->setObjectName(QStringLiteral("label_name"));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_name->setFont(font);

        gridLayout->addWidget(label_name, 0, 1, 1, 1);

        label_number = new QLabel(principal_information);
        label_number->setObjectName(QStringLiteral("label_number"));

        gridLayout->addWidget(label_number, 2, 1, 1, 1);

        Friend_img = new QLabel(principal_information);
        Friend_img->setObjectName(QStringLiteral("Friend_img"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Friend_img->sizePolicy().hasHeightForWidth());
        Friend_img->setSizePolicy(sizePolicy1);
        Friend_img->setMinimumSize(QSize(50, 50));
        Friend_img->setMaximumSize(QSize(50, 50));
        Friend_img->setPixmap(QPixmap(QString::fromUtf8(":/img_login/images/User_img.png")));
        Friend_img->setScaledContents(true);

        gridLayout->addWidget(Friend_img, 0, 0, 2, 1);

        rating = new QFrame(principal_information);
        rating->setObjectName(QStringLiteral("rating"));
        horizontalLayout = new QHBoxLayout(rating);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_rating = new QLabel(rating);
        label_rating->setObjectName(QStringLiteral("label_rating"));

        horizontalLayout->addWidget(label_rating);

        label = new QLabel(rating);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);


        gridLayout->addWidget(rating, 2, 0, 1, 1);

        see_more = new QPushButton(principal_information);
        see_more->setObjectName(QStringLiteral("see_more"));
        see_more->setMaximumSize(QSize(30, 30));
        QIcon icon1;
        iconThemeName = QStringLiteral("add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        see_more->setIcon(icon1);
        see_more->setFlat(true);

        gridLayout->addWidget(see_more, 1, 2, 1, 1);

        Button_show_friends = new QPushButton(principal_information);
        Button_show_friends->setObjectName(QStringLiteral("Button_show_friends"));
        Button_show_friends->setMaximumSize(QSize(30, 30));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img_login/images/friends_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_show_friends->setIcon(icon2);
        Button_show_friends->setFlat(true);

        gridLayout->addWidget(Button_show_friends, 2, 2, 1, 1);

        rating->raise();
        label_number->raise();
        Button_delete->raise();
        label_email->raise();
        Friend_img->raise();
        label_name->raise();
        see_more->raise();
        Button_show_friends->raise();

        horizontalLayout_2->addWidget(principal_information);


        retranslateUi(FriendsLayout);

        QMetaObject::connectSlotsByName(FriendsLayout);
    } // setupUi

    void retranslateUi(QWidget *FriendsLayout)
    {
        FriendsLayout->setWindowTitle(QApplication::translate("FriendsLayout", "Form", Q_NULLPTR));
        label_email->setText(QApplication::translate("FriendsLayout", "myemail.com@model.com", Q_NULLPTR));
        Button_delete->setText(QString());
        label_name->setText(QApplication::translate("FriendsLayout", "Name", Q_NULLPTR));
        label_number->setText(QApplication::translate("FriendsLayout", "061-9999-9999", Q_NULLPTR));
        Friend_img->setText(QString());
        label_rating->setText(QApplication::translate("FriendsLayout", "4.5", Q_NULLPTR));
        label->setText(QApplication::translate("FriendsLayout", "<html><head/><body><p>/<span style=\" font-size:8pt;\">5.0</span></p></body></html>", Q_NULLPTR));
        see_more->setText(QString());
        Button_show_friends->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FriendsLayout: public Ui_FriendsLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDSLAYOUT_H
