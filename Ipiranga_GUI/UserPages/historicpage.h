#ifndef HISTORICPAGE_H
#define HISTORICPAGE_H

#include <QWidget>
#include "../include/User.hpp"
#include "layout/historiclayout.h"
#include "../include/Historic.hpp"
#include <vector>

/**
 * @abstract Class HistoricPage\n
 * Classe responsável por criar a interface grafica de historicos, exibindo informações de transações realizadas e permitindo avaliação de transação de forma intuitiva.\n
 * @warning: Esta classe esta diretamente conectada a classe com respectivo nome acrescido de -ui, a qual é responsável pela criação de muitos widgets exibidos ao usuario.
 * @extends: Esta classe herda de -ui todos seus atributos e metodos. @endabstract
 */

namespace Ui {
class HistoricPage;
}

class HistoricPage : public QWidget
{
    Q_OBJECT

public:
    explicit HistoricPage(QWidget *parent = 0);
    ~HistoricPage();

    /**
     * @addindex void SetCurrentUser(User*)
     * Esta função realiza a atribuição do atributo CurrentUser, que contem todas as informações do usuario atual
     * @arg 1: Ponteiro do tipo User que contem todas informações do usuario atual
     */
    void SetCurrentUser(User*);  //Set the User Active

private slots:
    /**
     * @addindex void on_Button_all_clicked()
     * Quando o botão de exibir todos é clicado esta função é chamada, realizando a pesquisa no BD por todos os historicos e utilizando de outras funções para exibir na tela.
     */
    void on_Button_all_clicked();   // ordenation by all
    /**
     * @addindex void on_Button_sales_clicked()
     * Quando o botão de exibir vendas é clicado esta função é chamada, realizando a pesquisa no Bd por historicos no qual o usurio atual é vendedor e utilizando de outras funções para exibir o resultado da busca na tela.
     */
    void on_Button_sales_clicked();
    /**
     * @addindex void on_Button_shopping_clicked()
     * Quando o botão de exibir compras é clicado esta função é chamada, realizando a pesquisa no BD por historicos no qual o usuario atual participou como comprador e utilizando de outras funções para exibir o resultado da busca na tela.
     */
    void on_Button_shopping_clicked();

private:
    Ui::HistoricPage *ui;

    User *CurrentUser; //User Active

    vector <HistoricLayout *> historic;  //historic objects
    int Number_historics;       //Number of objects on the screen

    //Methods
    /**
     * @addindex void addHistorics(bool, bool)
     * Esta função é responsável por realizar a busca no BD
     * @arg 1: Boleano que define se a busca é por vendas
     * @arg 2: Boleano que define se a busca é por compras
     * @note: Caso ambos sejam verdadeiro é buscado por todos os historicos do usuario atual.
     */
    void addHistorics(bool, bool);
    /**
     * @addindex void setHistoric(Historic*, HistoricLayout*)
     * Esta função é responsável por criar os objetos (Historicos) e exibir na tela, bem como setar seus campos, com informações dos historicos
     * @arg 1: Ponteiro do tipo Historic que contem as informações do historico a ser exibido
     * @arg 2: Ponteiro do tipo HistoricLayout que é o endereço do objeto (Historico) que será exibido, e terá seus campos setados com informações do argumento1.
     */
    void setHistoric(Historic*, HistoricLayout*);
    /**
     * @addindex void deleteHistorics(HistoricLayout*)
     * Esta função é responsável por deletar todos os historicos exibidos atualmente na tela
     * @arg 1: ponteiro do tipo HistoricLayout que é o endereço do objeto (Historico) atual em exibição que será por esta função desconstruido.
     */
    void deleteHistorics(HistoricLayout*);
};

#endif // HISTORICPAGE_H
