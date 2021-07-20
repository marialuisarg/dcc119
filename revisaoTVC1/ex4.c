/**
 * Para acabar com o estoque de uma loja de doces, foi estabelecida a seguinte política de vendas. Todos
 * os doces serão colocados à venda por um mesmo preço e um esquema de descontos progressivos será adotado.
 * 
 * i) Para compras de até 5 doces, 5% de desconto no valor total dos doces.
 * 
 * ii) Para compras acima de 5 doces, desconto de 8% no valor total dos doces.
 * 
 * Para resolver esta questão, siga os passos abaixo:
 * 
 * (A) Faça uma função que receba dois parâmetros: o preço de venda de qualquer doce desta loja e o
 * número de doces adquiridos por um dado cliente. A função deverá imprimir o valor final da compra,
 * destacando o desconto adotado.
 * 
 * (B) Faça um programa (main) que leia o preço fixo de venda de qualquer doce e as quantidades de doces
 * adquiridos por vários clientes. Para cada cliente, chame a função definida no item (A) passando como
 * parâmetro as informações necessárias. O programa deverá ser encerrado quando for lido valor 0 (zero)
 * para a quantidade de doces.
**/

#include <stdio.h>
#include <stdlib.h>

void imprimeValorFinal(float valorTotal , int numDoces){
    float valorFinal;
    int desconto;
    char porc = '%';

    if (numDoces <= 5){
        valorFinal = numDoces * valorTotal * 0.95;
        desconto = 5;
    } else {
        valorFinal = numDoces * valorTotal * 0.92;
        desconto = 8;
    }
    
    printf("%d Doces - Preco: R$ %.2f (Desconto de %d%c)\n",numDoces,valorFinal,desconto,porc);
}

int main(){
    float preco;
    int qtd;

    // lê preço fixo do doce
    scanf("%f",&preco);

    // lê quantidade comprada por cliente, até que seja 0
    scanf("%d",&qtd);

    while (qtd > 0) {
        imprimeValorFinal(preco,qtd);
        scanf("%d",&qtd);
    }

    return 0;
}