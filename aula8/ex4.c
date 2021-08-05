/**
 * Dado dois inteiros M e N, siga os passos abaixo:
 * Escreva uma função que receba como parâmetro uma matriz A de tamanho MxN, um vetor V e outro vetor R
 * (de M elementos). Armazene o produto de A por V em R.
 * 
 * Escreva uma função principal (main) que declare e leia a matriz A e o vetor V, além disso declare
 * também o vetor R. Chame a função anterior para calcular o produto matriz vetor. Ao final, imprima o
 * vetor R de resultado.
**/

#include <stdio.h>
#include <stdlib.h>

#define M 5
#define N 5

void fazProduto(float A[M][N], float V[], float R[]){
    for (int i = 0; i < M; i++){

        R[i] = 0;

        for (int j = 0; j < N; j++){
            R[i] += V[j] * A[i][j];
        }
    }
}

int main(){
    float A[M][N];
    float V[M], R[M];

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++)
            scanf("%f",&A[i][j]);
    }

    for (int i = 0; i < M; i++)
        scanf("%f",&V[i]);
    
    fazProduto(A,V,R);

    for (int i = 0; i < M; i++)
        printf("%.2f\n",R[i]);

    return 0;
}