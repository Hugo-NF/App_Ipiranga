
#ifndef APP_IPIRANGA_CALLBACKS_HPP
#define APP_IPIRANGA_CALLBACKS_HPP

#include "User.hpp"
#include "Ads.hpp"
#include "Historic.hpp"
#include "Friendship.hpp"
#include <ctime>

using namespace std;

/**
 * Class Callbacks
 * Classe responsável por definir métodos estáticos para mapeamento dos retornos da DB dentro das suas classes.
 * @Assertivas_estruturais: Todas os metodos dessa classe realizam operações atômicas, consistentes, isoladas e duráveis(ACID).Propriedade herdada do sqlite.
 */

class Callbacks {
public:
    /**
     * int userCallback(void *, int, char **, char **);
     * Define o mapeamento para uma conta de usuário
     * @Argumento1: ponteiro void* para armazenamento dos dados retornados pela DB
     * @Argumento2: inteiro com a quantidade de dados retornados, equivalente a numero de campos/registro
     * @Argumento3: ponteiro char** com os dados retornados pela DB
     * @Argumento4: ponteiro char** para os nomes dos campos retornados pela DB
     * @Retorno: inteiro 0 de completude da função
     */
    static int userCallback(void *, int, char **, char **);
    /**
     * int adsCallback(void *, int, char **, char **);
     * Define o mapeamento para uma registro de anuncio
     * @Argumento1: ponteiro void* para armazenamento dos dados retornados pela DB
     * @Argumento2: inteiro com a quantidade de dados retornados, equivalente a numero de campos/registro
     * @Argumento3: ponteiro char** com os dados retornados pela DB
     * @Argumento4: ponteiro char** para os nomes dos campos retornados pela DB
     * @Retorno: inteiro 0 de completude da função
     */
    static int adsCallback(void *, int, char **, char **);
    /**
     * int historicCallback(void *, int, char **, char **);
     * Define o mapeamento para uma entrada do histórico
     * @Argumento1: ponteiro void* para armazenamento dos dados retornados pela DB
     * @Argumento2: inteiro com a quantidade de dados retornados, equivalente a numero de campos/registro
     * @Argumento3: ponteiro char** com os dados retornados pela DB
     * @Argumento4: ponteiro char** para os nomes dos campos retornados pela DB
     * @Retorno: inteiro 0 de completude da função
     */
    static int historicCallback(void *, int, char **, char **);
    /**
     * int friendshipCallback(void *, int, char **, char **);
     * Define o mapeamento para um nó de amizade
     * @Argumento1: ponteiro void* para armazenamento dos dados retornados pela DB
     * @Argumento2: inteiro com a quantidade de dados retornados, equivalente a numero de campos/registro
     * @Argumento3: ponteiro char** com os dados retornados pela DB
     * @Argumento4: ponteiro char** para os nomes dos campos retornados pela DB
     * @Retorno: inteiro 0 de completude da função
     */
    static int friendshipCallback(void *, int, char **, char **);
    /**
     * int averageCallback(void *, int, char **, char **);
     * Define o mapeamento para a operação de agregação AVG()
     * @Argumento1: ponteiro void* para armazenamento dos dados retornados pela DB
     * @Argumento2: inteiro com a quantidade de dados retornados, equivalente a numero de campos/registro
     * @Argumento3: ponteiro char** com os dados retornados pela DB
     * @Argumento4: ponteiro char** para os nomes dos campos retornados pela DB
     * @Retorno: inteiro 0 de completude da função
     */
    static int averageCallback(void *, int, char **, char **);
    /**
     * int countCallback(void *, int, char **, char **);
     * Define o mapeamento para a operação de agregação COUNT()
     * @Argumento1: ponteiro void* para armazenamento dos dados retornados pela DB
     * @Argumento2: inteiro com a quantidade de dados retornados, equivalente a numero de campos/registro
     * @Argumento3: ponteiro char** com os dados retornados pela DB
     * @Argumento4: ponteiro char** para os nomes dos campos retornados pela DB
     * @Retorno: inteiro 0 de completude da função
     */
    static int countCallback(void *, int, char **, char **);
    /**
     * int sumCallback(void *, int, char **, char **);
     * Define o mapeamento para a operação de agregação SUM()
     * @Argumento1: ponteiro void* para armazenamento dos dados retornados pela DB
     * @Argumento2: inteiro com a quantidade de dados retornados, equivalente a numero de campos/registro
     * @Argumento3: ponteiro char** com os dados retornados pela DB
     * @Argumento4: ponteiro char** para os nomes dos campos retornados pela DB
     * @Retorno: inteiro 0 de completude da função
     */
    static int sumCallback(void *, int, char **, char **);
    /**
     * Define uma função estática para a captura formatada da data corrente.
     * @Retorno: String contendo a data atual formatada
     */
    static string getCurrentDate();
    static void deleteVector(vector<class T>);
};

#endif //APP_IPIRANGA_CALLBACKS_HPP
