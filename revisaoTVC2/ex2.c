/**
 * Um pirata decidiu criar um mapa do tesouro codificado na forma de uma matriz de inteiros. Crie um programa que:
 * 
 * a) Crie uma função que receba duas matrizes quadradas, A e B (máximo 100x100) e um inteiro k (máximo 100), representando o número de
 * linhas/colunas. Assuma que a matriz A possui um único elemento diferente de 0, representando o local do tesouro. Esta função deve escrever o
 * valor 1 em cada célula de B se esta estiver na linha ou na coluna do tesouro. Caso contrário, deve escrever a soma dos índices da linha e da
 * coluna. Ex. Se o tesouro estiver na posição A[2][3], a célula B[3][2] terá o valor 5, enquanto B[2][5] terá o valor 1.
 * 
 * b) Crie um programa principal que declare as variáveis necessárias, leia a dimensão das matrizes e a matriz A com valores do teclado. Além
 * disso, imprima na tela a matriz B após a execução da função de (a).
**/

#include <stdlib.h>
#include <stdio.h>

#define MAX 100

void escreveMatrizB (int A[MAX][MAX], int B[MAX][MAX], int k){
    int i, j, iTesouro, jTesouro;

    for (i = 0; i < k; i++){
        for (j = 0; j < k; j++){
            if (A[i][j] != 0){
                iTesouro = i;
                jTesouro = j;
                break;
            }
        }
    }

    for (i = 0; i < k; i++){
        for (j = 0; j < k; j++){
            B[i][j] = i+j;
            B[iTesouro][j] = 1;
        }
        B[i][jTesouro] = 1;
    }
}

int main(){
    int A[MAX][MAX], B[MAX][MAX], k, i, j;

    scanf("%d ", &k);

    for (i = 0; i < k; i++){
        for (j = 0; j < k; j++)
            scanf("%d ", &A[i][j]);
    }

    escreveMatrizB(A, B, k);

    for (i = 0; i < k; i++){
        for (j = 0; j < k; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }

    return 0;
}