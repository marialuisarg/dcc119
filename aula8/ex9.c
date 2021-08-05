/**
 * Faça um programa que crie uma matriz de números reais com quatro linhas e três colunas e preencha-a
 * com valores digitados pelo usuário. O programa deve calcular e imprimir na tela a soma dos valores de
 * cada linha e a média dos valores de cada coluna. As impressões devem ser feitas utilizando 2 casas
 * decimais.
**/

#include <stdio.h>
#include <stdlib.h>

#define M 4
#define N 3

int main(){
    float A[M][N];
    float soma = 0, media = 0;

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++)
            scanf("%f",&A[i][j]);
    }

    printf("Somas: \n");

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            soma += A[i][j];
        }
        printf("-> Linha 0%d: %.2f\n",i,soma);
        soma = 0;
    }

    printf("\nMédias: \n");

    for (int j = 0; j < N; j++){
        for (int i = 0; i < M; i++){
            media += A[i][j];
        }
        media = media / M;
        printf("-> Coluna 0%d: %.2f\n",j,media);
        media = 0;
    }

    return 0;
}