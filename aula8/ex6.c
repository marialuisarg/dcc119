/**
 * Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores elementos entre as primeiras.
**/

#include <stdio.h>
#include <stdlib.h>

#define M 4

int main(){
    float A[M][M], B[M][M], C[M][M];

    for (int i = 0; i < M; i++){      // leitura de A
        for (int j = 0; j < M; j++)
            scanf("%f",&A[i][j]);
    }

    for (int i = 0; i < M; i++){      // leitura de B
        for (int j = 0; j < M; j++)
            scanf("%f",&B[i][j]);
    }
    
    for (int i = 0; i < M; i++){      // comparando maiores valores
        for (int j = 0; j < M; j++)
            if (A[i][j] >= B[i][j])
                C[i][j] = A[i][j];
            else
                C[i][j] = B[i][j];
    }

    for (int i = 0; i < M; i++){      // imprimindo C
        for (int j = 0; j < M; j++)
            printf("%.2f ",C[i][j]);
        printf("\n");
    }

    return 0;
}