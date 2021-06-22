/**
 * 1. Escreva uma função que receba como parâmetro um número inteiro (N) e imprima na tela a sequência que
 * vai de 1 até N.
 * 
 * 2. Escreva uma função principal (main) que leia um valor inteiro do teclado e chame a função desenvolvida
 * no item anterior.
**/

#include <stdio.h>
#include <stdlib.h>

void imprimeSeq(int N){
    for (int i = 1; i <= N; i++)
        printf("%d ",i);
}

int main(){
    int valor;
    scanf("%d",&valor);

    imprimeSeq(valor);
    return 0;
}