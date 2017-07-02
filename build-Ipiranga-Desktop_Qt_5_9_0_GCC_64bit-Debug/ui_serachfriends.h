/********************************************************************************
** Form generated from reading UI file 'serachfriends.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERACHFRIENDS_H
#define UI_SERACHFRIENDS_H

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

class Ui_SerachFriends
{
public:
    QGridLayout *gridLayout;
    QLabel *label_state;
    QSpacerItem *horizontalSpacer;
    QLabel *label_name;
    QFrame *rating;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_rating;
    QLabel *label_2;
    QLabel *label_city;
    QPushButton *Button_add;
    QLabel *Friend_img;

    void setupUi(QWidget *SerachFriends)
    {
        if (SerachFriends->objectName().isEmpty())
            SerachFriends->setObjectName(QStringLiteral("SerachFriends"));
        SerachFriends->resize(290, 100);
        SerachFriends->setMinimumSize(QSize(290, 100));
        SerachFriends->setMaximumSize(QSize(290, 100));
        gridLayout = new QGridLayout(SerachFriends);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_state = new QLabel(SerachFriends);
        label_state->setObjectName(QStringLiteral("label_state"));

        gridLayout->addWidget(label_state, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        label_name = new QLabel(SerachFriends);
        label_name->setObjectName(QStringLiteral("label_name"));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_name->setFont(font);

        gridLayout->addWidget(label_name, 0, 2, 1, 1);

        rating = new QFrame(SerachFriends);
        rating->setObjectName(QStringLiteral("rating"));
        horizontalLayout_2 = new QHBoxLayout(rating);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_rating = new QLabel(rating);
        label_rating->setObjectName(QStringLiteral("label_rating"));

        horizontalLayout_2->addWidget(label_rating);

        label_2 = new QLabel(rating);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);


        gridLayout->addWidget(rating, 2, 0, 1, 1);

        label_city = new QLabel(SerachFriends);
        label_city->setObjectName(QStringLiteral("label_city"));

        gridLayout->addWidget(label_city, 2, 2, 1, 1);

        Button_add = new QPushButton(SerachFriends);
        Button_add->setObjectName(QStringLiteral("Button_add"));
        Button_add->setMaximumSize(QSize(30, 30));
        QIcon icon;
        QString iconThemeName = QStringLiteral("add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        Button_add->setIcon(icon);
        Button_add->setFlat(true);

        gridLayout->addWidget(Button_add, 0, 3, 1, 1);

        Friend_img = new QLabel(SerachFriends);
        Friend_img->setObjectName(QStringLiteral("Friend_img"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Friend_img->sizePolicy().hasHeightForWidth());
        Friend_img->setSizePolicy(sizePolicy);
        Friend_img->setMinimumSize(QSize(50, 50));
        Friend_img->setMaximumSize(QSize(50, 50));
        Friend_img->setPixmap(QPixmap(QString::fromUtf8(":/img_login/images/User_img.png")));
        Friend_img->setScaledContents(true);

        gridLayout->addWidget(Friend_img, 0, 0, 2, 1);


        retranslateUi(SerachFriends);

        QMetaObject::connectSlotsByName(SerachFriends);
    } // setupUi

    void retranslateUi(QWidget *SerachFriends)
    {
        SerachFriends->setWindowTitle(QApplication::translate("SerachFriends", "Form", Q_NULLPTR));
        label_state->setText(QApplication::translate("SerachFriends", "Estado", Q_NULLPTR));
        label_name->setText(QApplication::translate("SerachFriends", "Name", Q_NULLPTR));
        label_rating->setText(QApplication::translate("SerachFriends", "4.5", Q_NULLPTR));
        label_2->setText(QApplication::translate("SerachFriends", "<html><head/><body><p>/<span style=\" font-size:8pt;\">5.0</span></p></body></html>", Q_NULLPTR));
        label_city->setText(QApplication::translate("SerachFriends", "Cidade", Q_NULLPTR));
        Button_add->setText(QString());
        Friend_img->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SerachFriends: public Ui_SerachFriends {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERACHFRIENDS_H
