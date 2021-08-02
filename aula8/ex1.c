/**
 * Faça uma função que receba a matriz, o vetor e dois parâmetros inteiros (número de linhas e número de
 * colunas). Essa função deve preencher cada posição do vetor com o índice do elemento que contem o maior
 * valor de cada linha da matriz.
 * 
 * Faça um programa (função main) para declarar uma matriz de números reais de tamanho NxM (no máximo
 * 100x100), um vetor de números inteiros de tamanho N e chamar a função descrita a seguir. Este programa
 * deve ler o número de linhas e colunas, ler o conteúdo da matriz, chamar a função e imprimir os
 * elementos do vetor após seu preenchimento.
**/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void vetorMaiores(float matriz[MAX][MAX], int vetor[], int linhas, int colunas){
    float maior = 0, indice = 0;

    for (int i = 0; i < linhas; i++){
        
        for (int j = 0; j < colunas; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j]; 
                indice = j;
            }
        }

        vetor[i] = indice;
        indice = 0;
        maior = 0;
    }
}

int main(){
    float matriz [MAX][MAX];
    int vetor[MAX], linhas, colunas;

    scanf("%d",&linhas);
    scanf("%d",&colunas);

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            scanf("%f", &matriz [i][j]);   
        }
    }

    vetorMaiores(matriz, vetor, linhas, colunas);

    for(int i = 0; i < linhas; i++)
        printf("%d ", vetor[i]);

    return 0;
}