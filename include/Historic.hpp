
#ifndef APP_IPIRANGA_HISTORIC_HPP
#define APP_IPIRANGA_HISTORIC_HPP

#include "User.hpp"
#include "Ads.hpp"

using namespace std;
/**
 * @abstract Class Historic\n
 * Classe responsável por definir os atributos de uma entrada de histórico, bem como metodos de inserção e remoção\n
 * @note: Todas os metodos dessa classe realizam operações atômicas, consistentes, isoladas e duráveis(ACID). Propriedade herdada do sqlite.@endabstract
 */
class Historic{
private:
    unsigned int id;
    unsigned int sellerId;
    string sellerUsername;
    unsigned int buyerId;
    string buyerUsername;
    unsigned int selleRating;
    unsigned int buyeRating;
    unsigned int adId;
    string adTitle;
    unsigned int quantity;
    string category;
    double price;
    string date;

    /**
     * @addindex void createTable(sqlite3 *);
     * @warning  : O parâmetro sqlite3 * já possuirá uma conexão aberta com a DB.
     * Cria, de forma condicional, uma nova tabela na DB para representar a classe Historic
     */
    static void createTable(sqlite3 *);
    /**
     * @addindex void deleteTable(sqlite3 *);
     * @warning  : O parâmetro sqlite3 * já possuirá uma conexão aberta com a DB.
     * Deleta, de forma condicional, a tabela que representa a classe Historic
     */
    static void deleteTable(sqlite3 *);


public:
    Historic(){}
    Historic(unsigned int id){
        this->id = id;
    }
    ~Historic(){}
    unsigned int getId();
    void setSellerId(unsigned int);
    unsigned int getSellerId();
    void setSellerUsername(string);
    string getSellerUsername();
    void setBuyerId(unsigned int);
    unsigned int getBuyerId();
    void setBuyerUsername(string);
    string getBuyerUsername();
    void setSellerRating(unsigned int);
    unsigned int getSellerRating();
    void setBuyerRating(unsigned int);
    unsigned int getBuyerRating();
    void setAdId(unsigned int);
    unsigned int getAdId();
    void setAdTitle(string);
    string getAdTitle();
    void setQuantity(unsigned int);
    unsigned int getQuantity();
    void setPrice(double);
    double getPrice();
    void setDate(string);
    string getDate();
    unsigned int getUserRating(unsigned int);
    string getCategory();
    void setCategory(string);
    static void deallocateHistoric(vector<Historic *>);

    /**
     * @addindex void cleanTable();
     * Limpa todos os registros da classe Historic.
     */
    static void cleanTable();
    /**
     * @addindex void insertOperation(sqlite3*, Historic*);
     * Define a interface de inserção com a DB
     * @warning  : O parametro sqlite3* já possuirá uma conexão aberta com a DB. Historic* possuirá um objeto com todos os campos setados
     * @arg 1: Objeto da classe sqlite3 que fornecerá a conexão com o DB
     * @arg 2: Objeto da classe Historic que fornecerá o registro a ser inserido
     */
    void insertOperation(sqlite3 *, Historic *);
    /**
     * @addindex void evaluate(Historic *, unsigned int);
     * Metodo para avaliação de uma operação no historico
     * @arg 1: Objeto Historic com a operação a ser avaliada
     * @arg 2: inteiro com o id do usuário avaliador
     * @note: O rating do usuário avaliado será atualizado em todos os seus registros
     */
    static void evaluate(Historic *, unsigned int, unsigned int);
    /**
     * @addindex vector<Historic *> retrieveHistoric(unsigned int, bool, bool);
     * Metodo para a recuperação do historico de um usuario
     * @arg 1: inteiro com o id do usuário
     * @arg 2: booleano indicando a requisição do historico como vendedor
     * @arg 3: booleano indicando a requisição do historico como comprador
     * @note: Se os argumentos 2 e 3 forem iguais entre si e iguais a true, será retornado todo o historico do usuário.\n
     * @note: Se os argumentos 2 e 3 forem iguais entre si e iguais a false, será retornado o histórico de todo o sistema
     * @return conteiner vector da classe Historic contendo as entradas de histórico do usuário
     */
    static vector<Historic *> retrieveHistoric(unsigned int, bool, bool);

};


#endif //APP_IPIRANGA_HISTORIC_HPP
