/********************************************************************************
** Form generated from reading UI file 'ads.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADS_H
#define UI_ADS_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ads
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *Box_Ads;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QLineEdit *line_price;
    QLineEdit *line_date;
    QLineEdit *line_quantity;
    QLabel *label_price;
    QLabel *label_date;
    QLabel *label_quantity;
    QLabel *label_category;
    QLineEdit *line_category;
    QSpacerItem *horizontalSpacer;
    QTextEdit *text_description;
    QFrame *frame;
    QPushButton *Button_delete;

    void setupUi(QWidget *Ads)
    {
        if (Ads->objectName().isEmpty())
            Ads->setObjectName(QStringLiteral("Ads"));
        Ads->resize(500, 150);
        Ads->setMinimumSize(QSize(100, 150));
        Ads->setMaximumSize(QSize(16777215, 150));
        Ads->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(Ads);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Box_Ads = new QGroupBox(Ads);
        Box_Ads->setObjectName(QStringLiteral("Box_Ads"));
        Box_Ads->setMinimumSize(QSize(0, 150));
        Box_Ads->setMaximumSize(QSize(16777215, 150));
        horizontalLayout_2 = new QHBoxLayout(Box_Ads);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(Box_Ads);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        line_price = new QLineEdit(frame_2);
        line_price->setObjectName(QStringLiteral("line_price"));
        line_price->setEnabled(false);
        line_price->setMaximumSize(QSize(150, 22));

        gridLayout->addWidget(line_price, 1, 1, 1, 1);

        line_date = new QLineEdit(frame_2);
        line_date->setObjectName(QStringLiteral("line_date"));
        line_date->setEnabled(false);
        line_date->setMaximumSize(QSize(225, 16777215));

        gridLayout->addWidget(line_date, 5, 1, 1, 1);

        line_quantity = new QLineEdit(frame_2);
        line_quantity->setObjectName(QStringLiteral("line_quantity"));
        line_quantity->setEnabled(false);
        line_quantity->setMaximumSize(QSize(100, 22));

        gridLayout->addWidget(line_quantity, 4, 1, 1, 1);

        label_price = new QLabel(frame_2);
        label_price->setObjectName(QStringLiteral("label_price"));

        gridLayout->addWidget(label_price, 1, 0, 1, 1);

        label_date = new QLabel(frame_2);
        label_date->setObjectName(QStringLiteral("label_date"));

        gridLayout->addWidget(label_date, 5, 0, 1, 1);

        label_quantity = new QLabel(frame_2);
        label_quantity->setObjectName(QStringLiteral("label_quantity"));

        gridLayout->addWidget(label_quantity, 4, 0, 1, 1);

        label_category = new QLabel(frame_2);
        label_category->setObjectName(QStringLiteral("label_category"));

        gridLayout->addWidget(label_category, 0, 0, 1, 1);

        line_category = new QLineEdit(frame_2);
        line_category->setObjectName(QStringLiteral("line_category"));
        line_category->setEnabled(false);
        line_category->setMaximumSize(QSize(250, 22));

        gridLayout->addWidget(line_category, 0, 1, 1, 1);


        horizontalLayout_2->addWidget(frame_2);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        text_description = new QTextEdit(Box_Ads);
        text_description->setObjectName(QStringLiteral("text_description"));
        text_description->setEnabled(false);
        text_description->setMinimumSize(QSize(0, 110));
        text_description->setMaximumSize(QSize(16777215, 110));

        horizontalLayout_2->addWidget(text_description);

        frame = new QFrame(Box_Ads);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(50, 50));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Button_delete = new QPushButton(frame);
        Button_delete->setObjectName(QStringLiteral("Button_delete"));
        Button_delete->setGeometry(QRect(0, 0, 50, 50));
        Button_delete->setMaximumSize(QSize(50, 50));
        Button_delete->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        QString iconThemeName = QStringLiteral("x");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        Button_delete->setIcon(icon);
        Button_delete->setIconSize(QSize(22, 22));
        Button_delete->setFlat(true);

        horizontalLayout_2->addWidget(frame);


        horizontalLayout->addWidget(Box_Ads);


        retranslateUi(Ads);

        QMetaObject::connectSlotsByName(Ads);
    } // setupUi

    void retranslateUi(QWidget *Ads)
    {
        Ads->setWindowTitle(QApplication::translate("Ads", "Form", 0));
        Box_Ads->setTitle(QApplication::translate("Ads", "Title of Ads", 0));
        label_price->setText(QApplication::translate("Ads", "Price", 0));
        label_date->setText(QApplication::translate("Ads", "Date", 0));
        label_quantity->setText(QApplication::translate("Ads", "Quantity", 0));
        label_category->setText(QApplication::translate("Ads", "Category", 0));
        Button_delete->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Ads: public Ui_Ads {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADS_H
