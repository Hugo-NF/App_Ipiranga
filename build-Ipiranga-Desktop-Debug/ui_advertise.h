/********************************************************************************
** Form generated from reading UI file 'advertise.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVERTISE_H
#define UI_ADVERTISE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Advertise
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QFrame *left;
    QVBoxLayout *Center;
    QHBoxLayout *Banalce_advertise;
    QFrame *left_2;
    QVBoxLayout *Banalce_advertise_2;
    QGroupBox *Balance;
    QLineEdit *line_balance;
    QLineEdit *line_transfer;
    QPushButton *pushButton_transfer;
    QLabel *label_balance;
    QLabel *label_value;
    QGroupBox *Create_Advertise;
    QPushButton *pushButton_create;
    QTextEdit *text_description;
    QLabel *label_quantity;
    QLabel *label_title;
    QLabel *labe_text_character;
    QLabel *label_price;
    QLabel *label_n_character;
    QPushButton *pushButton_reset;
    QLabel *label_category;
    QLabel *label_description;
    QLineEdit *line_price;
    QLineEdit *line_title;
    QSpinBox *spinBox_quantity;
    QComboBox *comboBox_category;
    QFrame *right_2;
    QFrame *Active_ads;
    QVBoxLayout *verticalLayout_3;
    QLabel *TitleAds;
    QFrame *line;
    QVBoxLayout *Ads;
    QFrame *right;

    void setupUi(QWidget *Advertise)
    {
        if (Advertise->objectName().isEmpty())
            Advertise->setObjectName(QStringLiteral("Advertise"));
        Advertise->resize(566, 887);
        verticalLayout = new QVBoxLayout(Advertise);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(Advertise);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 562, 883));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QFrame(scrollAreaWidgetContents);
        left->setObjectName(QStringLiteral("left"));

        horizontalLayout->addWidget(left);

        Center = new QVBoxLayout();
        Center->setSpacing(12);
        Center->setObjectName(QStringLiteral("Center"));
        Banalce_advertise = new QHBoxLayout();
        Banalce_advertise->setObjectName(QStringLiteral("Banalce_advertise"));
        left_2 = new QFrame(scrollAreaWidgetContents);
        left_2->setObjectName(QStringLiteral("left_2"));

        Banalce_advertise->addWidget(left_2);

        Banalce_advertise_2 = new QVBoxLayout();
        Banalce_advertise_2->setObjectName(QStringLiteral("Banalce_advertise_2"));
        Balance = new QGroupBox(scrollAreaWidgetContents);
        Balance->setObjectName(QStringLiteral("Balance"));
        Balance->setMinimumSize(QSize(0, 100));
        Balance->setMaximumSize(QSize(485, 100));
        line_balance = new QLineEdit(Balance);
        line_balance->setObjectName(QStringLiteral("line_balance"));
        line_balance->setGeometry(QRect(40, 60, 111, 20));
        line_balance->setMaxLength(32767);
        line_balance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_transfer = new QLineEdit(Balance);
        line_transfer->setObjectName(QStringLiteral("line_transfer"));
        line_transfer->setGeometry(QRect(300, 30, 111, 20));
        line_transfer->setMaxLength(11);
        line_transfer->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_transfer = new QPushButton(Balance);
        pushButton_transfer->setObjectName(QStringLiteral("pushButton_transfer"));
        pushButton_transfer->setGeometry(QRect(340, 60, 71, 21));
        label_balance = new QLabel(Balance);
        label_balance->setObjectName(QStringLiteral("label_balance"));
        label_balance->setGeometry(QRect(40, 30, 111, 20));
        label_value = new QLabel(Balance);
        label_value->setObjectName(QStringLiteral("label_value"));
        label_value->setGeometry(QRect(220, 30, 91, 20));

        Banalce_advertise_2->addWidget(Balance);

        Create_Advertise = new QGroupBox(scrollAreaWidgetContents);
        Create_Advertise->setObjectName(QStringLiteral("Create_Advertise"));
        Create_Advertise->setMinimumSize(QSize(450, 400));
        Create_Advertise->setMaximumSize(QSize(450, 400));
        pushButton_create = new QPushButton(Create_Advertise);
        pushButton_create->setObjectName(QStringLiteral("pushButton_create"));
        pushButton_create->setGeometry(QRect(310, 330, 94, 21));
        text_description = new QTextEdit(Create_Advertise);
        text_description->setObjectName(QStringLiteral("text_description"));
        text_description->setGeometry(QRect(140, 170, 281, 121));
        QFont font;
        font.setStrikeOut(false);
        text_description->setFont(font);
        label_quantity = new QLabel(Create_Advertise);
        label_quantity->setObjectName(QStringLiteral("label_quantity"));
        label_quantity->setGeometry(QRect(50, 140, 81, 20));
        label_title = new QLabel(Create_Advertise);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(50, 80, 68, 20));
        labe_text_character = new QLabel(Create_Advertise);
        labe_text_character->setObjectName(QStringLiteral("labe_text_character"));
        labe_text_character->setGeometry(QRect(170, 287, 131, 20));
        QFont font1;
        font1.setPointSize(9);
        labe_text_character->setFont(font1);
        label_price = new QLabel(Create_Advertise);
        label_price->setObjectName(QStringLiteral("label_price"));
        label_price->setGeometry(QRect(50, 110, 68, 20));
        label_n_character = new QLabel(Create_Advertise);
        label_n_character->setObjectName(QStringLiteral("label_n_character"));
        label_n_character->setGeometry(QRect(140, 287, 31, 20));
        label_n_character->setFont(font1);
        label_n_character->setLayoutDirection(Qt::RightToLeft);
        pushButton_reset = new QPushButton(Create_Advertise);
        pushButton_reset->setObjectName(QStringLiteral("pushButton_reset"));
        pushButton_reset->setGeometry(QRect(150, 330, 94, 21));
        label_category = new QLabel(Create_Advertise);
        label_category->setObjectName(QStringLiteral("label_category"));
        label_category->setGeometry(QRect(50, 50, 91, 20));
        label_description = new QLabel(Create_Advertise);
        label_description->setObjectName(QStringLiteral("label_description"));
        label_description->setGeometry(QRect(50, 170, 91, 20));
        line_price = new QLineEdit(Create_Advertise);
        line_price->setObjectName(QStringLiteral("line_price"));
        line_price->setGeometry(QRect(140, 110, 111, 20));
        line_price->setMaxLength(11);
        line_price->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_title = new QLineEdit(Create_Advertise);
        line_title->setObjectName(QStringLiteral("line_title"));
        line_title->setGeometry(QRect(140, 80, 281, 20));
        spinBox_quantity = new QSpinBox(Create_Advertise);
        spinBox_quantity->setObjectName(QStringLiteral("spinBox_quantity"));
        spinBox_quantity->setGeometry(QRect(140, 140, 60, 22));
        spinBox_quantity->setMinimum(1);
        spinBox_quantity->setMaximum(999);
        comboBox_category = new QComboBox(Create_Advertise);
        comboBox_category->setObjectName(QStringLiteral("comboBox_category"));
        comboBox_category->setGeometry(QRect(140, 50, 190, 22));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_category->sizePolicy().hasHeightForWidth());
        comboBox_category->setSizePolicy(sizePolicy);
        comboBox_category->setMaximumSize(QSize(225, 22));

        Banalce_advertise_2->addWidget(Create_Advertise);


        Banalce_advertise->addLayout(Banalce_advertise_2);

        right_2 = new QFrame(scrollAreaWidgetContents);
        right_2->setObjectName(QStringLiteral("right_2"));

        Banalce_advertise->addWidget(right_2);


        Center->addLayout(Banalce_advertise);

        Active_ads = new QFrame(scrollAreaWidgetContents);
        Active_ads->setObjectName(QStringLiteral("Active_ads"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Active_ads->sizePolicy().hasHeightForWidth());
        Active_ads->setSizePolicy(sizePolicy1);
        Active_ads->setMaximumSize(QSize(800, 16777215));
        Active_ads->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(Active_ads);
        verticalLayout_3->setSpacing(15);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 30, 0, 0);
        TitleAds = new QLabel(Active_ads);
        TitleAds->setObjectName(QStringLiteral("TitleAds"));
        TitleAds->setMaximumSize(QSize(16777215, 30));
        TitleAds->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        verticalLayout_3->addWidget(TitleAds);

        line = new QFrame(Active_ads);
        line->setObjectName(QStringLiteral("line"));
        line->setMaximumSize(QSize(16777215, 2));
        line->setStyleSheet(QStringLiteral("background:rgb(51, 144, 231)"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        Ads = new QVBoxLayout();
        Ads->setSpacing(20);
        Ads->setObjectName(QStringLiteral("Ads"));
        Ads->setContentsMargins(-1, 15, -1, -1);

        verticalLayout_3->addLayout(Ads);


        Center->addWidget(Active_ads);


        horizontalLayout->addLayout(Center);

        right = new QFrame(scrollAreaWidgetContents);
        right->setObjectName(QStringLiteral("right"));

        horizontalLayout->addWidget(right);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(Advertise);

        QMetaObject::connectSlotsByName(Advertise);
    } // setupUi

    void retranslateUi(QWidget *Advertise)
    {
        Advertise->setWindowTitle(QApplication::translate("Advertise", "Form", 0));
        Balance->setTitle(QApplication::translate("Advertise", "Balance", 0));
        line_transfer->setInputMask(QApplication::translate("Advertise", "99999999.\\0\\0", 0));
        line_transfer->setText(QApplication::translate("Advertise", ".00", 0));
        pushButton_transfer->setText(QApplication::translate("Advertise", "Transfer", 0));
        label_balance->setText(QApplication::translate("Advertise", "Balance (R$):", 0));
        label_value->setText(QApplication::translate("Advertise", "Value (R$):", 0));
        Create_Advertise->setTitle(QApplication::translate("Advertise", "Create a Advertise", 0));
        pushButton_create->setText(QApplication::translate("Advertise", "Create", 0));
        text_description->setHtml(QApplication::translate("Advertise", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        label_quantity->setText(QApplication::translate("Advertise", "Quantity", 0));
        label_title->setText(QApplication::translate("Advertise", "Title", 0));
        labe_text_character->setText(QApplication::translate("Advertise", "Characters remaining", 0));
        label_price->setText(QApplication::translate("Advertise", "<html><head/><body><p>Price <span style=\" font-size:10pt; font-weight:600; font-style:italic;\">(R$)</span></p></body></html>", 0));
        label_n_character->setText(QApplication::translate("Advertise", "500", 0));
        pushButton_reset->setText(QApplication::translate("Advertise", "Reset", 0));
        label_category->setText(QApplication::translate("Advertise", "Category", 0));
        label_description->setText(QApplication::translate("Advertise", "Description", 0));
        line_price->setInputMask(QApplication::translate("Advertise", "99999999.\\0\\0", 0));
        line_price->setText(QApplication::translate("Advertise", ".00", 0));
        comboBox_category->clear();
        comboBox_category->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("Advertise", "Animals", 0)
         << QApplication::translate("Advertise", "Automobiles", 0)
         << QApplication::translate("Advertise", "Books", 0)
         << QApplication::translate("Advertise", "Clothes", 0)
         << QApplication::translate("Advertise", "Computing", 0)
         << QApplication::translate("Advertise", "Construction", 0)
         << QApplication::translate("Advertise", "Drinks", 0)
         << QApplication::translate("Advertise", "Electronics", 0)
         << QApplication::translate("Advertise", "Food", 0)
         << QApplication::translate("Advertise", "Furniture", 0)
         << QApplication::translate("Advertise", "Games", 0)
         << QApplication::translate("Advertise", "Home Appliances", 0)
         << QApplication::translate("Advertise", "Kitchen", 0)
         << QApplication::translate("Advertise", "Leisure", 0)
         << QApplication::translate("Advertise", "Leisure Services", 0)
         << QApplication::translate("Advertise", "Medicines", 0)
         << QApplication::translate("Advertise", "Music", 0)
         << QApplication::translate("Advertise", "Office", 0)
         << QApplication::translate("Advertise", "Properties", 0)
         << QApplication::translate("Advertise", "Shoes", 0)
         << QApplication::translate("Advertise", "Sport", 0)
         << QApplication::translate("Advertise", "Ticket", 0)
         << QApplication::translate("Advertise", "Travel", 0)
        );
        TitleAds->setText(QApplication::translate("Advertise", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#087add;\">Active Ads</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Advertise: public Ui_Advertise {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVERTISE_H
