/********************************************************************************
** Form generated from reading UI file 'userapp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERAPP_H
#define UI_USERAPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
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
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *Box_Menu;
    QFrame *Menu;
    QLabel *User_img;
    QLabel *UserName;
    QFrame *Anuncio_Menu;
    QStackedWidget *Pages;
    QWidget *page_1;
    QWidget *page_3;
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
        Frame_Search->setStyleSheet(QStringLiteral("background:red"));
        Frame_Search->setFrameShape(QFrame::StyledPanel);
        Frame_Search->setFrameShadow(QFrame::Raised);

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
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Menu->sizePolicy().hasHeightForWidth());
        Menu->setSizePolicy(sizePolicy1);
        Menu->setMinimumSize(QSize(150, 500));
        Menu->setStyleSheet(QStringLiteral("background:blue"));
        Menu->setFrameShape(QFrame::StyledPanel);
        Menu->setFrameShadow(QFrame::Raised);
        User_img = new QLabel(Menu);
        User_img->setObjectName(QStringLiteral("User_img"));
        User_img->setGeometry(QRect(10, 10, 50, 50));
        User_img->setPixmap(QPixmap(QString::fromUtf8(":/img_login/images/User_img.png")));
        User_img->setScaledContents(true);
        User_img->setTextInteractionFlags(Qt::NoTextInteraction);
        UserName = new QLabel(Menu);
        UserName->setObjectName(QStringLiteral("UserName"));
        UserName->setGeometry(QRect(70, 19, 81, 31));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        UserName->setFont(font);
        UserName->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);

        Box_Menu->addWidget(Menu);

        Anuncio_Menu = new QFrame(centralwidget);
        Anuncio_Menu->setObjectName(QStringLiteral("Anuncio_Menu"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Anuncio_Menu->sizePolicy().hasHeightForWidth());
        Anuncio_Menu->setSizePolicy(sizePolicy2);
        Anuncio_Menu->setMinimumSize(QSize(150, 0));
        Anuncio_Menu->setFrameShape(QFrame::StyledPanel);
        Anuncio_Menu->setFrameShadow(QFrame::Raised);

        Box_Menu->addWidget(Anuncio_Menu);


        horizontalLayout->addLayout(Box_Menu);

        Pages = new QStackedWidget(centralwidget);
        Pages->setObjectName(QStringLiteral("Pages"));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        page_1->setStyleSheet(QStringLiteral("background:black"));
        Pages->addWidget(page_1);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setStyleSheet(QLatin1String("background:green\n"
""));
        Pages->addWidget(page_3);

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

        QMetaObject::connectSlotsByName(UserApp);
    } // setupUi

    void retranslateUi(QMainWindow *UserApp)
    {
        UserApp->setWindowTitle(QApplication::translate("UserApp", "Ipiranga", Q_NULLPTR));
        User_img->setText(QString());
        UserName->setText(QApplication::translate("UserApp", "User Name", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UserApp: public Ui_UserApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERAPP_H
