/**
 * Implemente as funções indicadas abaixo para que o programa funcione corretamente.
**/

#include <stdio.h>
#include <stdlib.h>
#define M 4
#define N 3

void lematriz(int matriz[M][N]){
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++)
            scanf("%d",&matriz[i][j]);
    }
}

void copiazera(int A[M][N], int B[M][N]){
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            A[i][j] = B[i][j];
            B[i][j] = 0;
        }
    }
}

void imprimematriz(int matriz[M][N]){
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++)
            printf("%d ", matriz[i][j]);
        
        printf("\n");
    }
    printf("\n");
}

int main() {
  int A[M][N], B[M][N];
  
  //Leitura: Matrizes A & B
  lematriz(A);
  lematriz(B);
  
  //Matriz A "recebe" B e B é zerada
  copiazera(A, B);
  
  //Impressão: Matriz A
  printf("Matriz A:\n");
  imprimematriz(A);
  
  //Impressão: Matriz B
  printf("Matriz B:\n");
  imprimematriz(B);
  
  return 0;
}
