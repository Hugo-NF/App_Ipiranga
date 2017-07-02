#ifndef USERAPP_H
#define USERAPP_H

#include <QMainWindow>
#include"../include/User.hpp"

// Include Pages
#include "UserPages/initialpage.h"
#include "UserPages/editprofile.h"
#include "UserPages/friendspage.h"
#include "UserPages/historicpage.h"
#include "UserPages/advertise.h"
#include "UserPages/searchresult.h"

/**
 * @abstract Class UserApp\n
 * Classe responsável por criar a interface grafica de usuario, exibindo informações e permitindo alterações no programa de forma intuitiva
 * @warning: Esta classe esta diretamente conectada a classe com respectivo nome acrescido de -ui, a qual é responsável pela criação de muitos widgets exibidos ao usuario.
 * @extends Esta classe herda de -ui todos seus atributos e metodos.@endabstract
 **/

namespace Ui {
class UserApp;
}

class UserApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserApp(QWidget *parent = 0, User* _CurrentUser=0);
    ~UserApp();

    void logoff();

private slots:

    //Menu Buttons Actions
    /**
     * @addindex void on_Button_edit_clicked()
     * Quando o botão de editprofile é clicado esta função é chamada, realizando a alternaçaõ para esta pagina e setando todos os campos inerentes a esta pagina com os dados do usuario corrente.
     */
    void on_Button_edit_clicked();          // Editprofile
    /**
     * @addindex void on_Button_home_clicked()
     * Quando o botão de home é clicado esta função é chamada, realizando a descontrução da ultima pagina home e recriando uma nova, setando todos os campos inerentes a esta pagina com os dados do usuario corrente.
     */
    void on_Button_home_clicked();          // Home Page
    /**
     * @addindex void on_Button_friends_clicked()
     * Quando o botão de friends é clicado esta função é chamada, realizando a descontrução da ultima pagina friends e recriando uma nova, setando todos os campos inerentes a esta pagina com os dados do usuario corrente e seus atuais amigos. 
     */
    void on_Button_friends_clicked();       // Friends
    /**
     * @addindex void on_Button_historic_clicked()
     * Quando o botão de historic é clicado esta função é chamada, realizando a descontrução da ultima pagina historic e recriando uma nova, setando todos os campos inerentes a esta pagina com os dados do usuario corrente e seus auais historicos.
     */
    void on_Button_historic_clicked();      // Historic
    /**
     * @addindex void on_Button_advertise_clicked()
     * Quando o botão de advertise é clicado esta função é chamada, realizando a descontrução da ultima pagina advertise e recriando uma nova, setando todos os campos inerentes a esta pagina com os dados do usuario corrente.
     */
    void on_Button_advertise_clicked();     // Advertise
    /**
     * @addindex void on_Button_logout_clicked()
     * Quando o botão de logout é clicado esta função é chamada, realizando o fechamento do aplicativo atual e abrindo outro.
     */
    void on_Button_logout_clicked();        // Logout

    //Search Buttons Actions
    /**
     * @addindex void on_line_search_returnPressed()
     * Quando é precionado Enter na caixa de busca esta função é chamada, realizando a verificação de que tipo de busca será feita e realizando a busca dado os parametros ajustados ou não pelo usuario.
     */
    void on_line_search_returnPressed();        // Return pressed in the search line
    /**
     * @addindex void on_line_search_textChanged()
     * Ao ser detectado mudanças na caixa de busca esta função é chamada, realizado a chamada da função que irá realizar a busca.
     */
    void on_line_search_textChanged();          // Return the search in real time
    /**
     * @addindex void on_Button_search_clicked()
     * Quando o botão de busca é clicado esta função é chamada, realizando a chamada da função que irá realiza a busca.
     */
    void on_Button_search_clicked();            // Search button was clicked
    /**
     * @addindex void on_Button_search_friends_clicked()
     * Quando o botão de busca por amigos é clicado esta função é chamada, realizando a alternação do tipo de busca para amigos, alterando também a aparencia dos icones.
     */
    void on_Button_search_friends_clicked();    // Search friends filter
    /**
     * @addindex void on_Button_search_advertise_clicked()
     * Quando o botão de busca por anuncios é clicado esta função é chamada, realizando a alternação do tipo de busca para anuncios, alternando também a aparencia dos icones.
     */
    void on_Button_search_advertise_clicked();  // Search Ads filter
    /**
     * @addindex void on_Button_adjust_clicked()
     * Quando o botão de ajuste é clicaco esta funçao é chamada, realizando a abertura ou fechamento da caixa de ajustes de busca, verificando qual é o tipo de busca setado atualmente (amigos ou anuncios), para exibição de ajustes personalizados.
     */
    void on_Button_adjust_clicked();            // Button ajust (filters -> Ads/friends)

    /**
     * @addindex void on_command_title_clicked()
     * Quando o botão de ordenação por titulo é clicado (nos ajustes de busca por anuncios) esta função é chamada, realizando a alternação do modo de busca para ordenado por titulo, verificando se deverá ser crescente ou decrescente, por fim realizando a chamada da função de busca novamente.
     */
    void on_command_title_clicked();
    /**
     * @addindex void on_command_category_clicked()
     * Quando o botão de ordenação por categoria é clicado (nos ajustes de busca por anuncios) esta função é chamada, realizando a alternação do modo de busca para ordenado por categoria, verificando se deverá ser crescente ou decrescente, por fim realizando a chamada da função de busca novamente.
     */
    void on_command_category_clicked();
    /**
     * @addindex void on_command_price_clicked()
     * Quando o botão de ordenação por preço é clicado (nos ajustes de busca por anuncios) esta função é chamada, realizando a alternação do modo de busca para ordenado por preço, verificando se deverá ser crescente ou decrescente, por fim realizando a chamada da função de busca novamente.
     */
    void on_command_price_clicked();
    /**
     * @addindex void on_command_rating_clicked()
     * Quando o botão de ordenação por rating é clicado (nos ajustes de busca por anuncios) esta função é chamada, realizando a alternação do modo de busca para ordenado por rating, verificando se deverá ser crescente ou decrescente, por fim realizando a chamada da função de busca novamente.
     */
    void on_command_rating_clicked();
    /**
     * @addindex void on_command_city_clicked()
     * Quando o botão de ordenação por cidade é clicado (nos ajustes de busca por anuncios) esta função é chamada, realizando a alternação do modo de busca para ordenado por cidade, verificando se deverá ser crescente ou decrescente, por fim realizando a chamada da função de busca novamente.
     */
    void on_command_city_clicked();
    /**
     * @addindex void on_command_quantity_clicked()
     * Quando o botão de ordenação por quantidade é clicado (nos ajustes de busca por anuncios) esta função é chamada, realizando a alternação do modo de busca para ordenado por quantidade, verificando se deverá ser crescente ou decrescente, por fim realizando a chamada da função de busca novamente.
     */
    void on_command_quantity_clicked();

    /**
     * @addindex void on_command_rating_2_clicked()
     * Quando o botão de ordenação por rating é clicado (nos ajustes de busca por amigos) esta função é chamada, realizando a alternação do modo de busca para ordenado por rating, verificando se deverá ser crescente ou decrescente, por fim realizando a chamada da função de busca novamente.
     */
    void on_command_rating_2_clicked();
    /**
     * @addindex void on_command_name_clicked()
     * Quando o botão de ordenação por nome é clicado (nos ajustes de busca por amigos) esta função é chamada, realizando a alternação do modo de busca para ordenado por nome, verificando se deverá ser crescente ou decrescente, por fim realizando a chamada da função de busca novamente.
     */
    void on_command_name_clicked();
    /**
     * @addindex void on_command_city_2_clicked()
     * Quando o botão de ordenação por cidade é clicado (nos ajustes de busca por amigos) esta função é chamada, realizando a alternação do modo de busca para ordenado por cidade, verificando se deverá ser crescente ou decrescente, por fim realizando a chamada da função de busca novamente.
     */
    void on_command_city_2_clicked();

