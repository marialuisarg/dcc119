/**
 * Para resolver este exercício, siga os passos abaixo:
 * 
 * Escreva uma função que receba como parâmetro uma matriz de valores reais quadrada de dimensão três e
 * faça a leitura desta.
 * 
 * Escreva uma função que receba como parâmetro duas matrizes de valores reais quadradas de dimensão três
 * e imprima na tela a soma destas. As impressões devem ser feitas utilizando 1 casa decimal.
 * 
 * Escreva uma função principal (main) para chamar as funções desenvolvidas nos itens anteriores.
**/

#include <stdio.h>
#include <stdlib.h>

#define M 3

void leMatriz(float matriz[M][M]){
    for (int i = 0; i < M; i++){
        for (int j = 0; j < M; j++)
            scanf("%f",&matriz[i][j]);
    }
}

void imprimeSoma(float A[M][M], float B[M][M]){
    for (int i = 0; i < M; i++){
        for (int j = 0; j < M; j++)
            printf("%.1f ", A[i][j] + B[i][j]);
        
        printf("\n");
    }
}

int main(){
    float A[M][M];
    float B[M][M];

    leMatriz(A);
    leMatriz(B);
    imprimeSoma(A,B);

    return 0;
}