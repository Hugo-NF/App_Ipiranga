#ifndef FRIENDSPAGE_H
#define FRIENDSPAGE_H

#include <QWidget>
#include "../include/User.hpp"
#include "layout/friendslayout.h"

/**
 * @abstract Class FriendsPage\n
 * Classe responsável por criar a interface grafica da pagina de amigos, exibindo informações dos amigos e permitindo remoção de amigos de forma intuitiva.\n
 * @warning: Esta classe esta diretamente conectada a classe com respectivo nome acrescido de -ui, a qual é responsável pela criação de muitos widgets exibidos ao usuario.\n
 * @extends Esta classe herda de -ui todos seus atributos e metodos. @endabstract
 **/

namespace Ui {
class FriendsPage;
}

class FriendsPage : public QWidget
{
    Q_OBJECT

public:
    explicit FriendsPage(QWidget *parent = 0);
    ~FriendsPage();

    /**
     * @addindex void SetCurrentUser(User*)
     * Esta função é responsável por atribuir ao atribuito CurrentUser o endereço que contem as informações do usuario atual.
     */
    void SetCurrentUser(User*);  //Set the User Active
    /**
     * @addindex void setAdminMode()
     * Esta função é responsável por ativar o atributo AdminMode, dando ao usuario a liberdade de administrador, deletando e visualizando informações do usuario.
     */
    void setAdminMode();         //Set the admin mode

private:
    Ui::FriendsPage *ui;

    User *CurrentUser; //User Active
    bool AdminMode;

    //Methods
    /**
     * @addindex void setFriends();
     * Esta funçaõ é responsável por buscar e exibir na tela todos os amigos do usuario corrente.
     */
    void setFriends();
};

#endif // FRIENDSPAGE_H
