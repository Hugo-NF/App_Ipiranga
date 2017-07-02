#ifndef FRIENDSLAYOUT_H
#define FRIENDSLAYOUT_H

#include <QWidget>
#include <QMainWindow>
#include <QApplication>
#include "../include/User.hpp"
#include "UserPages/editprofile.h"

/**
 * @abstract Class Friendslayout\n
 * Classe responsável por criar a interface grafica para exibição de informações de um unico usuario. Permitindo excluir amizade no caso de usuario comum, e deleção de conta visualização de amigos e visualização de informações inerentes a conta, caso administrador.\n
 * @warning: Esta classe esta diretamente conectada a classe com respectivo nome acrescido de -ui, a qual é responsável pela criação de muitos widgets exibidos ao usuario.\n
 * @extends: Esta classe herda de -ui todos seus atributos e metodos.@endabstract
 **/

namespace Ui {
class FriendsLayout;
}

class FriendsLayout : public QWidget
{
    Q_OBJECT

public:
    explicit FriendsLayout(QWidget *parent = 0);
    ~FriendsLayout();

    void setCurrentUser(User*);  //User address
    void setMy_F_Address(User*); //Friend address
    void setAdminMode();         //Set mode Admin

private slots:
    void on_Button_delete_clicked();    //delete friends

    void on_see_more_clicked();
    void on_Button_show_friends_clicked();

    //Set Methods
    void setFields();
    void setName(QString);
    void setPhone(QString);
    void setEmail(QString);
    void setRating(QString);

private:
    Ui::FriendsLayout *ui;
    User* CurrentUser;
    User* My_F_Address;
    bool AdminMode;
};

#endif // FRIENDSLAYOUT_H
