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
 * Class Payment
 * Classe responsável por definir métodos estaticos para realização das transações
 * @Assertivas_estruturais: Todas os metodos dessa classe realizam operações atômicas, consistentes, isoladas e duráveis(ACID).Propriedade herdada do sqlite.
 * Define a interface para pagamentos com a camada View
 */

class Payment{
public:
    /**
     * void makePayment(Ads *, User*, unsigned int);
     * Realiza a compra de um anuncio
     * @Hipotese: Ads* e User* definem objetos com atributos definidos
     * @Argumento1: Ponteiro para o objeto que define o anuncio da ser comprado
     * @Argumento2: Ponteiro para o objeto que define o usuario comprador
     * @Argumento3: Inteiro definindo a quantidade de itens a serem comprados
     * @throws: @InvalidPayment: Metodo pode lançar mensagens de compra inválida, por exemplo compras dos próprios anuncios ou indisponibilidade de estoque
     */
    static void makePayment(Ads *, User*, unsigned int);
    /**
     * void withdrawBalance(User *, double);
     * Permite ao usuário retirar o dinheiro da sua conta Ipiranga(TM)
     * @Hipotese: User* define um objeto usuário com os atributos definidos
     * @Argumento1: Ponteiro para o usuário atual, que realizará o saque
     * @Argumento2: double definindo o valor a ser retirado
     * @throws: @InvalidWithdraw: Metodo pode lancar mensagem de saldo indisponivel
     */
    static void withdrawBalance(User *, double);
};

#endif //APP_IPIRANGA_LOGS_HPP
