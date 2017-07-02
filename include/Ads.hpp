#ifndef APP_IPIRANGA_ADS_HPP
#define APP_IPIRANGA_ADS_HPP

#include "User.hpp"

using namespace std;
/**
 * Class Ads
 * @abstract :Todas os metodos dessa classe realizam operações atômicas, consistentes, isoladas e duráveis(ACID).Propriedade herdada do sqlite.\n
 * Responsável por definir os atributos de um anuncio e definir as operações de inserção e atualização de um anuncio.@endabstract
 */

class Ads{
private:
    unsigned int id;
    string title;
    string date;
    string category;
    string description;
    string city;
    string state;
    string sellerUsername;
    double sellerRating;
    unsigned int sellerId;
    unsigned int amount;
    double price;

    /**
     * void createTable(sqlite3 *);
     * @warning : O parâmetro sqlite3 * já possuirá uma conexão aberta com a DB.
     * @details : Cria, de forma condicional, uma nova tabela na DB para representar a classe Ads
     */
    static void createTable(sqlite3 *);
    /**
     * void deleteTable(sqlite3 *);
     * @warning : O parâmetro sqlite3 * já possuirá uma conexão aberta com a DB.
     * @details : Deleta, de forma condicional, a tabela que representa a classe Ads
     */
    static void deleteTable(sqlite3 *);

public:
    Ads(unsigned int id){
        this->id = id;
    }
    Ads(){}
    ~Ads(){}
    unsigned int getId();
    void setTitle(string);
    string getTitle();
    void setDate(string);
    string getDate();
    void setCategory(string);
    string getCategory();
    void setDescription(string);
    string getDescription();
    void setCity(string);
    string getCity();
    void setState(string);
    string getState();
    void setSellerUsername(string);
    string getSellerUsername();
    void setSellerRating(double);
    double getSellerRating();
    void setSellerId(unsigned int);
    unsigned int getSellerId();
    void setAmount(unsigned int);
    unsigned int getAmount();
    void setPrice(double);
    double getPrice();
    static void deallocateAds(vector<Ads *>);

    /**
     * void cleanTable();
     * @details: Limpa todos os registros da classe Ads.
     */
    static void cleanTable();
    /**
     * void insertOperation(sqlite3*, Ads*);
     * @abstract: Define a interface de inserção com a DB @endabstract
     * @arg : 1. Objeto da classe sqlite3 que fornecerá a conexão com o DB
     * @arg : 2. Objeto da classe Ads que fornecerá o registro a ser inserido
     * @warning : O parametro sqlite3* já possuirá uma conexão aberta com a DB. Ads* possuirá um objeto com todos os campos setados
     * @warning : O ponteiro para a classe Ads estará setado para um objeto válido
     */
    void insertOperation(sqlite3 *, Ads *);
    /**
     * void updateOperation(sqlite3*, Ads*);
     * @abstract: Define a interface de atualização com a DB @endabstract
     * @arg : 1. Objeto da classe sqlite3 que fornecerá a conexão com o DB
     * @arg : 2. Objeto da classe Ads que fornecerá o registro a ser atualizado
     * @warning : O parametro sqlite3* já possuirá uma conexão aberta com a DB. Ads* possuirá um objeto com todos os campos setados
     * @warning : O ponteiro para a classe Ads estará setado para um objeto válido
     */
    void updateOperation(sqlite3 *, Ads *);
};


#endif //APP_IPIRANGA_ADS_HPP
