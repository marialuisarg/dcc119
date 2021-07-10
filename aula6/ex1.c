/**
 * Desenvolva um programa que leia um vetor de números reais com 10 elementos, um escalar e imprima o
 * resultado da multiplicação do vetor pelo escalar. O primeiro valor fornecido pelo usuário é o valor
 * do escalar, seguido pelos valores que serão usados para preencher o vetor. Utilize 2 casas decimais
 * em suas impressões de valores reais.
**/

#include <stdio.h>
#include <stdlib.h>

#define num_elementos 9

int main(){
    float numReais [num_elementos];
    float mult, escalar;
    scanf("%f",&escalar);
    for (int i = 0; i <= num_elementos; i++) {
        scanf("%f",&numReais[i]);
        mult = numReais[i] * escalar;
        printf("%.2f\n",mult);
    }
    return 0;
}