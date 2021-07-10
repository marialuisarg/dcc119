/**
 * Faça um programa que preencha um vetor de dez posições com valores lidos do teclado e, ao final,
 * imprima os valores ímpares armazenados nos índices pares.
**/

#include <stdlib.h>
#include <stdio.h>

#define num_valores 9

int main(){
    int valores [num_valores];
    for (int i = 0; i <= num_valores; i++){
        scanf("%d",&valores[i]);
        if (i % 2 == 0 && valores[i] % 2 != 0){
            printf("%d ",valores[i]);
        }
    }
    return 0;
}