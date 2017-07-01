#ifndef LOGINUSER_H
#define LOGINUSER_H

#include "userapp.h"
#include "formregister.h"
#include <QMainWindow>
#include "adminpage.h"

/**
 * Class LoginUser
 * Classe responsável por criar a interface grafica de login e realizar o mesmo
 * @Assertivas_estruturais: Esta classe esta diretamente conectada a classe com respectivo nome acrescido de -ui, a qual é responsável pela criação de muitos widgets exibidos ao usuario. Esta classe herda de -ui todos seus atributos e metodos.
 **/

namespace Ui {
class LoginUser;
}

class LoginUser : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginUser(QWidget *parent = 0);
    ~LoginUser();

private slots:
    /**
     * void on_pushLogin_clicked()
     * Quando o botão de login é clicado esta função é chamada, realizando o pedido de login ao BD, caso este usuario exista e suas crendenciais estejam correto o usuario é logado.
     */
    void on_pushLogin_clicked();    //Login Button
    /**
     * void on_pushRegister_clicked()
     * Quando o botão de register é clicado esta função é chamada, realizando a abertura da pagina de registro (classe FormRegister).
     */
    void on_pushRegister_clicked(); //Register Button

private:
    Ui::LoginUser *ui;

    UserApp *userapp;               // Widget Home
    AdminPage *adminpage;           // Window Admin page
    FormRegister *formregister;     // Widget Register
};

#endif // LOGINUSER_H
