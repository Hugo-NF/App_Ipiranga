#ifndef APP_IPIRANGA_SEARCH_HPP
#define APP_IPIRANGA_SEARCH_HPP

#include "User.hpp"
#define QUERY_INVALID "Invalid search parameters"

/**
 * @abstract Class Search\n
 * Responsável por definir a interface de buscas entre a view e a DB.\n
 * Define atributos que serão parametros de busca, bem como os metodos de busca.\n
 * @note: Todas os metodos dessa classe realizam operações atômicas, consistentes, isoladas e duráveis(ACID). Propriedade herdada do sqlite.@endabstract
 */

class Search {
private:
    unsigned int currentUserID;
    string table;
    bool toggleText;
    string textSearch;
    bool toggleFilters;
    vector<string> criterias;
    vector<string> keywords;
    bool toggleOrdernation;
    string orderBy;
    bool orderSequence; //true - ASC : false - DESC
    bool toggleFriends;
    bool toggleFriendsofFriends;
public:
    Search(){}
    Search(unsigned int userID){
        this->currentUserID = userID;
        this->toggleText = false;
        this->toggleFilters = false;
        this->toggleOrdernation = true;
        this->orderBy = "id";
        this->orderSequence = false;
        this->toggleFriends = false;
        this->toggleFriendsofFriends = false;
    }
    ~Search(){}
    unsigned int getCurrentUserID();
    void enableTextSearch(bool);
    bool textSearchEnabled();
    void setText(string);
    string getText();
    void enableFilters(bool);
    bool filtersEnabled();
    void setCriterias(vector<string>);
    vector<string> getCriterias();
    void setKeywords(vector<string>);
    vector<string> getKeywords();
    void enableOrdenation(bool);
    bool ordenationEnabled();
    void setOrderBy(string);
    string getOrderBy();
    void setOrderingSequence(bool);
    bool getOrderingSequence();
    void enableFriendsSearch(bool);
    bool friendsSearchEnabled();
    void enableFriendsofFriendsSearch(bool);
    bool friendsOfFriendsSearchEnabled();

    /**
     * @addindex vector<User *> userSearch(Search *);
     * Metodo para a realização de buscas por usuário
     * @warning : O objeto da classe Search terá ao menos os atributos booleanos definidos
     * @arg 1: Objeto Search com os parametros da busca a ser realizada
     * @return: conteiner vector da classe User com os usuários retornados da busca
     */
    static vector<User *> userSearch(Search *);
    /**
     * @addindex vector<User *> adsSearch(Search *);
     * Metodo para a realização de buscas por anúncios
     * @warning : O objeto da classe Search terá ao menos os atributos booleanos definidos
     * @arg 1: Objeto Search com os parametros da busca a ser realizada
     * @return: conteiner vector da classe Ads com os Anúncios retornados da busca
     */
    static vector<Ads *> adsSearch(Search *);

};
#endif //APP_IPIRANGA_SEARCH_HPP
