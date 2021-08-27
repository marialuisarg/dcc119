/**
 * Uma rede de supermercados sempre organiza alguma promoção entre os “funcionários do mês” eleitos em cada loja. Neste mês, seis caixas de
 * tamanhos distintos foram preenchidas com bolinhas de gude e foi anunciado que:
 * 
 * Para se inscrever, os funcionários do mês devem preencher uma ficha, indicando um palpite para a quantidade de bolinhas em cada caixa;
 * Cada palpite correto garante um prêmio de R$1500,00;
 * Cada palpite que errar por até 10 unidades (a menos ou a mais, inclusive) ganha um prêmio de R$100,00.
 * 
 * a) Defina constantes para representar o número de fichas recebidas e o número de caixas.
 * 
 * b) Crie uma estrutura para representar as fichas de inscrição. Essa estrutura deve conter o nome do funcionário (string), o identificador da
 * loja (inteiro) e um vetor com os palpites (inteiros).
 * 
 * c) Elabore uma função que receba como parâmetros uma estrutura que representa uma ficha de inscrição e um vetor de inteiros preenchido com a
 * quantidade exata de bolinhas em cada caixa. A função deverá imprimir, para cada caixa, o número da caixa, a quantidade exata de bolinhas e o
 * palpite do funcionário. Ao final, a função deverá ainda calcular e imprimir o valor total que o funcionário receberá como premiação,
 * indicando também o nome do funcionário.
 * 
 * d) Elabore um programa que crie um vetor de estruturas de fichas de inscrição e leia as informações de cada uma das fichas, armazenando-as
 * no vetor. O programa deverá solicitar que o usuário informe também a quantidade exata de bolinhas em cada caixa. Ao final, o programa deverá
 * ler o índice de uma das fichas de inscrição e chamar a função da letra c.
**/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define QTD 7       // qtd de fichas recebidas
#define CAIXAS 6    // qtd de caixas

typedef struct{
    char nomeFunc[MAX];
    int idLoja;
    int palpites[CAIXAS];
} Ficha;

void verificaPalpite(Ficha fichas[QTD], int correto[CAIXAS], int indice){
    float premiacao = 0;
    int i;

    for (i = 0; i < CAIXAS; i++){
        if (correto[i] == fichas[indice].palpites[i])
            premiacao += 1500;
        else if ((correto[i] > fichas[indice].palpites[i] && correto[i] - fichas[indice].palpites[i] <= 10) || (fichas[indice].palpites[i] > correto[i] && fichas[indice].palpites[i] - correto[i] <= 10))
            premiacao += 100;

        printf("Caixa %d tem %d bolinhas (palpite foi %d)\n", i, correto[i], fichas[indice].palpites[i]);
    }

    printf("Premiacao: R$ %.f,00 para %s", premiacao, fichas[indice].nomeFunc);
}

int main(){
    Ficha fichas[QTD];
    int correto[CAIXAS];
    int i, j, indice;

    for (i = 0; i < QTD; i++){
        scanf("%d ", &fichas[i].idLoja);
        scanf("%[^\n]s", fichas[i].nomeFunc);
        for (j = 0; j < CAIXAS; j++)
            scanf("%d ", &fichas[i].palpites[j]);
    }

    for (j = 0; j < CAIXAS; j++)
        scanf("%d ", &correto[j]);

    scanf("%d ", &indice);

    verificaPalpite(fichas, correto, indice);

    return 0;
}