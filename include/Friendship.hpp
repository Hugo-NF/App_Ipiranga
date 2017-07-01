
#ifndef APP_IPIRANGA_FRIENDSHIP_HPP
#define APP_IPIRANGA_FRIENDSHIP_HPP
#define FRIEND_REPEATED "You have already added this user as a friend"

#include "User.hpp"

/**
 * Class Friendship
 * @Assertivas_estruturais: Todas os metodos dessa classe realizam operações atômicas, consistentes, isoladas e duráveis(ACID).Propriedade herdada do sqlite.
 * Classe responsável por definir os nós de amizade entre contas de usuários
 */
class Friendship{
private:
    unsigned int id;
    unsigned int idUser1;
    unsigned int idUser2;

    /**
     * void createTable(sqlite3 *);
     * @Assertivas_entrada: O parâmetro sqlite3 * já possuirá uma conexão aberta com a DB.
     * Cria, de forma condicional, uma nova tabela na DB para representar a classe Friendship
     */
    static void createTable(sqlite3 *);
    /**
     * void createTable(sqlite3 *);
     * @Assertivas_entrada: O parâmetro sqlite3 * já possuirá uma conexão aberta com a DB.
     * Deleta, de forma condicional, a tabela que representa a classe Friendship
     */
    static void deleteTable(sqlite3 *);

public:
    Friendship(){}
    Friendship(unsigned int id){
        this->id = id;
    }
    ~Friendship(){}

    unsigned int getId();
    void setUser1Id(unsigned int);
    unsigned int getUser1Id();
    void setUser2Id(unsigned int);
    unsigned int getUser2Id();

    /**
     * void cleanTable();
     * Limpa todos os registros da classe Friendship
     */
    static void cleanTable();
    /**
     * void addAsFriend(unsigned int, unsigned int);
     * Metodo para adição de novos amigos
     * @Argumento1: inteiro com o id do usuário que está adicionando
     * @Argumento2: inteiro com o id do usuário que está sendo adicionado
     * @throws: @InvalidAdd: Metodo pode lançar mensagem de repetição de amizade ou tentativa de auto-adicionar
     */
    static void addAsFriend(unsigned int, unsigned int);
    /**
     * void removeFriend(unsigned int, unsigned int);
     * Metodo para remoção de amigos
     * @Argumento1: inteiro com o id do usuário que está removendo
     * @Argumento2: inteiro com o id do usuário que está sendo removido
     */
    static void removeFriend(unsigned int, unsigned int);
    /**
     * void getFriendsIds(sqlite3 *, unsigned int);
     * Metodo para obtenção dos id's de todos os amigos de um usuário
     * @Assertivas_entrada: O parametro sqlite3* já possuirá uma conexão aberta com a DB.
     * @Argumento1: Objeto sqlite3* com a conexão a DB
     * @Argumento2: inteiro com o id do usuário
     */
    static vector<unsigned int> getFriendsIds(sqlite3 *, unsigned int);
    /**
    * void getFriendsIds(sqlite3 *, unsigned int);
    * Metodo para obtenção dos id's de todos os amigos de amigos sde um usuário
    * @Assertivas_entrada: O parametro sqlite3* já possuirá uma conexão aberta com a DB.
    * @Argumento1: Objeto sqlite3* com a conexão a DB
    * @Argumento2: inteiro com o id do usuário
    */
    static vector<unsigned int> getFriendsofFriendsIds(sqlite3 *, unsigned int);

    /**
     * vector<unsigned int> diff (vector<unsigned int>, vector<unsigned int>, int, int)
     * @Assertivas_entrada: os inteiros indicarão corretamente o tamanho dos conteineres vector
     * @Argumentos 1 e 2: vectors os quais deseja-se a diferença
     * @Argumentos 3 e 4: inteiros com os tamanhos dos vectors 1 e 2, respectivamente.
     * @return : conteiner vector com o resultado da diferença
     */
    static vector<unsigned int> diff(vector<unsigned int>, vector<unsigned int>, int, int);
    /**
     * int binSearch(int, vector<unsigned int>, int , int);
     * @Assertivas de entrada: os parametros int indicarão corretamente quais são os extremos do conteiner vector
     * @Argumento1: Elemento a ser buscado
     * @Argumento2: conteiner vector onde serão procurados os elementos
     * @Argumento3: Indice do extremo esquerdo do vector
     * @Argumento4: Indice do extremo direito do vector
     * @return: Inteiro indicando o indice onde se encontra o elemento, ou -1 caso não encontre.
     */
    static int binSearch (int, vector<unsigned int>, int, int);

};

#endif //APP_IPIRANGA_FRIENDSHIP_HPP
