/**
 * Uma pizzaria está buscando automatizar seus pedidos para atender seus clientes de forma mais rápida ao
 * tentar prever os próximos pedidos com base nos pedidos dos 3 dias anteriores. No momento, a pizzaria
 * oferece 5 sabores de pizzas diferentes, podendo ser normais ou especiais.
 * 
 * a) Defina duas constantes: NP, representando o número de sabores de pizzas diferentes, e ND, o número
 * de dias anteriores considerados. Essas constantes deverão ser utilizadas nas questões abaixo.
 * 
 * b) Crie uma estrutura para armazenar dados de uma Pizza contendo os campos: sabor (“margherita”,
 * “calabresa”, “pepperoni”, etc), tipo (“normal” ou “especial”), tempo de preparo (em minutos inteiros)
 * e um vetor em que cada posição armazena o número de pedidos por dia desta pizza feito em cada um dos
 * ND dias anteriores registrados.
 * 
 * c) Faça uma função que receba como parâmetros um vetor de pizzas e seu tamanho e retorne o índice do
 * vetor de pizzas que contém um sabor de pizza do tipo especial com tempo de preparo menor do que 45
 * minutos e que teve o maior número de pedidos feitos no período. Caso nenhuma pizza seja encontrada
 * retornar -1.
 * 
 * d) Faça um programa principal que inicialize todos os campos de um vetor do tipo Pizza para armazenar
 * NP sabores lidos do teclado. O programa deve chamar a função criada acima e imprimir, para a pizza
 * correspondente ao índice retornado pela função, o sabor e o número de pedidos que foram feitos desta
 * pizza no último dia. Caso nenhuma pizza seja encontrada retornar mensagem "Nenhuma pizza retornada".
**/

#include <stdlib.h>
#include <stdio.h>

#define NP 5
#define ND 3
#define MAX 100

typedef struct {
    char sabor[20];
    char tipo[9];
    int tempoPrep;
    int pedidosDia[ND];

} Pizza;

int comparaString(Pizza pizzas[MAX], int indice){
    int teste = 1;
    char esp[9] = "especial";

    for (int n = 0; n < 9; n++){
        if (pizzas[indice].tipo[n] != esp[n])
            teste = 0;
    }

    return teste;
}

int encontraPizza(Pizza pizzas[MAX], int tam){
    int i, n, temPizza = -1, maiorNum = 0, indice, totalPedidos = 0;

    for (i = 0; i < tam; i++){
        if (comparaString(pizzas, i) == 1 && pizzas[i].tempoPrep < 45){
            
            for (n = 0; n < ND; n++)
                totalPedidos += pizzas[i].pedidosDia[n];

            if (totalPedidos > maiorNum){
                indice = i;
                maiorNum = totalPedidos;
            }
            
            temPizza = 1;
            totalPedidos = 0;
        }
    }

    if (temPizza != -1)
        return indice;
    else
        return -1;
}

int main(){
    Pizza pizzas[NP];
    int i, j, ref;

    for (i = 0; i < NP; i++){
        scanf("%[^\n]s", pizzas[i].tipo);
        scanf("%*c");
        scanf("%[^\n]s", pizzas[i].sabor);
        scanf("%d ", &pizzas[i].tempoPrep);

        for (j = 0; j < ND; j++)
            scanf("%d ", &pizzas[i].pedidosDia[j]);
    }

    ref = encontraPizza(pizzas, NP);

    if (ref == -1)
        printf("Nenhuma pizza retornada");
    else {
        printf("Sabor: %s\n", pizzas[ref].sabor);
        printf("Pedidos: %d", pizzas[ref].pedidosDia[ND-1]);
    }

    return 0;
}