private:
    Ui::UserApp *ui;

    //Actual User
    User CurrentUser;

    //Pages Widget
    InitialPage *PageZero;
    EditProfile PageOne;
    FriendsPage *PageTwo;
    HistoricPage *PageThree;
    Advertise PageFour;
    SearchResult *PageResult;

    //King of search
    bool SearchType; // 1 to Friends - 0 to Advertise
    bool ToolActive; // Filters tools Active or Not Active

    //---------------Variables of searchs----------------
    string SearchText;

    //-----------Ads Search
    string A_category_text;  // search for category
    string A_state_text;     // for state
    bool A_all;         // for all people
    bool A_friends;     // only friends
    bool A_friends_of;  // only friends of friends
    bool A_title;       // order by title
    bool A_category;    // order by category
    bool A_price;       // order by price
    bool A_rating;      // order by rating
    bool A_city;        // order by city
    bool A_quantity;    // order by quantity
    bool A_by_;         // order in ascendet = 1 or descendet=0

    //---------Friends Search
    string F_state;     // search for state
    bool F_all;         // for all people
    bool F_friends;      // only friends
    bool F_friends_of;   // only friends of friends
    bool F_byRating;    // order by rating
    bool F_byName;      // order by name
    bool F_byCity;      // order by city
    bool F_by_;         // order in ascendet = 1 or descendet=0
    //------------------------------------------------------

    //Methods
    /**
     * @addindex void SetPropertyUserCurrent()
     * Esta função é responsável por setar todos os campos de informações do usuario na pagina criada por UserApp.cpp e UserApp_ui.cpp
     */
    void SetPropertyUserCurrent();      //Set the property of the actual user
    /**
     * @addindex bool getFields_Search_Friends()
     * Esta função realiza a captação de todos os dados passados pelo usuario para pesquisa por amigos
     * @return: Caso o campo de busca não esteja vazio é retornado true, caso contrario é retornado false.
     */
    bool getFields_Search_Friends();    // get the fields of search for Friends
    /**
     * @addindex bool getFields_Search_Ads()
     * Esta função realiza a captação de todos os dados passados pelo usuario para pesquisa por anuncios
     * @return : Caso o campo de busca não esteja vazio é retornado true, caso contrario é retornado false.
     */
    bool getFields_Search_Ads();        // get the fields of search for Ads
    //Return true if search text is not empty
};

#endif // USERAPP_H
