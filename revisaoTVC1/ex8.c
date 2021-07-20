/**
 * Escreva uma função que extrai dados sobre o estudo de eficácia de vacinas para COVID19. A função deve
 * receber três vetores de números inteiros de mesmo tamanho (placebo, vacinados, resultado) e uma
 * variável inteira que representa o tamanho dos vetores. Cada posição do vetor indica uma pessoa
 * participante do estudo de eficácia. Para os vetores placebo e vacinados, o valor inteiro armazenado
 * em cada posição pode assumir um dos valores a seguir:
 * 
 * 0: pessoa não infectada
 * 1: pessoa infectada assintomática
 * 2: pessoa infectada com sintomas leves
 * 3: pessoa infectada com sintomas moderados
 * 4: pessoa infectada com sintomas graves
 * 5: pessoa infectada que veio a óbito
 * 
 * A sua função deve:
 * 
 * a) Calcular e imprimir a porcentagem de não infectados do grupo placebo e de não infectados do grupo
 * vacinados.
 * 
 * b) Armazenar no vetor resultado, os índices das pessoas do grupo vacinado com sintomas moderados ou
 * graves.
 * 
 * c) Retornar o números de pessoas do grupo vacinado com sintomas moderados e graves.
 * 
 * Faça um programa principal que leia o tamanho dos grupos, os dados do grupo placebo e vacinados e
 * chame a função. O programa deve ainda imprimir o número de pessoas do grupo vacinado com sintomas
 * moderados e graves.
**/

#include <stdlib.h>
#include <stdio.h>

int calculaCovid(int placebo[], int vacinados[], int resultados[], int tam){
    int nInfecP = 0, nInfecV = 0, iRes = 0;
    float porcP, porcV;
    char porc = '%';

    // não infectados no grupo placebo e no grupo vacinados
    for (int i = 0; i < tam; i++){
        if (placebo[i] == 0) //conta não infectados no grupo placebo
            nInfecP++;
        
        if (vacinados[i] == 0) //conta não infectados no grupo vacinados
            nInfecV++;
    }

    //calcula e imprime porcentagens 
    porcP = (nInfecP * 100)/(float)tam;
    porcV = (nInfecV * 100)/(float)tam;    
    printf("porcentagem de não infectados do grupo placebo %.2f %c\n",porcP,porc);
    printf("porcentagem de não infectados do grupo vacinados %.2f %c\n",porcV,porc);

    // armazena os índices das pessoas do grupo vacinado com sintomas moderados ou graves em resultados[]
    for (int j = 0; j < tam; j++){
        if (vacinados[j] == 3 || vacinados[j] == 4){
            resultados[iRes] = j;
            iRes++;
        }
    }

    // retorna o número de pessoas do grupo vacinado com resultados moderados ou graves
    return iRes;
}


int main(){
    int num, placebo[100], vacinados[100], resultados[100], tam;

    printf("Entre com o tamanho do grupo: ");
    scanf("%d",&tam);

    printf("Lendo informacoes do placebo e vacinados:\n");

    for (int i = 0; i < tam; i++){
        scanf("%d",&placebo[i]);
        scanf("%d",&vacinados[i]);
    }
    
    num = calculaCovid(placebo, vacinados, resultados, tam);
    
    printf(" números de pessoas do grupo vacinado com sintomas moderados e graves: %d",num);
    return 0;
}