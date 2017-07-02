/********************************************************************************
** Form generated from reading UI file 'searchads.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHADS_H
#define UI_SEARCHADS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchAds
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *Box_Ads;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QLCDNumber *lcd_rating;
    QLineEdit *line_price;
    QLabel *label_price;
    QLabel *label_quantity;
    QLabel *label_category;
    QLineEdit *line_category;
    QLabel *label_seller;
    QLineEdit *line_seller;
    QLabel *label;
    QSpinBox *spin_quantity;
    QSpacerItem *horizontalSpacer;
    QTextEdit *text_description;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Button_buy;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *SearchAds)
    {
        if (SearchAds->objectName().isEmpty())
            SearchAds->setObjectName(QStringLiteral("SearchAds"));
        SearchAds->resize(661, 213);
        horizontalLayout = new QHBoxLayout(SearchAds);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Box_Ads = new QGroupBox(SearchAds);
        Box_Ads->setObjectName(QStringLiteral("Box_Ads"));
        Box_Ads->setMinimumSize(QSize(0, 165));
        Box_Ads->setMaximumSize(QSize(16777215, 165));
        horizontalLayout_2 = new QHBoxLayout(Box_Ads);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(Box_Ads);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lcd_rating = new QLCDNumber(frame_2);
        lcd_rating->setObjectName(QStringLiteral("lcd_rating"));
        lcd_rating->setMinimumSize(QSize(50, 0));
        lcd_rating->setMaximumSize(QSize(50, 16777215));
        lcd_rating->setFrameShape(QFrame::NoFrame);
        lcd_rating->setSegmentStyle(QLCDNumber::Flat);
        lcd_rating->setProperty("value", QVariant(4));
        lcd_rating->setProperty("intValue", QVariant(4));

        gridLayout->addWidget(lcd_rating, 1, 1, 1, 1);

        line_price = new QLineEdit(frame_2);
        line_price->setObjectName(QStringLiteral("line_price"));
        line_price->setEnabled(false);
        line_price->setMaximumSize(QSize(150, 22));

        gridLayout->addWidget(line_price, 3, 1, 1, 1);

        label_price = new QLabel(frame_2);
        label_price->setObjectName(QStringLiteral("label_price"));

        gridLayout->addWidget(label_price, 3, 0, 1, 1);

        label_quantity = new QLabel(frame_2);
        label_quantity->setObjectName(QStringLiteral("label_quantity"));

        gridLayout->addWidget(label_quantity, 6, 0, 1, 1);

        label_category = new QLabel(frame_2);
        label_category->setObjectName(QStringLiteral("label_category"));

        gridLayout->addWidget(label_category, 2, 0, 1, 1);

        line_category = new QLineEdit(frame_2);
        line_category->setObjectName(QStringLiteral("line_category"));
        line_category->setEnabled(false);
        line_category->setMaximumSize(QSize(250, 22));

        gridLayout->addWidget(line_category, 2, 1, 1, 1);

        label_seller = new QLabel(frame_2);
        label_seller->setObjectName(QStringLiteral("label_seller"));

        gridLayout->addWidget(label_seller, 0, 0, 1, 1);

        line_seller = new QLineEdit(frame_2);
        line_seller->setObjectName(QStringLiteral("line_seller"));
        line_seller->setEnabled(false);
        line_seller->setMaximumSize(QSize(225, 16777215));

        gridLayout->addWidget(line_seller, 0, 1, 1, 1);

        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spin_quantity = new QSpinBox(frame_2);
        spin_quantity->setObjectName(QStringLiteral("spin_quantity"));
        spin_quantity->setMinimum(1);

        gridLayout->addWidget(spin_quantity, 6, 1, 1, 1);


        horizontalLayout_2->addWidget(frame_2);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        text_description = new QTextEdit(Box_Ads);
        text_description->setObjectName(QStringLiteral("text_description"));
        text_description->setEnabled(false);
        text_description->setMinimumSize(QSize(0, 110));
        text_description->setMaximumSize(QSize(16777215, 130));

        horizontalLayout_2->addWidget(text_description);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        Button_buy = new QPushButton(Box_Ads);
        Button_buy->setObjectName(QStringLiteral("Button_buy"));
        QIcon icon;
        QString iconThemeName = QStringLiteral("buy");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        Button_buy->setIcon(icon);

        horizontalLayout_2->addWidget(Button_buy);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        horizontalLayout->addWidget(Box_Ads);


        retranslateUi(SearchAds);

        QMetaObject::connectSlotsByName(SearchAds);
    } // setupUi

    void retranslateUi(QWidget *SearchAds)
    {
        SearchAds->setWindowTitle(QApplication::translate("SearchAds", "Form", Q_NULLPTR));
        Box_Ads->setTitle(QApplication::translate("SearchAds", "Title of Ads", Q_NULLPTR));
        label_price->setText(QApplication::translate("SearchAds", "Price", Q_NULLPTR));
        label_quantity->setText(QApplication::translate("SearchAds", "Quantity", Q_NULLPTR));
        label_category->setText(QApplication::translate("SearchAds", "Category", Q_NULLPTR));
        label_seller->setText(QApplication::translate("SearchAds", "Seller", Q_NULLPTR));
        label->setText(QApplication::translate("SearchAds", "Rating", Q_NULLPTR));
        text_description->setHtml(QApplication::translate("SearchAds", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a</p>\n"
"<p style=\" margin-top:0px; margi"
                        "n-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a</p>\n"
"<p style=\""
                        " margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">a</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        Button_buy->setText(QApplication::translate("SearchAds", "Buy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SearchAds: public Ui_SearchAds {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHADS_H
