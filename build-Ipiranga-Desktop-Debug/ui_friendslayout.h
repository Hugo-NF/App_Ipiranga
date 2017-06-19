/********************************************************************************
** Form generated from reading UI file 'friendslayout.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriendsLayout
{
public:
    QGridLayout *gridLayout;
    QFrame *rating;
    QHBoxLayout *horizontalLayout;
    QLabel *label_rating;
    QLabel *label;
    QLabel *Friend_img;
    QLabel *label_email;
    QLabel *label_name;
    QLabel *label_number;
    QSpacerItem *horizontalSpacer;
    QPushButton *Button_delete;

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
        gridLayout = new QGridLayout(FriendsLayout);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        rating = new QFrame(FriendsLayout);
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

        Friend_img = new QLabel(FriendsLayout);
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

        label_email = new QLabel(FriendsLayout);
        label_email->setObjectName(QStringLiteral("label_email"));

        gridLayout->addWidget(label_email, 1, 2, 1, 1);

        label_name = new QLabel(FriendsLayout);
        label_name->setObjectName(QStringLiteral("label_name"));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_name->setFont(font);

        gridLayout->addWidget(label_name, 0, 2, 1, 1);

        label_number = new QLabel(FriendsLayout);
        label_number->setObjectName(QStringLiteral("label_number"));

        gridLayout->addWidget(label_number, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        Button_delete = new QPushButton(FriendsLayout);
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

        gridLayout->addWidget(Button_delete, 0, 3, 1, 1);


        retranslateUi(FriendsLayout);

        QMetaObject::connectSlotsByName(FriendsLayout);
    } // setupUi

    void retranslateUi(QWidget *FriendsLayout)
    {
        FriendsLayout->setWindowTitle(QApplication::translate("FriendsLayout", "Form", 0));
        label_rating->setText(QApplication::translate("FriendsLayout", "4.5", 0));
        label->setText(QApplication::translate("FriendsLayout", "<html><head/><body><p>/<span style=\" font-size:8pt;\">5.0</span></p></body></html>", 0));
        Friend_img->setText(QString());
        label_email->setText(QApplication::translate("FriendsLayout", "myemail.com@model.com", 0));
        label_name->setText(QApplication::translate("FriendsLayout", "Name", 0));
        label_number->setText(QApplication::translate("FriendsLayout", "061-9999-9999", 0));
        Button_delete->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FriendsLayout: public Ui_FriendsLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDSLAYOUT_H
