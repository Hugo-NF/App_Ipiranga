#ifndef APP_IPIRANGA_AUTENTICATION_HPP
#define APP_IPIRANGA_AUTENTICATION_HPP

#include "User.hpp"
#define LOGIN_FAILED "Invalid login credentials"
#define RG_CONSTRAINT "RG previously registered"
#define CPF_CONSTRAINT "CPF previously registered"
#define EMAIL_CONSTRAINT "E-mail current in use by another user"
#define USERNAME_CONSTRAINT "Username unavailable"
#define ACTIVATION_ERROR "Sorry, we could not activate your account, please try again later"
#define DELETE_ERROR "Sorry, we could not delete your account, please try again later"

/**
 * Class Account
 * Classe responsável por definir métodos estaticos para manipulação das contas de usuário
 * @Assertivas_estruturais: Todas os metodos dessa classe realizam operações atômicas, consistentes, isoladas e duráveis(ACID).Propriedade herdada do sqlite.
 * Define a interface para manipulação de usuário com a camada View
 */

class Account {
public:
    /**
     * User* login (string, string);
     * Responde a tentativa de login de um usuario qualquer
     * @Argumento1: string correspondente ao username
     * @Argumento2: string correspondente a senha
     * @Retorno: Um ponteiro da classe usuário para o usuário corretamente logado
     * @throws: @InvalidLogin: Função pode dar throw de uma mensagem de credenciais inválidas
     */
    static User* login(string, string);
    /**
     * void registerUser(vector<string>, bool, bool);
     * Registra um novo usuario no sistema
     * @Argumento1: um conteiner vector de strings correspondentes aos campos capturados na interface de cadastro
     * @Argumento2: booleano para indicar o preenchimento da area opcional de cartão
     * @Argumento3: booleano para indicar o preenchimento da area opcional de conta bancária
     * @throws: @InvalidRegister: Função pode dar throw de uma mensagem de campos invalidos (CPF invalido, Username repetido, etc.).
     */
    static void registerUser(vector<string>, bool, bool);
    /**
     * void activateAccount(int, bool);
     * Ativa ou inativa a conta de um usuario
     * @Assertivas_saida: Remove todos os anuncios de uma conta desativada
     * @Argumento1: um inteiro correspondente ao id da conta que será ativada/desativada
     * @Argumento2: um booleano indicando qual será o novo estado da conta
     */
    static void activateAccount(unsigned int, bool);
    /**
     * void deleteAccount(int);
     * Deleta permanentemente a conta de um usuario
     * @Argumento1: um inteiro correspondente ao id da conta que será deletada
     */
    static void deleteAccount(int);
    /**
     * void updateProfile (vector<string>, unsigned int, bool, bool);
     * Atualiza informações do perfil de um usuario qualquer
     * @Argumento1: um conteiner vector de strings correspondentes aos campos capturados na interface de atualização
     * @Argumento2: um inteiro correspondente ao id da conta que será atualizada
     * @Argumento3: booleano para indicar o preenchimento da area opcional de cartão
     * @Argumento4: booleano para indicar o preenchimento da area opcional de conta bancária
     * @Restricoes: CPF e Username não podem ser editados
     * @throws: @InvalidRegister: Função pode dar throw de uma mensagem de campos invalidos (Email, username repetidos, etc.)
     */
    static void updateProfile(vector<string>, unsigned int, bool, bool);
};

#endif //APP_IPIRANGA_AUTENTICATION_HPP
