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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
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
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGroupBox *MyAccount;
    QLabel *label_rating;
    QLabel *label_balance;
    QLabel *label_email;
    QLabel *label_cpf;
    QLabel *CPF;
    QLabel *Email;
    QLabel *Balance;
    QLabel *Rating;
    QLabel *label;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *Name;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *Ipiranga;

    void setupUi(QWidget *InitialPage)
    {
        if (InitialPage->objectName().isEmpty())
            InitialPage->setObjectName(QStringLiteral("InitialPage"));
        InitialPage->resize(657, 514);
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 653, 510));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        MyAccount = new QGroupBox(frame);
        MyAccount->setObjectName(QStringLiteral("MyAccount"));
        MyAccount->setMinimumSize(QSize(500, 140));
        MyAccount->setMaximumSize(QSize(700, 140));
        label_rating = new QLabel(MyAccount);
        label_rating->setObjectName(QStringLiteral("label_rating"));
        label_rating->setGeometry(QRect(290, 70, 68, 20));
        label_balance = new QLabel(MyAccount);
        label_balance->setObjectName(QStringLiteral("label_balance"));
        label_balance->setGeometry(QRect(290, 110, 101, 20));
        label_email = new QLabel(MyAccount);
        label_email->setObjectName(QStringLiteral("label_email"));
        label_email->setGeometry(QRect(20, 110, 68, 20));
        label_cpf = new QLabel(MyAccount);
        label_cpf->setObjectName(QStringLiteral("label_cpf"));
        label_cpf->setGeometry(QRect(20, 70, 68, 20));
        CPF = new QLabel(MyAccount);
        CPF->setObjectName(QStringLiteral("CPF"));
        CPF->setGeometry(QRect(60, 70, 111, 20));
        Email = new QLabel(MyAccount);
        Email->setObjectName(QStringLiteral("Email"));
        Email->setGeometry(QRect(70, 110, 231, 20));
        Balance = new QLabel(MyAccount);
        Balance->setObjectName(QStringLiteral("Balance"));
        Balance->setGeometry(QRect(390, 110, 111, 20));
        Rating = new QLabel(MyAccount);
        Rating->setObjectName(QStringLiteral("Rating"));
        Rating->setGeometry(QRect(430, 70, 31, 20));
        label = new QLabel(MyAccount);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(453, 70, 31, 20));
        frame_2 = new QFrame(MyAccount);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 20, 500, 45));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setMinimumSize(QSize(500, 30));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(139, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        Name = new QLabel(frame_2);
        Name->setObjectName(QStringLiteral("Name"));
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        Name->setFont(font);

        horizontalLayout_2->addWidget(Name);

        horizontalSpacer_4 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        horizontalLayout->addWidget(MyAccount);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(frame);

        Ipiranga = new QLabel(scrollAreaWidgetContents);
        Ipiranga->setObjectName(QStringLiteral("Ipiranga"));
        sizePolicy.setHeightForWidth(Ipiranga->sizePolicy().hasHeightForWidth());
        Ipiranga->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(Ipiranga);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(InitialPage);

        QMetaObject::connectSlotsByName(InitialPage);
    } // setupUi

    void retranslateUi(QWidget *InitialPage)
    {
        InitialPage->setWindowTitle(QApplication::translate("InitialPage", "Form", 0));
        MyAccount->setTitle(QApplication::translate("InitialPage", "My Account", 0));
        label_rating->setText(QApplication::translate("InitialPage", "<html><head/><body><p><span style=\" color:#3390e7;\">Rating:</span></p></body></html>", 0));
        label_balance->setText(QApplication::translate("InitialPage", "<html><head/><body><p><span style=\" color:#3390e7;\">Balance (R$):</span></p></body></html>", 0));
        label_email->setText(QApplication::translate("InitialPage", "<html><head/><body><p><span style=\" color:#3390e7;\">E-mail:</span></p></body></html>", 0));
        label_cpf->setText(QApplication::translate("InitialPage", "<html><head/><body><p><span style=\" color:#3390e7;\">CPF:</span></p></body></html>", 0));
        CPF->setText(QApplication::translate("InitialPage", "<html><head/><body><p><span style=\" font-style:italic;\">12345678911</span></p></body></html>", 0));
        Email->setText(QApplication::translate("InitialPage", "<html><head/><body><p><span style=\" font-style:italic;\">joseluizgnogueira@@@@@.com</span></p></body></html>", 0));
        Balance->setText(QApplication::translate("InitialPage", "<html><head/><body><p>123456789.00</p></body></html>", 0));
        Rating->setText(QApplication::translate("InitialPage", "4.5", 0));
        label->setText(QApplication::translate("InitialPage", "<html><head/><body><p>/<span style=\" font-size:8pt;\">5.0</span></p></body></html>", 0));
        Name->setText(QApplication::translate("InitialPage", "Jos\303\251 Luiz Gomes Nogueira", 0));
        Ipiranga->setText(QApplication::translate("InitialPage", "<html><head/><body><p align=\"center\"><span style=\" font-size:72pt; font-weight:600; font-style:italic; color:#3465a4;\">I</span><span style=\" font-size:72pt; font-weight:600; font-style:italic; color:#3f66ca;\">piranga!</span></p><p align=\"center\"><span style=\" font-weight:600; color:#729fcf;\">Welcome</span><span style=\" font-weight:600;\"> to a new world,</span></p><p align=\"center\"><span style=\" font-weight:600;\">where you can find all, that exist in the universe!</span></p><p align=\"center\"><br/></p><p align=\"center\"><br/></p><p align=\"center\"><br/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class InitialPage: public Ui_InitialPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIALPAGE_H
