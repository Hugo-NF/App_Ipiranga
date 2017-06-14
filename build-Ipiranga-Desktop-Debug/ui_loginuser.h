/********************************************************************************
** Form generated from reading UI file 'loginuser.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINUSER_H
#define UI_LOGINUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginUser
{
public:
    QWidget *centralWidget;
    QGroupBox *Login;
    QLabel *label_user;
    QLabel *label_password;
    QLineEdit *linePass;
    QLineEdit *lineName;
    QPushButton *pushLogin;
    QPushButton *pushRegister;
    QLabel *label_ImgLogo;

    void setupUi(QMainWindow *LoginUser)
    {
        if (LoginUser->objectName().isEmpty())
            LoginUser->setObjectName(QStringLiteral("LoginUser"));
        LoginUser->setEnabled(true);
        LoginUser->resize(400, 310);
        LoginUser->setMaximumSize(QSize(400, 310));
        LoginUser->setMouseTracking(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img_login/images/Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoginUser->setWindowIcon(icon);
        centralWidget = new QWidget(LoginUser);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Login = new QGroupBox(centralWidget);
        Login->setObjectName(QStringLiteral("Login"));
        Login->setGeometry(QRect(90, 120, 210, 150));
        label_user = new QLabel(Login);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setGeometry(QRect(10, 20, 81, 20));
        label_password = new QLabel(Login);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setGeometry(QRect(10, 60, 81, 20));
        linePass = new QLineEdit(Login);
        linePass->setObjectName(QStringLiteral("linePass"));
        linePass->setGeometry(QRect(90, 60, 113, 20));
        linePass->setEchoMode(QLineEdit::Password);
        lineName = new QLineEdit(Login);
        lineName->setObjectName(QStringLiteral("lineName"));
        lineName->setGeometry(QRect(90, 20, 113, 20));
        lineName->setEchoMode(QLineEdit::Normal);
        pushLogin = new QPushButton(Login);
        pushLogin->setObjectName(QStringLiteral("pushLogin"));
        pushLogin->setGeometry(QRect(130, 110, 75, 23));
        pushRegister = new QPushButton(Login);
        pushRegister->setObjectName(QStringLiteral("pushRegister"));
        pushRegister->setGeometry(QRect(50, 110, 75, 23));
        label_user->raise();
        label_password->raise();
        lineName->raise();
        pushLogin->raise();
        pushRegister->raise();
        linePass->raise();
        label_ImgLogo = new QLabel(centralWidget);
        label_ImgLogo->setObjectName(QStringLiteral("label_ImgLogo"));
        label_ImgLogo->setGeometry(QRect(10, 10, 381, 91));
        label_ImgLogo->setPixmap(QPixmap(QString::fromUtf8(":/img_login/images/Ipiranga_logo.png")));
        label_ImgLogo->setScaledContents(true);
        label_ImgLogo->setAlignment(Qt::AlignCenter);
        LoginUser->setCentralWidget(centralWidget);
        QWidget::setTabOrder(lineName, linePass);

        retranslateUi(LoginUser);

        QMetaObject::connectSlotsByName(LoginUser);
    } // setupUi

    void retranslateUi(QMainWindow *LoginUser)
    {
        LoginUser->setWindowTitle(QApplication::translate("LoginUser", "Login", 0));
        Login->setTitle(QString());
        label_user->setText(QApplication::translate("LoginUser", "User Name", 0));
        label_password->setText(QApplication::translate("LoginUser", "Password", 0));
        linePass->setText(QApplication::translate("LoginUser", "12345678", 0));
#ifndef QT_NO_ACCESSIBILITY
        lineName->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineName->setText(QApplication::translate("LoginUser", "Luiz", 0));
        pushLogin->setText(QApplication::translate("LoginUser", "Login", 0));
        pushLogin->setShortcut(QApplication::translate("LoginUser", "Return", 0));
        pushRegister->setText(QApplication::translate("LoginUser", "Register", 0));
        label_ImgLogo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginUser: public Ui_LoginUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINUSER_H
