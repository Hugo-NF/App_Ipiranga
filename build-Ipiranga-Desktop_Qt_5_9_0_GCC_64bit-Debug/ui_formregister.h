/********************************************************************************
** Form generated from reading UI file 'formregister.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMREGISTER_H
#define UI_FORMREGISTER_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
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

class Ui_FormRegister
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
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_Register;
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
    QLabel *label_2;
    QFrame *right;

    void setupUi(QDialog *FormRegister)
    {
        if (FormRegister->objectName().isEmpty())
            FormRegister->setObjectName(QStringLiteral("FormRegister"));
        FormRegister->resize(500, 600);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FormRegister->sizePolicy().hasHeightForWidth());
        FormRegister->setSizePolicy(sizePolicy);
        FormRegister->setMinimumSize(QSize(500, 460));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img_login/images/Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        FormRegister->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(FormRegister);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(FormRegister);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidget = new QWidget();
        scrollAreaWidget->setObjectName(QStringLiteral("scrollAreaWidget"));
        scrollAreaWidget->setGeometry(QRect(0, -339, 485, 990));
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
        form->setMinimumSize(QSize(400, 990));
        form->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        TitleRegister = new QLabel(form);
        TitleRegister->setObjectName(QStringLiteral("TitleRegister"));
        TitleRegister->setGeometry(QRect(120, 10, 191, 41));
        TitleRegister->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        Personal = new QGroupBox(form);
        Personal->setObjectName(QStringLiteral("Personal"));
        Personal->setEnabled(true);
        Personal->setGeometry(QRect(10, 80, 381, 201));
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
        lineCPF->setGeometry(QRect(160, 80, 171, 20));
        lineCPF->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
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
        Adress->setGeometry(QRect(10, 440, 381, 141));
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
        Payment->setGeometry(QRect(10, 590, 381, 171));
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
        Acess->setGeometry(QRect(10, 290, 381, 141));
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
        pushButton_Cancel = new QPushButton(form);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(60, 950, 101, 31));
        pushButton_Cancel->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        pushButton_Register = new QPushButton(form);
        pushButton_Register->setObjectName(QStringLiteral("pushButton_Register"));
        pushButton_Register->setGeometry(QRect(240, 950, 101, 31));
        pushButton_Register->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        BankAccount = new QGroupBox(form);
        BankAccount->setObjectName(QStringLiteral("BankAccount"));
        BankAccount->setGeometry(QRect(10, 770, 381, 151));
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
        label->setGeometry(QRect(210, 70, 251, 20));
        label_2 = new QLabel(form);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 920, 351, 20));

        horizontalLayout->addWidget(form);

        right = new QFrame(scrollAreaWidget);
        right->setObjectName(QStringLiteral("right"));
        right->setMinimumSize(QSize(0, 0));
        right->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));

        horizontalLayout->addWidget(right);

        scrollArea->setWidget(scrollAreaWidget);

        horizontalLayout_2->addWidget(scrollArea);

        QWidget::setTabOrder(scrollArea, lineFirstName);
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
        QWidget::setTabOrder(lineAccount, pushButton_Register);
        QWidget::setTabOrder(pushButton_Register, pushButton_Cancel);

        retranslateUi(FormRegister);
        QObject::connect(lineNamePayment, SIGNAL(textEdited(QString)), lineNameBank, SLOT(setText(QString)));
        QObject::connect(lineNameBank, SIGNAL(textEdited(QString)), lineNamePayment, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(FormRegister);
    } // setupUi

    void retranslateUi(QDialog *FormRegister)
    {
        FormRegister->setWindowTitle(QApplication::translate("FormRegister", "Register Now", Q_NULLPTR));
        TitleRegister->setText(QApplication::translate("FormRegister", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; text-decoration: underline; color:#087add;\">Register Now</span></p></body></html>", Q_NULLPTR));
        Personal->setTitle(QApplication::translate("FormRegister", "   Personal Information ", Q_NULLPTR));
        labelFirstName->setText(QApplication::translate("FormRegister", "First Name", Q_NULLPTR));
        labelLastName->setText(QApplication::translate("FormRegister", "Last Name", Q_NULLPTR));
        labelCPF->setText(QApplication::translate("FormRegister", "CPF", Q_NULLPTR));
        labelRG->setText(QApplication::translate("FormRegister", "RG", Q_NULLPTR));
        labelAge->setText(QApplication::translate("FormRegister", "Age", Q_NULLPTR));
        labelPhone->setText(QApplication::translate("FormRegister", "Phone", Q_NULLPTR));
        lineFirstName->setText(QApplication::translate("FormRegister", "teste", Q_NULLPTR));
        lineLastName->setText(QApplication::translate("FormRegister", "teste", Q_NULLPTR));
        lineCPF->setText(QApplication::translate("FormRegister", "70317311190", Q_NULLPTR));
        lineRG->setText(QApplication::translate("FormRegister", "123456789", Q_NULLPTR));
        linePhone->setText(QApplication::translate("FormRegister", "062999923105", Q_NULLPTR));
        Private_1->setText(QApplication::translate("FormRegister", "<html><head/><body><p><span style=\" color:#a40000;\">*</span></p></body></html>", Q_NULLPTR));
        Adress->setTitle(QApplication::translate("FormRegister", "   Address", Q_NULLPTR));
        labelAdress->setText(QApplication::translate("FormRegister", "Address", Q_NULLPTR));
        labelZIP->setText(QApplication::translate("FormRegister", "Zip Code", Q_NULLPTR));
        labelState->setText(QApplication::translate("FormRegister", "State", Q_NULLPTR));
        labelCity->setText(QApplication::translate("FormRegister", "City", Q_NULLPTR));
        lineAdress->setText(QApplication::translate("FormRegister", "teste", Q_NULLPTR));
        lineZIP->setInputMask(QApplication::translate("FormRegister", "9999999999", Q_NULLPTR));
        lineZIP->setText(QApplication::translate("FormRegister", "123456781", Q_NULLPTR));
        lineState->setInputMask(QApplication::translate("FormRegister", ">AA", Q_NULLPTR));
        lineState->setText(QApplication::translate("FormRegister", "AC", Q_NULLPTR));
        lineCity->setInputMask(QApplication::translate("FormRegister", "NNNNNNNNNNNNNNNNNNNN", Q_NULLPTR));
        lineCity->setText(QApplication::translate("FormRegister", "teste1", Q_NULLPTR));
        Private_3->setText(QApplication::translate("FormRegister", "<html><head/><body><p><span style=\" color:#a40000;\">*</span></p></body></html>", Q_NULLPTR));
        Payment->setTitle(QApplication::translate("FormRegister", "Payment", Q_NULLPTR));
        labelExpiration->setText(QApplication::translate("FormRegister", "Expiration", Q_NULLPTR));
        labelNumber->setText(QApplication::translate("FormRegister", "Number", Q_NULLPTR));
        labelName->setText(QApplication::translate("FormRegister", "Name", Q_NULLPTR));
        labelSecurity->setText(QApplication::translate("FormRegister", "N\302\272 Security", Q_NULLPTR));
        lineNamePayment->setText(QApplication::translate("FormRegister", "teste", Q_NULLPTR));
        lineNumber->setText(QString());
        lineSecurity->setText(QApplication::translate("FormRegister", "12", Q_NULLPTR));
        dateExpiration->setDisplayFormat(QApplication::translate("FormRegister", "yyyy/MMM", Q_NULLPTR));
        radioButton_Credit->setText(QApplication::translate("FormRegister", "Credit", Q_NULLPTR));
        radioButton_Debit->setText(QApplication::translate("FormRegister", "Debit", Q_NULLPTR));
        Acess->setTitle(QApplication::translate("FormRegister", "   Access", Q_NULLPTR));
        labelLogin->setText(QApplication::translate("FormRegister", "Login", Q_NULLPTR));
        labelPass->setText(QApplication::translate("FormRegister", "Password", Q_NULLPTR));
        labelEmail->setText(QApplication::translate("FormRegister", "E-mail", Q_NULLPTR));
        lineLogin->setText(QApplication::translate("FormRegister", "teste", Q_NULLPTR));
        linePass->setText(QApplication::translate("FormRegister", "12345678", Q_NULLPTR));
        labelConfirm->setText(QApplication::translate("FormRegister", "Confirm", Q_NULLPTR));
        lineConfirm->setText(QApplication::translate("FormRegister", "12345678", Q_NULLPTR));
        lineEmail->setText(QApplication::translate("FormRegister", "teste@teste.com", Q_NULLPTR));
        Private_2->setText(QApplication::translate("FormRegister", "<html><head/><body><p><span style=\" color:#a40000;\">*</span></p></body></html>", Q_NULLPTR));
        pushButton_Cancel->setText(QApplication::translate("FormRegister", "Cancel", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_Cancel->setShortcut(QApplication::translate("FormRegister", "Esc", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_Register->setText(QApplication::translate("FormRegister", "Register", Q_NULLPTR));
        BankAccount->setTitle(QApplication::translate("FormRegister", "Bank Account", Q_NULLPTR));
        labelName_2->setText(QApplication::translate("FormRegister", "Name", Q_NULLPTR));
        labelBank->setText(QApplication::translate("FormRegister", "Bank", Q_NULLPTR));
        labelAgency->setText(QApplication::translate("FormRegister", "Agency", Q_NULLPTR));
        labelAccount->setText(QApplication::translate("FormRegister", "Account", Q_NULLPTR));
        lineNameBank->setText(QApplication::translate("FormRegister", "teste", Q_NULLPTR));
        lineAgency->setText(QApplication::translate("FormRegister", "12345678", Q_NULLPTR));
        lineAccount->setText(QApplication::translate("FormRegister", "123456789123456789", Q_NULLPTR));
        comboBox_Bank->clear();
        comboBox_Bank->insertItems(0, QStringList()
         << QApplication::translate("FormRegister", "Banco do Brasil", Q_NULLPTR)
         << QApplication::translate("FormRegister", "Bradesco", Q_NULLPTR)
         << QApplication::translate("FormRegister", "Caixa Econ\303\264mica", Q_NULLPTR)
         << QApplication::translate("FormRegister", "Ita\303\272", Q_NULLPTR)
         << QApplication::translate("FormRegister", "Santander", Q_NULLPTR)
        );
        label->setText(QApplication::translate("FormRegister", "<html><head/><body><p><span style=\" font-size:8pt;\">Sections that contain </span><span style=\" font-size:8pt; color:#a40000;\">*</span><span style=\" font-size:8pt;\"> are required</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("FormRegister", "<html><head/><body><p><span style=\" font-size:8pt;\">When clicking on Register, you are agreeing with our </span><a href=\"https://pt-br.facebook.com/legal/terms\"><span style=\" font-size:8pt; text-decoration: underline; color:#2a76c6;\">Terms of Use</span></a></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormRegister: public Ui_FormRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMREGISTER_H
