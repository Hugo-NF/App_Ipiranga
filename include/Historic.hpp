
#ifndef APP_IPIRANGA_HISTORIC_HPP
#define APP_IPIRANGA_HISTORIC_HPP

#include "User.hpp"
#include "Ads.hpp"

using namespace std;
/**
 * Class Historic
 * Classe responsável por definir os atributos de uma entrada de histórico, bem como metodos de inserção e remoção
 * @Assertivas_estruturais: Todas os metodos dessa classe realizam operações atômicas, consistentes, isoladas e duráveis(ACID).Propriedade herdada do sqlite.
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
     * void createTable(sqlite3 *);
     * @Assertivas_entrada: O parâmetro sqlite3 * já possuirá uma conexão aberta com a DB.
     * Cria, de forma condicional, uma nova tabela na DB para representar a classe Historic
     */
    static void createTable(sqlite3 *);
    /**
     * void deleteTable(sqlite3 *);
     * @Assertivas_entrada: O parâmetro sqlite3 * já possuirá uma conexão aberta com a DB.
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

    /**
     * void cleanTable();
     * Limpa todos os registros da classe Historic.
     */
    static void cleanTable();
    /**
     * void insertOperation(sqlite3*, Historic*);
     * Define a interface de inserção com a DB
     * @Assertivas_entrada: O parametro sqlite3* já possuirá uma conexão aberta com a DB. Historic* possuirá um objeto com todos os campos setados
     * @Argumento1: Objeto da classe sqlite3 que fornecerá a conexão com o DB
     * @Argumento2: Objeto da classe Historic que fornecerá o registro a ser inserido
     */
    void insertOperation(sqlite3 *, Historic *);
    /**
     * void evaluate(Historic *, unsigned int);
     * Metodo para avaliação de uma operação no historico
     * @Argumento1: Objeto Historic com a operação a ser avaliada
     * @Argumento2: inteiro com o id do usuário avaliador
     * @Assetivas_saida: O rating do usuário avaliado será atualizado em todos os seus registros
     */
    static void evaluate(Historic *, unsigned int, unsigned int);
    /**
     * vector<Historic *> retrieveHistoric(unsigned int, bool, bool);
     * Metodo para a recuperação do historico de um usuario
     * @Argumento1: inteiro com o id do usuário
     * @Argumento2: booleano indicando a requisição do historico como vendedor
     * @Argumento3: booleano indicando a requisição do historico como comprador
     * @Obs: Se os argumentos 2 e 3 forem iguais entre si, será retornado o histórico inteiro
     * @return conteiner vector da classe Historic contendo as entradas de histórico do usuário
     */
    static vector<Historic *> retrieveHistoric(unsigned int, bool, bool);

};


#endif //APP_IPIRANGA_HISTORIC_HPP
