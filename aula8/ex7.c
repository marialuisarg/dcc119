/**
 * Leia uma matriz de números inteiros 20 x 20 e leia também um valor X.
 * O programa deverá fazer uma busca, percorrendo linha por linha, desse valor na matriz e, ao final
 * escrever a localização (linha e coluna) da primeira ocorrência ou uma mensagem de “nao encontrado”.
**/

#include <stdio.h>
#include <stdlib.h>

#define M 20

int main(){
    float A[M][M], X;
    int existeX = 0;

    for (int i = 0; i < M; i++){      // leitura de A
        for (int j = 0; j < M; j++)
            scanf("%f",&A[i][j]);
    }

    scanf("%f",&X);                   // leitura de X


    for (int i = 0; i < M; i++){      // procurando X
        
        for (int j = 0; j < M; j++){
            if (A[i][j] == X){
                printf("Linha: %d Coluna: %d",i,j);
                existeX = 1;
                break;
            }
        }

        if (existeX == 1)
            break;
    }

    if (existeX == 0)
        printf("nao encontrado");

    return 0;
}