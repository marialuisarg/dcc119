/**
 * Para resolver este exercício, siga os passos abaixo:
 * 
 * Escreva uma função que receba como parâmetro um vetor e uma matriz de valores reais com dimensões
 * compatíveis e multiplique o vetor pela matriz. O resultado final deve ser colocado no próprio vetor de
 * entrada.
 * 
 * Escreva uma função principal (main) para ler um vetor de três posições e uma matriz quadrada com três
 * dimensões, chamar a função desenvolvida no item anterior e imprimir na tela o resultado da
 * multiplicação. Utilize 1 casa decimal nas impressões.
**/

#include <stdio.h>
#include <stdlib.h>

#define M 3

void multiplica(float vetor[], float matriz[M][M]){
   float aux[M];

   for (int i = 0; i < M; i++){
        aux[i] = 0;

        for (int j = 0; j < M; j++){
            aux[i] += vetor[j] * matriz[j][i];
        }
    }

    for (int i = 0; i < M; i++){
        vetor[i] = aux[i];
    }
}

int main(){
    float A[M][M];
    float V[M];

    for (int i = 0; i < M; i++)
        scanf("%f",&V[i]);
    
    for (int i = 0; i < M; i++){
        for (int j = 0; j < M; j++)
            scanf("%f",&A[i][j]);
    }

    multiplica(V,A);

    printf("Resultado = [ ");

    for (int i = 0; i < M; i++)
        printf("%.1f ",V[i]);

    printf("]");

    return 0;
}