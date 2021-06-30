/**
 * Para resolver este exercício, siga os passos abaixo:
 * 
 * Escreva uma função que receba como parâmetro um número inteiro (N) e imprima na tela a sequência que
 * vai de 1 até N.
 * 
 * Escreva uma função principal (main) que leia um valor inteiro do teclado, chame a função desenvolvida
 * no item anterior e imprima na tela um triângulo numérico (vide exemplos).
**/

#include <stdlib.h>
#include <stdio.h>

void imprimeNumSequencia(int N){
    int numSeq;
    
    numSeq = 1;

    while (numSeq <= N){
        printf("%d ",numSeq);
        numSeq++;
    }
}

int main(){
    int numero , numLinha;
    scanf("%d",&numero);

    numLinha = 1;

    while (numLinha <= numero){
        imprimeNumSequencia(numLinha);
        numLinha++;
        printf("\n");
    }

    return 0;
}