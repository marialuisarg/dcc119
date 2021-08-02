/**
 * Para resolver este exercício, siga os passos abaixo:
 * 
 * Escreva uma função que receba como parâmetro uma matriz de valores reais quadrada de dimensão três e
 * faça a leitura desta.
 * 
 * Escreva uma função que receba como parâmetro duas matrizes de valores reais quadradas de dimensão três
 * e inicialize a segunda como a transposta da primeira.
 * 
 * Escreva uma função principal (main) para chamar as funções desenvolvidas nos itens anteriores e
 * imprimir na tela o estado final da segunda matriz. As impressões devem ser feitas utilizando 1 casa
 * decimal.
**/

#include <stdio.h>
#include <stdlib.h>

#define TAM 3

void leMatriz(float matriz1[TAM][TAM]){
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            scanf("%f",&matriz1[i][j]);
        }
    }
}

void transpoeMatriz(float matriz1[TAM][TAM], float matriz2[TAM][TAM]){
    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            matriz2[i][j] = matriz1[j][i];
        }
    }
}

int main(){
    float matriz1[TAM][TAM];
    float matriz2[TAM][TAM];

    leMatriz(matriz1);
    transpoeMatriz(matriz1, matriz2);

    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            printf("%.1f ", matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}