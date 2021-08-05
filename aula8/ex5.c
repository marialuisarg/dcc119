/**
 * Dado um inteiro N, siga os passos abaixo:
 * Escreva uma função que receba como parâmetro uma matriz inteira A de tamanho 10x10. Imprima a
 * localização (linha e a coluna) do maior valor.
 * 
 * Escreva uma função principal (main) que declare e leia os elementos de A. Chame a função anterior.
**/

#include <stdio.h>
#include <stdlib.h>

#define N 10

void maiorValor(float A[N][N]){
    float maiorValor = A[0][0];
    int iMaior, jMaior;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (A[i][j] > maiorValor){
                maiorValor = A[i][j];
                iMaior = i;
                jMaior = j;
            }
        }
    }

    printf("%d %d",iMaior,jMaior);
}

int main(){
    float A[N][N];

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++)
            scanf("%f",&A[i][j]);
    }
    
    maiorValor(A);

    return 0;
}