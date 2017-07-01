#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include <QWidget>
#include <QMessageBox>
#include "../include/User.hpp"
#include "../include/Friendship.hpp"
#include "../include/Historic.hpp"
#include "../include/Ads.hpp"
#include "../include/Search.hpp"
#include "layout/friendslayout.h"
#include "layout/historiclayout.h"
#include "layout/adslayout.h"

/**
 * Class AdminPage
 * Classe responsável por criar a interface grafica de administrador, exibindo informações e permitindo alterações no programa de forma intuitiva.
 * @Assertivas_estruturais: Esta classe esta diretamente conectada a classe com respectivo nome acrescido de -ui, a qual é responsável pela criação de muitos widgets exibidos ao usuario. Esta classe herda de -ui todos seus atributos e metodos.
 **/

namespace Ui {
class AdminPage;
}

class AdminPage : public QWidget
{
    Q_OBJECT

public:
    explicit AdminPage(QWidget *parent = 0);
    ~AdminPage();

private slots:
    /**
     * void on_Button_search_users_clicked()
     * Quando o botão de busca de usuarios é clicado esta função é chamada, realizando a chamada de outra função que realiza a pesquisa.
     */
    void on_Button_search_users_clicked();
    /**
     * void on_line_search_users_returnPressed()
     * Quando é precionado Enter na linha de busca de usuario esta função é chamada, realizando a pesquisa do que foi digitado e exibindo na tela.
     */
    void on_line_search_users_returnPressed();
    
    /**
     * void on_line_search_transation_returnPressed()
     * Quando é prescionado Enter na linha de busca de transações esta função é chamada, realizado a busca do que foi digitado e exibindo na tela.
     */
    void on_line_search_transation_returnPressed();
    /**
     * void on_Button_search_transation_clicked()
     * Quando o botão de busca de transações é clicado esta funçaõ é chamada, realizando a chamada de outra função que realiza a pesquisa.
     */
    void on_Button_search_transation_clicked();

    /**
     * void on_Button_delete_users_clicked()
     * Quando o botão de deletar usuario é clicado esta função é chamada, realizando a exclusão de toda a tabela de usuarios.
     */
    void on_Button_delete_users_clicked();
    /**
     * void on_Button_delete_transations_clicked()
     * Quando o botão de deletar transação é clicado esta função é chamada, realizando a exclusão de toda a tabela de transações.
     */
    void on_Button_delete_transations_clicked();
    /**
     * void on_Button_delete_historic_clicked()
     * Quando o botão de deletar historico é clicado esta função é chamada, realizando a exclusão de toda a tabela de historicos.
     */
    void on_Button_delete_historic_clicked();

    /**
     * void on_line_search_users_textChanged()
     * Quando a caixa de busca por usuarios é modificada esta função é chamada, realizando a busca e exibindo na tela os resultados
     */
    void on_line_search_users_textChanged();
    /**
     *  void on_line_search_transation_textChanged()
     * Quando a caixa de busca por transações é modificada esta função é chamada, realizando a busca e exibindo na tela os resultados
     */
    void on_line_search_transation_textChanged();

private:
    Ui::AdminPage *ui;

    int users_size;
    int historics_size;
    int transations_size;

    vector <FriendsLayout*> user_object;
    vector <AdsLayout*> transations_object;
    vector <HistoricLayout*> historic_object;

    //---SET METHODS----
    /**
     * void setHomePage()
     * Esta função exibe na tela todos os dados relevantes do administrado na tela principal.
     */
    void setHomePage();

    /**
     * void setUsers_default()
     * Esta função realiza a busca por todos os usuarios, chamando outra função que irá exibindo-os em tela.
     */
    void setUsers_default();
    /**
     * void setUsers(vector <User*>);
     * Esta função realiza a inserção dos objetos (usuarios) na tela contendo as informações passadas no vetor do tipo User
     * @Argumento1: Vetor contendo todos os usuarios e seus atributos (informações), retornados em alguma pesquisa.
     */
    void setUsers(vector <User*>);

    /**
     * void setTransations_default()
     * Esta função realiza a busca por todos as transações, chamando outra função que irá exibindo-os em tela.
     */
    void setTransations_default();
    /**
     * void setTransations(vector <Ads*>)
     * Esta função realiza a inserção dos objetos (transações) na tela contendo as informações passada no vetor do tipo Ads
     * @Argumento1: Vetor contendo todas as transações e seus atributos (informações), retornados em alguma pesquisa ao BD. 
     */
    void setTransations(vector <Ads*>);

    /**
     * void setHistoric_default()
     * Esta função realiza a busca por todos os historicos, chamando outra função que irá exibindo-os em tela.
     */
    void setHistoric_default();
    /**
     * void setHistoric(vector <Historic*>)
     * Esta função realiza a inserção dos objetos (historicos) na tela contendo as informações passada no vetor do tipo Historic
     * @Argumento1: Vetor contendo todos os historicos e seus atributos (informações), retornados em alguma pesquisa ao BD. 
     */
    void setHistoric(vector <Historic*>);

    //-----delete-----
    /**
     * void deleteUsersObject()
     * Esta função realiza a descontrução de todos os objetos (Usuarios) exibidos na tela.
     */
    void deleteUsersObject();
    /**
     * void deleteTransationsObject()
     * Esta função realiza a descontrução de todos os objeto (Transações) exibidos na tela.
     */
    void deleteTransationsObject();
};

#endif // ADMINPAGE_H
