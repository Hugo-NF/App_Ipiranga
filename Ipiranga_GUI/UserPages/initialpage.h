#ifndef INITIALPAGE_H
#define INITIALPAGE_H

#include <QWidget>
#include "../include/User.hpp"

/**
 * @abstract Class InitialPage\n
 * Classe responsável por criar a interface grafica da pagina inicial do usuario, exibindo informações relevantes do usuario.\n
 * Esta classe esta diretamente conectada a classe com respectivo nome acrescido de -ui, a qual é responsável pela criação de muitos widgets exibidos ao usuario.
 * @extends Esta classe herda de -ui todos seus atributos e metodos. @endabstract
 **/

namespace Ui {
class InitialPage;
}

class InitialPage : public QWidget
{
    Q_OBJECT

public:
    explicit InitialPage(QWidget *parent = 0);
    ~InitialPage();
    /**
     * @addindex void SetCurrentUser(User*)
     * Esta função realiza a atribuição do atributo CurrentUser, o qual contem as informações do usuario atual.
     * @arg 1: Ponteiro do tipo User contendo as informações do usuario atual.
     */
    void SetCurrentUser(User*);  //Set the User Active

private:
    Ui::InitialPage *ui;

    User *CurrentUser; //User Active

    //Methods
    /**
     * @addindex void SetFields()
     * Esta função realiza o setup de todos os campos inerentes a esta pagina com as informções do usuario atual.
     */
    void SetFields();
};

#endif // INITIALPAGE_H
