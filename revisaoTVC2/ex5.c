/**
 * Uma empresa precisa selecionar um/a funcionário/a e te pediu ajuda para o processo seletivo pois receberam muitas inscrições. Para ajudar,
 * você propôs criar uma matriz onde as linhas representam os candidatos e as colunas representam 5 etapas do processo. Faça uma função que
 * receba o número de candidatos, uma matriz preenchida com as notas (de zero a dez) que cada candidato recebeu para cada etapa, e um vetor
 * para guardar o total de pontos de cada candidato. A função deve ainda retornar o índice do vetor que possui o maior número de pontos.
 * 
 * Faça também o programa principal que deve ler o número de candidatos (máximo 100), os valores para preencher a matriz, chamar a função e
 * imprimir o índice retornado junto ao seu total de pontos.
**/

#include <stdlib.h>
#include <stdio.h>

#define linhas 100
#define colunas 5

int verificaCandidatos(int processoSeletivo[linhas][colunas], int numCand, int pontuacao[]){
    int i, j, somaNotas = 0, maiorNota = 0, iMaior;

    for (i = 0; i < numCand; i++){

        for (j = 0; j < colunas; j++){
            somaNotas += processoSeletivo[i][j];
        }
        pontuacao[i] = somaNotas;

        if (pontuacao[i] > maiorNota){
            maiorNota = pontuacao[i];
            iMaior = i;
        }

        somaNotas = 0;
    }

    return iMaior;
}

int main(){
    int numCand, i, j, indice;
    int pontuacao[linhas];
    int processoSeletivo[linhas][colunas];

    scanf("%d", &numCand);

    for (i = 0; i < numCand; i++){
        for (j = 0; j < colunas; j++)
            scanf("%d ", &processoSeletivo[i][j]);
    }

    indice = verificaCandidatos(processoSeletivo, numCand, pontuacao);

    printf("Primeiro colocado:\n");
    printf("candidato numero %d, pontuacao: %d", indice, pontuacao[indice]);

    return 0;
}