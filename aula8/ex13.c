/**
 * Faça um programa que leia uma matriz quadrada de dimensão 4, uma função que encontre o maior valor
 * desta matriz e uma função que encontre o menor valor. Imprima os valores encontrados na função
 * principal.
**/

#include <stdio.h>
#include <stdlib.h>

#define M 4

int encontraMaior(int matriz[M][M]){
    int i, j, maior = matriz[0][0];

    for (i = 0; i < M; i++){
        for (j = 0; j < M; j++){
            if (matriz[i][j] >= maior)
                maior = matriz[i][j];
        }
    }

    return maior;
}

int encontraMenor(int matriz[M][M]){
    int i, j, menor = matriz[0][0];

    for (i = 0; i < M; i++){
        for (j = 0; j < M; j++){
            if (matriz[i][j] <= menor)
                menor = matriz[i][j];
        }
    }

    return menor;
}

int main(){
    int matriz[M][M];
    int i, j, maior, menor;

    for (i = 0; i < M; i++){
        for (j = 0; j < M; j++)
            scanf("%d",&matriz[i][j]);
    }

    maior = encontraMaior(matriz);
    menor = encontraMenor(matriz);

    printf("Maior: %d\n",maior);
    printf("Menor: %d",menor);

    return 0;
}