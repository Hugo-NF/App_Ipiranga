
#ifndef APP_IPIRANGA_FRIENDSHIP_HPP
#define APP_IPIRANGA_FRIENDSHIP_HPP
#define FRIEND_REPEATED "You have already added this user as a friend"

#include "User.hpp"

/**
 * @abstract Class Friendship
 * @note: Todas os metodos dessa classe realizam operações atômicas, consistentes, isoladas e duráveis(ACID). Propriedade herdada do sqlite.\n
 * Classe responsável por definir os nós de amizade entre contas de usuários. @endabstract
 */
class Friendship{
private:
    unsigned int id;
    unsigned int idUser1;
    unsigned int idUser2;

    /**
     * @addindex void createTable(sqlite3 *);
     * @abstract Cria, de forma condicional, uma nova tabela na DB para representar a classe Friendship @endabstract
     * @warning : O parâmetro sqlite3 * já possuirá uma conexão aberta com a DB.
     */
    static void createTable(sqlite3 *);
    /**
     * @addindex void createTable(sqlite3 *);
     * @abstract Deleta, de forma condicional, a tabela que representa a classe Friendship @endabstract
     * @warning : O parametro sqlite3* já possuirá uma conexão aberta com a DB.
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
     * @addindex void cleanTable();
     * @abstract Limpa todos os registros da classe Friendship @endabstract
     */
    static void cleanTable();
    /**
     * @addindex void addAsFriend(unsigned int, unsigned int);
     * @abstract Metodo para adição de novos amigos @endchapter
     * @arg 1: inteiro com o id do usuário que está adicionando
     * @arg 2: inteiro com o id do usuário que está sendo adicionado
     * @throws : Metodo pode lançar mensagem de repetição de amizade ou tentativa de auto-adicionar
     */
    static void addAsFriend(unsigned int, unsigned int);
    /**
     * @addindex void removeFriend(unsigned int, unsigned int);
     * @abstract Metodo para remoção de amigos @endabstract
     * @arg 1: inteiro com o id do usuário que está removendo
     * @arg 2: inteiro com o id do usuário que está sendo removido
     */
    static void removeFriend(unsigned int, unsigned int);
    /**
     * @addindex void getFriendsIds(sqlite3 *, unsigned int);
     * @abstract Metodo para obtenção dos id's de todos os amigos de um usuário @endabstract
     * @arg 1: Objeto sqlite3* com a conexão a DB
     * @arg 2: inteiro com o id do usuário
     * @warning : O parametro sqlite3* já possuirá uma conexão aberta com a DB.
     */
    static vector<unsigned int> getFriendsIds(sqlite3 *, unsigned int);
    /**
    * @addindex void getFriendsIds(sqlite3 *, unsigned int);
    * @abstract Metodo para obtenção dos id's de todos os amigos de amigos sde um usuário @endabstract
    * @arg 1: Objeto sqlite3* com a conexão a DB
    * @arg 2: inteiro com o id do usuário
    * @warning : O parametro sqlite3* já possuirá uma conexão aberta com a DB.
    */
    static vector<unsigned int> getFriendsofFriendsIds(sqlite3 *, unsigned int);

    /**
     * @addindex vector<unsigned int> diff (vector<unsigned int>, vector<unsigned int>, int, int)
     * @arg 1 e 2: vectors os quais deseja-se a diferença
     * @arg 3 e 4: inteiros com os tamanhos dos vectors 1 e 2, respectivamente.
     * @warning : os inteiros indicarão corretamente o tamanho dos conteineres vector
     * @return : conteiner vector com o resultado da diferença
     */
    static vector<unsigned int> diff(vector<unsigned int>, vector<unsigned int>, int, int);
    /**
     * @addindex int binSearch(int, vector<unsigned int>, int , int);
     * @arg 1: Elemento a ser buscado
     * @arg 2: conteiner vector onde serão procurados os elementos
     * @arg 3: Indice do extremo esquerdo do vector
     * @arg 4: Indice do extremo direito do vector
     * @warning : os parametros int indicarão corretamente quais são os extremos do conteiner vector
     * @return : Inteiro indicando o indice onde se encontra o elemento, ou -1 caso não encontre.
     */
    static int binSearch (int, vector<unsigned int>, int, int);

};

#endif //APP_IPIRANGA_FRIENDSHIP_HPP
