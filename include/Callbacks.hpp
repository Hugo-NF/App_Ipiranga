
#ifndef APP_IPIRANGA_CALLBACKS_HPP
#define APP_IPIRANGA_CALLBACKS_HPP

#include "User.hpp"
#include "Ads.hpp"
#include "Historic.hpp"
#include "Friendship.hpp"
#include <ctime>

using namespace std;

/**
 * @abstract Class Callbacks\n
 * Classe responsável por definir métodos estáticos para mapeamento dos retornos da DB dentro das suas classes.\n
 * Todas os metodos dessa classe realizam operações atômicas, consistentes, isoladas e duráveis(ACID). Propriedade herdada do sqlite.@endabstract
 */

class Callbacks {
public:
    /**
     * @addindex int userCallback(void *, int, char **, char **);
     * @abstract Define o mapeamento para uma conta de usuário @endabstract
     * @arg  1: ponteiro void* para armazenamento dos dados retornados pela DB
     * @arg  2: inteiro com a quantidade de dados retornados, equivalente a numero de campos/registro
     * @arg  3: ponteiro char** com os dados retornados pela DB
     * @arg  4: ponteiro char** para os nomes dos campos retornados pela DB
     * @return : inteiro indicando a condição de retorno da função. Essa condição é enviada pelo sqlite e é coincidente com suas macros.
     */
    static int userCallback(void *, int, char **, char **);
    /**
     * @addindex int adsCallback(void *, int, char **, char **);
     * @abstract Define o mapeamento para uma registro de anuncio @endabstract
     * @arg  1: ponteiro void* para armazenamento dos dados retornados pela DB
     * @arg  2: inteiro com a quantidade de dados retornados, equivalente a numero de campos/registro
     * @arg  3: ponteiro char** com os dados retornados pela DB
     * @arg  4: ponteiro char** para os nomes dos campos retornados pela DB
     * @return : inteiro indicando a condição de retorno da função. Essa condição é enviada pelo sqlite e é coincidente com suas macros.
     */
    static int adsCallback(void *, int, char **, char **);
    /**
     * @addindex int historicCallback(void *, int, char **, char **);
     * @abstract Define o mapeamento para uma entrada do histórico @endabstract
     * @arg  1: ponteiro void* para armazenamento dos dados retornados pela DB
     * @arg  2: inteiro com a quantidade de dados retornados, equivalente a numero de campos/registro
     * @arg  3: ponteiro char** com os dados retornados pela DB
     * @arg  4: ponteiro char** para os nomes dos campos retornados pela DB
     * @return : inteiro indicando a condição de retorno da função. Essa condição é enviada pelo sqlite e é coincidente com suas macros.
     */
    static int historicCallback(void *, int, char **, char **);
    /**
     * @addindex int friendshipCallback(void *, int, char **, char **);
     * @abstract Define o mapeamento para um nó de amizade @endabstract
     * @arg  1: ponteiro void* para armazenamento dos dados retornados pela DB
     * @arg  2: inteiro com a quantidade de dados retornados, equivalente a numero de campos/registro
     * @arg  3: ponteiro char** com os dados retornados pela DB
     * @arg  4: ponteiro char** para os nomes dos campos retornados pela DB
     * @return : inteiro indicando a condição de retorno da função. Essa condição é enviada pelo sqlite e é coincidente com suas macros.
     */
    static int friendshipCallback(void *, int, char **, char **);
    /**
     * @addindex int averageCallback(void *, int, char **, char **);
     * @abstract Define o mapeamento para a operação de agregação AVG() @endabstract
     * @arg  1: ponteiro void* para armazenamento dos dados retornados pela DB
     * @arg  2: inteiro com a quantidade de dados retornados, equivalente a numero de campos/registro
     * @arg  3: ponteiro char** com os dados retornados pela DB
     * @arg  4: ponteiro char** para os nomes dos campos retornados pela DB
     * @return : inteiro indicando a condição de retorno da função. Essa condição é enviada pelo sqlite e é coincidente com suas macros.
     */
    static int averageCallback(void *, int, char **, char **);
    /**
     * @addindex int countCallback(void *, int, char **, char **);
     * @abstract Define o mapeamento para a operação de agregação COUNT() @endabstract
     * @arg  1: ponteiro void* para armazenamento dos dados retornados pela DB
     * @arg  2: inteiro com a quantidade de dados retornados, equivalente a numero de campos/registro
     * @arg  3: ponteiro char** com os dados retornados pela DB
     * @arg  4: ponteiro char** para os nomes dos campos retornados pela DB
     * @return : inteiro indicando a condição de retorno da função. Essa condição é enviada pelo sqlite e é coincidente com suas macros.
     */
    static int countCallback(void *, int, char **, char **);
    /**
     * @addindex int sumCallback(void *, int, char **, char **);
     * @abstract Define o mapeamento para a operação de agregação SUM() @endabstract
     * @arg  1: ponteiro void* para armazenamento dos dados retornados pela DB
     * @arg  2: inteiro com a quantidade de dados retornados, equivalente a numero de campos/registro
     * @arg  3: ponteiro char** com os dados retornados pela DB
     * @arg  4: ponteiro char** para os nomes dos campos retornados pela DB
     * @return : inteiro indicando a condição de retorno da função. Essa condição é enviada pelo sqlite e é coincidente com suas macros.
     */
    static int sumCallback(void *, int, char **, char **);
    /**
     * @abstract Define uma função estática para a captura formatada da data corrente. @endchapter
     * @return : String contendo a data atual formatada
     */
    static string getCurrentDate();

    static void deallocateUsers(vector<User *>);
    static void deallocateAds(vector<Ads *>);
    static void deallocateHistoric(vector<Historic *>);
    static void deallocateFriendship(vector<Friendship *>);
};

#endif //APP_IPIRANGA_CALLBACKS_HPP
