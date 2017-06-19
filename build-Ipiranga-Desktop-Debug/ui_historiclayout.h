/********************************************************************************
** Form generated from reading UI file 'historiclayout.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORICLAYOUT_H
#define UI_HISTORICLAYOUT_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoricLayout
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *Box_historic;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLineEdit *line_seller;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *line_buyer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_4;
    QGridLayout *gridLayout_2;
    QLineEdit *line_date;
    QLineEdit *line_price;
    QLabel *label_quantity_2;
    QLabel *label_category_2;
    QLineEdit *line_category;
    QLabel *label_price_2;
    QLineEdit *line_quantity;
    QLabel *label_date;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QRadioButton *radio_2;
    QRadioButton *radio_1;
    QRadioButton *radio_3;
    QRadioButton *radio_4;
    QLabel *label_4;
    QRadioButton *radio_5;
    QLabel *label_3;

    void setupUi(QWidget *HistoricLayout)
    {
        if (HistoricLayout->objectName().isEmpty())
            HistoricLayout->setObjectName(QStringLiteral("HistoricLayout"));
        HistoricLayout->resize(731, 150);
        HistoricLayout->setMaximumSize(QSize(16777215, 150));
        verticalLayout = new QVBoxLayout(HistoricLayout);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Box_historic = new QGroupBox(HistoricLayout);
        Box_historic->setObjectName(QStringLiteral("Box_historic"));
        horizontalLayout = new QHBoxLayout(Box_historic);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        frame = new QFrame(Box_historic);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMaximumSize(QSize(250, 16777215));
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        line_seller = new QLineEdit(frame);
        line_seller->setObjectName(QStringLiteral("line_seller"));
        line_seller->setEnabled(false);
        line_seller->setMaximumSize(QSize(200, 22));

        gridLayout->addWidget(line_seller, 2, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        line_buyer = new QLineEdit(frame);
        line_buyer->setObjectName(QStringLiteral("line_buyer"));
        line_buyer->setEnabled(false);
        line_buyer->setMaximumSize(QSize(200, 22));

        gridLayout->addWidget(line_buyer, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 0, 1, 1);


        horizontalLayout->addWidget(frame);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        frame_4 = new QFrame(Box_historic);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        gridLayout_2 = new QGridLayout(frame_4);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        line_date = new QLineEdit(frame_4);
        line_date->setObjectName(QStringLiteral("line_date"));
        line_date->setEnabled(false);
        line_date->setMaximumSize(QSize(225, 22));

        gridLayout_2->addWidget(line_date, 6, 1, 1, 1);

        line_price = new QLineEdit(frame_4);
        line_price->setObjectName(QStringLiteral("line_price"));
        line_price->setEnabled(false);
        line_price->setMaximumSize(QSize(150, 22));

        gridLayout_2->addWidget(line_price, 1, 1, 1, 1);

        label_quantity_2 = new QLabel(frame_4);
        label_quantity_2->setObjectName(QStringLiteral("label_quantity_2"));

        gridLayout_2->addWidget(label_quantity_2, 4, 0, 1, 1);

        label_category_2 = new QLabel(frame_4);
        label_category_2->setObjectName(QStringLiteral("label_category_2"));

        gridLayout_2->addWidget(label_category_2, 0, 0, 1, 1);

        line_category = new QLineEdit(frame_4);
        line_category->setObjectName(QStringLiteral("line_category"));
        line_category->setEnabled(false);
        line_category->setMaximumSize(QSize(250, 22));

        gridLayout_2->addWidget(line_category, 0, 1, 1, 1);

        label_price_2 = new QLabel(frame_4);
        label_price_2->setObjectName(QStringLiteral("label_price_2"));

        gridLayout_2->addWidget(label_price_2, 1, 0, 1, 1);

        line_quantity = new QLineEdit(frame_4);
        line_quantity->setObjectName(QStringLiteral("line_quantity"));
        line_quantity->setEnabled(false);
        line_quantity->setMaximumSize(QSize(100, 22));

        gridLayout_2->addWidget(line_quantity, 4, 1, 1, 1);

        label_date = new QLabel(frame_4);
        label_date->setObjectName(QStringLiteral("label_date"));

        gridLayout_2->addWidget(label_date, 6, 0, 1, 1);


        horizontalLayout->addWidget(frame_4);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        frame_2 = new QFrame(Box_historic);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMaximumSize(QSize(160, 90));
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        radio_2 = new QRadioButton(frame_2);
        radio_2->setObjectName(QStringLiteral("radio_2"));

        gridLayout_3->addWidget(radio_2, 2, 1, 1, 1);

        radio_1 = new QRadioButton(frame_2);
        radio_1->setObjectName(QStringLiteral("radio_1"));

        gridLayout_3->addWidget(radio_1, 2, 0, 1, 1);

        radio_3 = new QRadioButton(frame_2);
        radio_3->setObjectName(QStringLiteral("radio_3"));

        gridLayout_3->addWidget(radio_3, 2, 2, 1, 1);

        radio_4 = new QRadioButton(frame_2);
        radio_4->setObjectName(QStringLiteral("radio_4"));

        gridLayout_3->addWidget(radio_4, 2, 3, 1, 1);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(150, 0));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img_login/images/stars.png")));
        label_4->setScaledContents(true);

        gridLayout_3->addWidget(label_4, 1, 0, 1, 5);

        radio_5 = new QRadioButton(frame_2);
        radio_5->setObjectName(QStringLiteral("radio_5"));

        gridLayout_3->addWidget(radio_5, 2, 4, 1, 1);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 0, 1, 1, 3);


        horizontalLayout->addWidget(frame_2);


        verticalLayout->addWidget(Box_historic);


        retranslateUi(HistoricLayout);

        QMetaObject::connectSlotsByName(HistoricLayout);
    } // setupUi

    void retranslateUi(QWidget *HistoricLayout)
    {
        HistoricLayout->setWindowTitle(QApplication::translate("HistoricLayout", "Form", 0));
        Box_historic->setTitle(QApplication::translate("HistoricLayout", "Title", 0));
        label_2->setText(QApplication::translate("HistoricLayout", "Seller:", 0));
        label->setText(QApplication::translate("HistoricLayout", "Buyer:", 0));
        label_quantity_2->setText(QApplication::translate("HistoricLayout", "Quantity", 0));
        label_category_2->setText(QApplication::translate("HistoricLayout", "Category", 0));
        label_price_2->setText(QApplication::translate("HistoricLayout", "Price", 0));
        label_date->setText(QApplication::translate("HistoricLayout", "Date", 0));
        radio_2->setText(QApplication::translate("HistoricLayout", "2", 0));
        radio_1->setText(QApplication::translate("HistoricLayout", "1", 0));
        radio_3->setText(QApplication::translate("HistoricLayout", "3", 0));
        radio_4->setText(QApplication::translate("HistoricLayout", "4", 0));
        label_4->setText(QString());
        radio_5->setText(QApplication::translate("HistoricLayout", "5", 0));
        label_3->setText(QApplication::translate("HistoricLayout", "Give a Rating", 0));
    } // retranslateUi

};

namespace Ui {
    class HistoricLayout: public Ui_HistoricLayout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORICLAYOUT_H
