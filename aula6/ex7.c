/**
 * Faça uma função que receba como parâmetros um vetor de tamanho 5 e um número inteiro entre 0 e 99999,
 * faça uma função que inicialize o vetor com cada dígito do número. Por exemplo, se o número for 4723,
 * o vetor deverá, ao final, conter os valores {0,4,7,2,3}.
**/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define tam 5

void imprimeVetor(int vetor[tam] , int numero){
    if (numero > 99999) {
        printf("Entrada fora do limite estipulado");
    } else {
        //vetor[0]
        vetor[0] = numero / 10000;
        numero -= numero * vetor[0];
        //vetor[1]
        vetor[1] = numero / 1000;
        numero -= numero * vetor[1];
        //vetor[2]
        vetor[2] = numero / 100;
        numero -= numero * vetor[2];
        //vetor[3]
        vetor[3] = numero / 10;
        numero -= numero * vetor[3];
        //vetor[4]
        vetor[4] = numero;

        printf("Vetor obtido: ");
        printf("{%d,%d,%d,%d,%d}",vetor[0],vetor[1],vetor[2],vetor[3],vetor[4]);
    }
}

int main(){
    // cria o vetor e recebe o número inteiro
    int vetor[tam];
    int num;
    scanf("%d",&num);

    // passa os valores como parâmetro para a função
    imprimeVetor(vetor,num);

    return 0;
}