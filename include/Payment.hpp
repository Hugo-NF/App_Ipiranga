#ifndef APP_IPIRANGA_LOGS_HPP
#define APP_IPIRANGA_LOGS_HPP

#include "Ads.hpp"
#include "Historic.hpp"
#include "User.hpp"
#define PAYMENT_ERROR "Sorry, we could not process your request right now, try again later"
#define OWN_AD "Sorry, but you can not buy your own product/service"
#define UNAVAIABLE_PRODUCT "Sorry, but we don't have enough stock to meet your request"
#define NOT_ENOUGH_MONEY "You don't have enough balance for this operation"

/**
 * @abstract Class Payment\n
 * Classe responsável por definir métodos estaticos para realização das transações\n
 * @note: Todas os metodos dessa classe realizam operações atômicas, consistentes, isoladas e duráveis(ACID).Propriedade herdada do sqlite.
 * Define a interface para pagamentos com a camada View @endabstract
 */

class Payment{
public:
    /**
     * @addindex void makePayment(Ads *, User*, unsigned int);
     * Realiza a compra de um anuncio
     * @warning: Ads* e User* definem objetos com atributos definidos
     * @arg 1: Ponteiro para o objeto que define o anuncio da ser comprado
     * @arg 2: Ponteiro para o objeto que define o usuario comprador
     * @arg 3: Inteiro definindo a quantidade de itens a serem comprados
     * @throws : Metodo pode lançar mensagens de compra inválida, por exemplo compras dos próprios anuncios ou indisponibilidade de estoque
     */
    static void makePayment(Ads *, User*, unsigned int);
    /**
     * @addindex void withdrawBalance(User *, double);
     * Permite ao usuário retirar o dinheiro da sua conta Ipiranga(TM)
     * @warning: User* define um objeto usuário com os atributos definidos
     * @arg 1: Ponteiro para o usuário atual, que realizará o saque
     * @arg 2: double definindo o valor a ser retirado
     * @throws : Metodo pode lancar mensagem de saldo indisponivel
     */
    static void withdrawBalance(User *, double);
};

#endif //APP_IPIRANGA_LOGS_HPP
