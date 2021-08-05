/** Faça um programa que crie uma matriz de números reais com quatro linhas e duas colunas e preencha-a
 * com valores digitados pelo usuário. O programa deve imprimir na tela o estado final da matriz,
 * organizando os elementos em linhas e colunas. As impressões devem ser feitas utilizando 1 casa decimal.
**/

#include <stdio.h>
#include <stdlib.h>

#define M 4
#define N 2

int main(){
    float A[M][N];

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++)
            scanf("%f",&A[i][j]);
    }

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++)
            printf("%.1f ",A[i][j]);

        printf("\n");
    }

    return 0;
}