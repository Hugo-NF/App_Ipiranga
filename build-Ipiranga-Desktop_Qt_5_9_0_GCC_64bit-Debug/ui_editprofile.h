/********************************************************************************
** Form generated from reading UI file 'editprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILE_H
#define UI_EDITPROFILE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditProfile
{
public:
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *left;
    QFrame *form;
    QLabel *TitleRegister;
    QGroupBox *Personal;
    QLabel *labelFirstName;
    QLabel *labelLastName;
    QLabel *labelCPF;
    QLabel *labelRG;
    QLabel *labelAge;
    QLabel *labelPhone;
    QLineEdit *lineFirstName;
    QLineEdit *lineLastName;
    QLineEdit *lineCPF;
    QLineEdit *lineRG;
    QSpinBox *spinAge;
    QLineEdit *linePhone;
    QLabel *Private_1;
    QGroupBox *Adress;
    QLabel *labelAdress;
    QLabel *labelZIP;
    QLabel *labelState;
    QLabel *labelCity;
    QLineEdit *lineAdress;
    QLineEdit *lineZIP;
    QLineEdit *lineState;
    QLineEdit *lineCity;
    QLabel *Private_3;
    QGroupBox *Payment;
    QLabel *labelExpiration;
    QLabel *labelNumber;
    QLabel *labelName;
    QLabel *labelSecurity;
    QLineEdit *lineNamePayment;
    QLineEdit *lineNumber;
    QLineEdit *lineSecurity;
    QDateEdit *dateExpiration;
    QRadioButton *radioButton_Credit;
    QRadioButton *radioButton_Debit;
    QGroupBox *Acess;
    QLabel *labelLogin;
    QLabel *labelPass;
    QLabel *labelEmail;
    QLineEdit *lineLogin;
    QLineEdit *linePass;
    QLabel *labelConfirm;
    QLineEdit *lineConfirm;
    QLineEdit *lineEmail;
    QLabel *Private_2;
    QPushButton *pushButton_Undo;
    QPushButton *pushButton_Save;
    QGroupBox *BankAccount;
    QLabel *labelName_2;
    QLabel *labelBank;
    QLabel *labelAgency;
    QLabel *labelAccount;
    QLineEdit *lineNameBank;
    QLineEdit *lineAgency;
    QLineEdit *lineAccount;
    QComboBox *comboBox_Bank;
    QLabel *label;
    QPushButton *pushButton_Delete;
    QPushButton *pushButton_Inactive;
    QFrame *right;

    void setupUi(QWidget *EditProfile)
    {
        if (EditProfile->objectName().isEmpty())
            EditProfile->setObjectName(QStringLiteral("EditProfile"));
        EditProfile->resize(517, 416);
        horizontalLayout_2 = new QHBoxLayout(EditProfile);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        scrollArea = new QScrollArea(EditProfile);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidget = new QWidget();
        scrollAreaWidget->setObjectName(QStringLiteral("scrollAreaWidget"));
        scrollAreaWidget->setGeometry(QRect(0, -15, 484, 980));
        horizontalLayout = new QHBoxLayout(scrollAreaWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        left = new QFrame(scrollAreaWidget);
        left->setObjectName(QStringLiteral("left"));
        left->setMinimumSize(QSize(0, 0));
        left->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout->addWidget(left);

        form = new QFrame(scrollAreaWidget);
        form->setObjectName(QStringLiteral("form"));
        form->setEnabled(true);
        form->setMinimumSize(QSize(400, 980));
        form->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        TitleRegister = new QLabel(form);
        TitleRegister->setObjectName(QStringLiteral("TitleRegister"));
        TitleRegister->setGeometry(QRect(120, 10, 191, 41));
        TitleRegister->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Personal = new QGroupBox(form);
        Personal->setObjectName(QStringLiteral("Personal"));
        Personal->setEnabled(true);
        Personal->setGeometry(QRect(10, 70, 381, 201));
        Personal->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelFirstName = new QLabel(Personal);
        labelFirstName->setObjectName(QStringLiteral("labelFirstName"));
        labelFirstName->setGeometry(QRect(70, 20, 71, 20));
        labelFirstName->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelLastName = new QLabel(Personal);
        labelLastName->setObjectName(QStringLiteral("labelLastName"));
        labelLastName->setGeometry(QRect(70, 50, 71, 20));
        labelLastName->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelCPF = new QLabel(Personal);
        labelCPF->setObjectName(QStringLiteral("labelCPF"));
        labelCPF->setGeometry(QRect(70, 80, 47, 13));
        labelCPF->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelRG = new QLabel(Personal);
        labelRG->setObjectName(QStringLiteral("labelRG"));
        labelRG->setGeometry(QRect(70, 110, 47, 13));
        labelRG->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelAge = new QLabel(Personal);
        labelAge->setObjectName(QStringLiteral("labelAge"));
        labelAge->setGeometry(QRect(70, 135, 61, 21));
        labelAge->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelPhone = new QLabel(Personal);
        labelPhone->setObjectName(QStringLiteral("labelPhone"));
        labelPhone->setGeometry(QRect(70, 170, 61, 16));
        labelPhone->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineFirstName = new QLineEdit(Personal);
        lineFirstName->setObjectName(QStringLiteral("lineFirstName"));
        lineFirstName->setGeometry(QRect(160, 20, 211, 20));
        lineFirstName->setFocusPolicy(Qt::StrongFocus);
        lineFirstName->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineFirstName->setMaxLength(20);
        lineLastName = new QLineEdit(Personal);
        lineLastName->setObjectName(QStringLiteral("lineLastName"));
        lineLastName->setGeometry(QRect(160, 50, 211, 20));
        lineLastName->setFocusPolicy(Qt::StrongFocus);
        lineLastName->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineLastName->setMaxLength(20);
        lineCPF = new QLineEdit(Personal);
        lineCPF->setObjectName(QStringLiteral("lineCPF"));
        lineCPF->setEnabled(false);
        lineCPF->setGeometry(QRect(160, 80, 171, 20));
        lineCPF->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineCPF->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        lineCPF->setMaxLength(11);
        lineRG = new QLineEdit(Personal);
        lineRG->setObjectName(QStringLiteral("lineRG"));
        lineRG->setGeometry(QRect(160, 110, 171, 20));
        lineRG->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineRG->setMaxLength(11);
        spinAge = new QSpinBox(Personal);
        spinAge->setObjectName(QStringLiteral("spinAge"));
        spinAge->setGeometry(QRect(160, 140, 61, 22));
        spinAge->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        spinAge->setMinimum(1);
        spinAge->setValue(18);
        linePhone = new QLineEdit(Personal);
        linePhone->setObjectName(QStringLiteral("linePhone"));
        linePhone->setGeometry(QRect(160, 170, 101, 20));
        linePhone->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        linePhone->setMaxLength(15);
        Private_1 = new QLabel(Personal);
        Private_1->setObjectName(QStringLiteral("Private_1"));
        Private_1->setGeometry(QRect(10, -10, 21, 41));
        Adress = new QGroupBox(form);
        Adress->setObjectName(QStringLiteral("Adress"));
        Adress->setEnabled(true);
        Adress->setGeometry(QRect(10, 430, 381, 141));
        Adress->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelAdress = new QLabel(Adress);
        labelAdress->setObjectName(QStringLiteral("labelAdress"));
        labelAdress->setGeometry(QRect(70, 20, 91, 16));
        labelAdress->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelZIP = new QLabel(Adress);
        labelZIP->setObjectName(QStringLiteral("labelZIP"));
        labelZIP->setGeometry(QRect(70, 50, 81, 16));
        labelZIP->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelState = new QLabel(Adress);
        labelState->setObjectName(QStringLiteral("labelState"));
        labelState->setGeometry(QRect(70, 80, 47, 13));
        labelState->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelCity = new QLabel(Adress);
        labelCity->setObjectName(QStringLiteral("labelCity"));
        labelCity->setGeometry(QRect(70, 110, 71, 16));
        labelCity->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineAdress = new QLineEdit(Adress);
        lineAdress->setObjectName(QStringLiteral("lineAdress"));
        lineAdress->setGeometry(QRect(160, 20, 211, 20));
        lineAdress->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineAdress->setMaxLength(100);
        lineZIP = new QLineEdit(Adress);
        lineZIP->setObjectName(QStringLiteral("lineZIP"));
        lineZIP->setGeometry(QRect(160, 50, 113, 20));
        lineZIP->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineZIP->setMaxLength(10);
        lineState = new QLineEdit(Adress);
        lineState->setObjectName(QStringLiteral("lineState"));
        lineState->setGeometry(QRect(160, 80, 31, 20));
        lineState->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineState->setMaxLength(2);
        lineCity = new QLineEdit(Adress);
        lineCity->setObjectName(QStringLiteral("lineCity"));
        lineCity->setGeometry(QRect(160, 110, 113, 20));
        lineCity->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineCity->setMaxLength(20);
        Private_3 = new QLabel(Adress);
        Private_3->setObjectName(QStringLiteral("Private_3"));
        Private_3->setGeometry(QRect(10, -10, 21, 41));
        Payment = new QGroupBox(form);
        Payment->setObjectName(QStringLiteral("Payment"));
        Payment->setEnabled(true);
        Payment->setGeometry(QRect(10, 580, 381, 171));
        Payment->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelExpiration = new QLabel(Payment);
        labelExpiration->setObjectName(QStringLiteral("labelExpiration"));
        labelExpiration->setGeometry(QRect(70, 140, 91, 16));
        labelExpiration->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelNumber = new QLabel(Payment);
        labelNumber->setObjectName(QStringLiteral("labelNumber"));
        labelNumber->setGeometry(QRect(70, 80, 61, 16));
        labelNumber->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelName = new QLabel(Payment);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setGeometry(QRect(70, 50, 47, 13));
        labelName->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelSecurity = new QLabel(Payment);
        labelSecurity->setObjectName(QStringLiteral("labelSecurity"));
        labelSecurity->setGeometry(QRect(70, 110, 91, 16));
        labelSecurity->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineNamePayment = new QLineEdit(Payment);
        lineNamePayment->setObjectName(QStringLiteral("lineNamePayment"));
        lineNamePayment->setGeometry(QRect(160, 50, 211, 20));
        lineNamePayment->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineNamePayment->setMaxLength(30);
        lineNumber = new QLineEdit(Payment);
        lineNumber->setObjectName(QStringLiteral("lineNumber"));
        lineNumber->setGeometry(QRect(160, 80, 211, 20));
        lineNumber->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineNumber->setMaxLength(20);
        lineSecurity = new QLineEdit(Payment);
        lineSecurity->setObjectName(QStringLiteral("lineSecurity"));
        lineSecurity->setGeometry(QRect(160, 110, 51, 20));
        lineSecurity->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineSecurity->setMaxLength(4);
        dateExpiration = new QDateEdit(Payment);
        dateExpiration->setObjectName(QStringLiteral("dateExpiration"));
        dateExpiration->setGeometry(QRect(160, 140, 171, 22));
        dateExpiration->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        dateExpiration->setAlignment(Qt::AlignCenter);
        dateExpiration->setMinimumDateTime(QDateTime(QDate(2017, 1, 14), QTime(0, 0, 0)));
        radioButton_Credit = new QRadioButton(Payment);
        radioButton_Credit->setObjectName(QStringLiteral("radioButton_Credit"));
        radioButton_Credit->setGeometry(QRect(160, 20, 82, 17));
        radioButton_Credit->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        radioButton_Debit = new QRadioButton(Payment);
        radioButton_Debit->setObjectName(QStringLiteral("radioButton_Debit"));
        radioButton_Debit->setGeometry(QRect(230, 20, 82, 17));
        radioButton_Debit->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Acess = new QGroupBox(form);
        Acess->setObjectName(QStringLiteral("Acess"));
        Acess->setGeometry(QRect(10, 280, 381, 141));
        Acess->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelLogin = new QLabel(Acess);
        labelLogin->setObjectName(QStringLiteral("labelLogin"));
        labelLogin->setGeometry(QRect(70, 16, 47, 20));
        labelLogin->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelPass = new QLabel(Acess);
        labelPass->setObjectName(QStringLiteral("labelPass"));
        labelPass->setGeometry(QRect(70, 50, 91, 16));
        labelPass->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelEmail = new QLabel(Acess);
        labelEmail->setObjectName(QStringLiteral("labelEmail"));
        labelEmail->setGeometry(QRect(70, 110, 47, 13));
        labelEmail->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineLogin = new QLineEdit(Acess);
        lineLogin->setObjectName(QStringLiteral("lineLogin"));
        lineLogin->setEnabled(false);
        lineLogin->setGeometry(QRect(160, 20, 113, 20));
        lineLogin->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineLogin->setMaxLength(20);
        linePass = new QLineEdit(Acess);
        linePass->setObjectName(QStringLiteral("linePass"));
        linePass->setGeometry(QRect(160, 50, 113, 20));
        linePass->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        linePass->setMaxLength(30);
        linePass->setEchoMode(QLineEdit::Password);
        labelConfirm = new QLabel(Acess);
        labelConfirm->setObjectName(QStringLiteral("labelConfirm"));
        labelConfirm->setGeometry(QRect(70, 80, 81, 16));
        labelConfirm->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineConfirm = new QLineEdit(Acess);
        lineConfirm->setObjectName(QStringLiteral("lineConfirm"));
        lineConfirm->setGeometry(QRect(160, 80, 113, 20));
        lineConfirm->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineConfirm->setMaxLength(30);
        lineConfirm->setEchoMode(QLineEdit::Password);
        lineEmail = new QLineEdit(Acess);
        lineEmail->setObjectName(QStringLiteral("lineEmail"));
        lineEmail->setGeometry(QRect(160, 110, 211, 20));
        lineEmail->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineEmail->setMaxLength(45);
        Private_2 = new QLabel(Acess);
        Private_2->setObjectName(QStringLiteral("Private_2"));
        Private_2->setGeometry(QRect(10, -10, 21, 41));
        pushButton_Undo = new QPushButton(form);
        pushButton_Undo->setObjectName(QStringLiteral("pushButton_Undo"));
        pushButton_Undo->setGeometry(QRect(60, 940, 101, 31));
        pushButton_Undo->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pushButton_Save = new QPushButton(form);
        pushButton_Save->setObjectName(QStringLiteral("pushButton_Save"));
        pushButton_Save->setGeometry(QRect(240, 940, 101, 31));
        pushButton_Save->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        BankAccount = new QGroupBox(form);
        BankAccount->setObjectName(QStringLiteral("BankAccount"));
        BankAccount->setGeometry(QRect(10, 760, 381, 151));
        BankAccount->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelName_2 = new QLabel(BankAccount);
        labelName_2->setObjectName(QStringLiteral("labelName_2"));
        labelName_2->setGeometry(QRect(80, 30, 47, 13));
        labelName_2->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelBank = new QLabel(BankAccount);
        labelBank->setObjectName(QStringLiteral("labelBank"));
        labelBank->setGeometry(QRect(80, 60, 47, 13));
        labelBank->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelAgency = new QLabel(BankAccount);
        labelAgency->setObjectName(QStringLiteral("labelAgency"));
        labelAgency->setGeometry(QRect(80, 90, 51, 21));
        labelAgency->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        labelAccount = new QLabel(BankAccount);
        labelAccount->setObjectName(QStringLiteral("labelAccount"));
        labelAccount->setGeometry(QRect(80, 120, 61, 21));
        labelAccount->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineNameBank = new QLineEdit(BankAccount);
        lineNameBank->setObjectName(QStringLiteral("lineNameBank"));
        lineNameBank->setGeometry(QRect(160, 30, 211, 20));
        lineNameBank->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineNameBank->setMaxLength(30);
        lineAgency = new QLineEdit(BankAccount);
        lineAgency->setObjectName(QStringLiteral("lineAgency"));
        lineAgency->setGeometry(QRect(160, 90, 113, 20));
        lineAgency->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineAgency->setMaxLength(10);
        lineAccount = new QLineEdit(BankAccount);
        lineAccount->setObjectName(QStringLiteral("lineAccount"));
        lineAccount->setGeometry(QRect(160, 120, 113, 20));
        lineAccount->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        lineAccount->setMaxLength(20);
        comboBox_Bank = new QComboBox(BankAccount);
        comboBox_Bank->setObjectName(QStringLiteral("comboBox_Bank"));
        comboBox_Bank->setGeometry(QRect(160, 60, 161, 22));
        comboBox_Bank->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label = new QLabel(form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 910, 251, 20));
        pushButton_Delete = new QPushButton(form);
        pushButton_Delete->setObjectName(QStringLiteral("pushButton_Delete"));
        pushButton_Delete->setGeometry(QRect(310, 910, 85, 16));
        QPalette palette;
        QBrush brush(QColor(32, 74, 135, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(141, 144, 145, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButton_Delete->setPalette(palette);
        QFont font;
        font.setPointSize(8);
        pushButton_Delete->setFont(font);
        pushButton_Delete->setStyleSheet(QStringLiteral(""));
        pushButton_Delete->setFlat(true);
        pushButton_Inactive = new QPushButton(form);
        pushButton_Inactive->setObjectName(QStringLiteral("pushButton_Inactive"));
        pushButton_Inactive->setGeometry(QRect(220, 910, 85, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pushButton_Inactive->setPalette(palette1);
        pushButton_Inactive->setFont(font);
        pushButton_Inactive->setStyleSheet(QStringLiteral(""));
        pushButton_Inactive->setFlat(true);

        horizontalLayout->addWidget(form);

        right = new QFrame(scrollAreaWidget);
        right->setObjectName(QStringLiteral("right"));
        right->setMinimumSize(QSize(0, 0));
        right->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout->addWidget(right);

        scrollArea->setWidget(scrollAreaWidget);

        horizontalLayout_2->addWidget(scrollArea);

        QWidget::setTabOrder(lineFirstName, lineLastName);
        QWidget::setTabOrder(lineLastName, lineCPF);
        QWidget::setTabOrder(lineCPF, lineRG);
        QWidget::setTabOrder(lineRG, spinAge);
        QWidget::setTabOrder(spinAge, linePhone);
        QWidget::setTabOrder(linePhone, lineLogin);
        QWidget::setTabOrder(lineLogin, linePass);
        QWidget::setTabOrder(linePass, lineConfirm);
        QWidget::setTabOrder(lineConfirm, lineEmail);
        QWidget::setTabOrder(lineEmail, lineAdress);
        QWidget::setTabOrder(lineAdress, lineZIP);
        QWidget::setTabOrder(lineZIP, lineState);
        QWidget::setTabOrder(lineState, lineCity);
        QWidget::setTabOrder(lineCity, radioButton_Credit);
        QWidget::setTabOrder(radioButton_Credit, radioButton_Debit);
        QWidget::setTabOrder(radioButton_Debit, lineNamePayment);
        QWidget::setTabOrder(lineNamePayment, lineNumber);
        QWidget::setTabOrder(lineNumber, lineSecurity);
        QWidget::setTabOrder(lineSecurity, dateExpiration);
        QWidget::setTabOrder(dateExpiration, lineNameBank);
        QWidget::setTabOrder(lineNameBank, comboBox_Bank);
        QWidget::setTabOrder(comboBox_Bank, lineAgency);
        QWidget::setTabOrder(lineAgency, lineAccount);
        QWidget::setTabOrder(lineAccount, pushButton_Save);
        QWidget::setTabOrder(pushButton_Save, pushButton_Undo);
        QWidget::setTabOrder(pushButton_Undo, scrollArea);

        retranslateUi(EditProfile);
        QObject::connect(lineNamePayment, SIGNAL(textChanged(QString)), lineNameBank, SLOT(setText(QString)));
        QObject::connect(lineNameBank, SIGNAL(textChanged(QString)), lineNamePayment, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(EditProfile);
    } // setupUi

    void retranslateUi(QWidget *EditProfile)
    {
        EditProfile->setWindowTitle(QApplication::translate("EditProfile", "Form", Q_NULLPTR));
        TitleRegister->setText(QApplication::translate("EditProfile", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; text-decoration: underline; color:#087add;\">My Informations</span></p></body></html>", Q_NULLPTR));
        Personal->setTitle(QApplication::translate("EditProfile", "   Personal Information ", Q_NULLPTR));
        labelFirstName->setText(QApplication::translate("EditProfile", "First Name", Q_NULLPTR));
        labelLastName->setText(QApplication::translate("EditProfile", "Last Name", Q_NULLPTR));
        labelCPF->setText(QApplication::translate("EditProfile", "CPF", Q_NULLPTR));
        labelRG->setText(QApplication::translate("EditProfile", "RG", Q_NULLPTR));
        labelAge->setText(QApplication::translate("EditProfile", "Age", Q_NULLPTR));
        labelPhone->setText(QApplication::translate("EditProfile", "Phone", Q_NULLPTR));
        lineFirstName->setText(QString());
        lineLastName->setText(QString());
        lineCPF->setText(QString());
        lineRG->setText(QString());
        linePhone->setText(QString());
        Private_1->setText(QApplication::translate("EditProfile", "<html><head/><body><p><span style=\" color:#a40000;\">*</span></p></body></html>", Q_NULLPTR));
        Adress->setTitle(QApplication::translate("EditProfile", "   Address", Q_NULLPTR));
        labelAdress->setText(QApplication::translate("EditProfile", "Address", Q_NULLPTR));
        labelZIP->setText(QApplication::translate("EditProfile", "Zip Code", Q_NULLPTR));
        labelState->setText(QApplication::translate("EditProfile", "State", Q_NULLPTR));
        labelCity->setText(QApplication::translate("EditProfile", "City", Q_NULLPTR));
        lineAdress->setText(QString());
        lineZIP->setText(QString());
        lineState->setText(QString());
        lineCity->setText(QString());
        Private_3->setText(QApplication::translate("EditProfile", "<html><head/><body><p><span style=\" color:#a40000;\">*</span></p></body></html>", Q_NULLPTR));
        Payment->setTitle(QApplication::translate("EditProfile", "Payment", Q_NULLPTR));
        labelExpiration->setText(QApplication::translate("EditProfile", "Expiration", Q_NULLPTR));
        labelNumber->setText(QApplication::translate("EditProfile", "Number", Q_NULLPTR));
        labelName->setText(QApplication::translate("EditProfile", "Name", Q_NULLPTR));
        labelSecurity->setText(QApplication::translate("EditProfile", "N\302\272 Security", Q_NULLPTR));
        lineNamePayment->setText(QString());
        lineNumber->setText(QString());
        lineSecurity->setText(QString());
        dateExpiration->setDisplayFormat(QApplication::translate("EditProfile", "yyyy/MMM", Q_NULLPTR));
        radioButton_Credit->setText(QApplication::translate("EditProfile", "Credit", Q_NULLPTR));
        radioButton_Debit->setText(QApplication::translate("EditProfile", "Debit", Q_NULLPTR));
        Acess->setTitle(QApplication::translate("EditProfile", "   Access", Q_NULLPTR));
        labelLogin->setText(QApplication::translate("EditProfile", "Login", Q_NULLPTR));
        labelPass->setText(QApplication::translate("EditProfile", "Password", Q_NULLPTR));
        labelEmail->setText(QApplication::translate("EditProfile", "E-mail", Q_NULLPTR));
        lineLogin->setText(QString());
        linePass->setText(QString());
        labelConfirm->setText(QApplication::translate("EditProfile", "Confirm", Q_NULLPTR));
        lineConfirm->setText(QString());
        lineEmail->setText(QString());
        Private_2->setText(QApplication::translate("EditProfile", "<html><head/><body><p><span style=\" color:#a40000;\">*</span></p></body></html>", Q_NULLPTR));
        pushButton_Undo->setText(QApplication::translate("EditProfile", "Undo", Q_NULLPTR));
        pushButton_Save->setText(QApplication::translate("EditProfile", "Save", Q_NULLPTR));
        BankAccount->setTitle(QApplication::translate("EditProfile", "Bank Account", Q_NULLPTR));
        labelName_2->setText(QApplication::translate("EditProfile", "Name", Q_NULLPTR));
        labelBank->setText(QApplication::translate("EditProfile", "Bank", Q_NULLPTR));
        labelAgency->setText(QApplication::translate("EditProfile", "Agency", Q_NULLPTR));
        labelAccount->setText(QApplication::translate("EditProfile", "Account", Q_NULLPTR));
        lineNameBank->setText(QString());
        lineAgency->setText(QString());
        lineAccount->setText(QString());
        comboBox_Bank->clear();
        comboBox_Bank->insertItems(0, QStringList()
         << QApplication::translate("EditProfile", "Banco do Brasil", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Bradesco", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Caixa Econ\303\264mica", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Ita\303\272", Q_NULLPTR)
         << QApplication::translate("EditProfile", "Santander", Q_NULLPTR)
        );
        label->setText(QApplication::translate("EditProfile", "<html><head/><body><p><span style=\" font-size:8pt;\">Sections that contain </span><span style=\" font-size:8pt; color:#a40000;\">*</span><span style=\" font-size:8pt;\"> are required</span></p></body></html>", Q_NULLPTR));
        pushButton_Delete->setText(QApplication::translate("EditProfile", "Delete Account", Q_NULLPTR));
        pushButton_Inactive->setText(QApplication::translate("EditProfile", "Inactive Account", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditProfile: public Ui_EditProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILE_H
