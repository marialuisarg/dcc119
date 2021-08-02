/**
 * Faça um programa que crie uma matriz quadrada de números inteiros com dimensão três, inicialize-a como
 * uma matriz identidade e imprimia na tela o estado final desta, organizando os elementos em linhas e
 * colunas.
**/

#include <stdlib.h>
#include <stdio.h>

#define TAM 3

int main(){
    int matriz[TAM][TAM];

    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++)
            matriz[i][j] = 0;
        matriz[i][i] = 1;
    }

    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++)
            printf("%d ",matriz[i][j]);
        printf("\n");
    }

    return 0;
}