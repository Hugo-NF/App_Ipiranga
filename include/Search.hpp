#ifndef APP_IPIRANGA_SEARCH_HPP
#define APP_IPIRANGA_SEARCH_HPP

#include "User.hpp"
#define QUERY_INVALID "Invalid search parameters"

/**
 * Class Search
 * Responsável por definir a interface de buscas entre a view e a DB.
 * Define atributos que serão parametros de busca, bem como os metodos de busca.
 * @Assertivas_estruturais: Todas os metodos dessa classe realizam operações atômicas, consistentes, isoladas e duráveis(ACID).Propriedade herdada do sqlite.
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
    bool toggleBandFilter;
    string bandFilterCriteria;
    double bandFilterMin;
    double bandFilterMax;
    bool toggleFriends;
    bool toggleFriendsofFriends;
public:
    Search(){}
    Search(unsigned int userID){
        this->currentUserID = userID;
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
    void enablebandFilter(bool);
    bool bandFilterEnabled();
    void setBandFilterCriteria(string);
    string getBandFilterCriteria();
    void setMinValue(double);
    void setMaxValue(double);
    double getMinValue();
    double getMaxValue();
    void enableFriendsSearch(bool);
    bool friendsSearchEnabled();
    void enableFriendsofFriendsSearch(bool);
    bool friendsOfFriendsSearchEnabled();

    /**
     * vector<User *> userSearch(Search *);
     * Metodo para a realização de buscas por usuário
     * @Assertivas_entrada: O objeto da classe Search terá ao menos os atributos booleanos definidos
     * @Argumento1: Objeto Search com os parametros da busca a ser realizada
     * @Retorno: conteiner vector da classe User com os usuários retornados da busca
     */
    static vector<User *> userSearch(Search *);
    /**
     * vector<User *> adsSearch(Search *);
     * Metodo para a realização de buscas por anúncios
     * @Assertivas_entrada: O objeto da classe Search terá ao menos os atributos booleanos definidos
     * @Argumento1: Objeto Search com os parametros da busca a ser realizada
     * @Retorno: conteiner vector da classe Ads com os Anúncios retornados da busca
     */
    static vector<Ads *> adsSearch(Search *);

};
#endif //APP_IPIRANGA_SEARCH_HPP
