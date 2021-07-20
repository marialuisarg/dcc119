/**
 * Em uma dada empresa, para o envio das mercadorias, os produtos são organizados em caixas. O preço do
 * envio depende da quantidade de caixas solicitadas pelo cliente. Se a quantidade de caixas de um pedido
 * for inferior a uma quantidade mínima estipulada, o pedido deve ser recusado. Sabe-se que o preço do
 * envio é de R$20,00 por caixa. 
 * 
 * Para resolver esta questão, siga os passos abaixo:
 * 
 * (a) Faça uma função que receba duas informações como parâmetro: a quantidade mínima de caixas para um
 * pedido ser atendido e a quantidade de caixas solicitadas por um dado cliente. Para os pedidos cuja
 * quantidade de caixas solicitadas seja superior ou igual ao mínimo, calcule e imprima o valor da
 * entrega. Caso a quantidade de caixas seja inferior ao mínimo, imprima uma mensagem informando que o
 * pedido será recusado.
 * 
 * (b) Faça um programa (main) que leia a quantidade mínima de caixas para ser viável o atendimento de um
 * pedido e também as quantidades de caixas solicitadas por diversos clientes. Para cada cliente, chame
 * a função definida no item (A) passando como parâmetro as informações necessárias.
 * 
 * A função deverá ser encerrada quando for lido valor 0 (zero) para a quantidade de caixas solicitadas
 * por um cliente.
**/

#include <stdlib.h>
#include <stdio.h>

void processaPedido(int qtdMin, int qtdSol){
    float valEntrega;
    if (qtdSol >= qtdMin){
        valEntrega = qtdSol * 20;
        printf("Valor da entrega: R$ %.2f (%d Caixas)\n",valEntrega,qtdSol);
    } else
        printf("Pedido recusado.\n");
}

int main(){
    int qtdMin , qtdSol;
    scanf("%d",&qtdMin);

    scanf("%d",&qtdSol);

    while (qtdSol != 0){
        processaPedido(qtdMin,qtdSol);
        scanf("%d",&qtdSol);
    }
    return 0;
}