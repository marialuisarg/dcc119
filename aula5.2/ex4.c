/**
 * Desenvolva uma função que receba como parâmetro um número inteiro N. A função deve ler N valores do
 * teclado e retornar quantos destes valores são negativos. Faça um programa principal que leia o
 * inteiro N, chame a função e imprima, como nos exemplos, a quantidade de números negativos digitados.
**/

#include <stdlib.h>
#include <stdio.h>

int testaNegativos(int N){
    int qtdNegativos = 0 , num;

    for (int i = N; i>=1; i--){
        scanf("%d",&num);
        if (num < 0) {
            qtdNegativos++;
        }
    }

    return qtdNegativos;
}

int main(){
    int n , qtd;
    scanf("%d",&n);
    qtd = testaNegativos(n);
    printf("Total de números negativos:%d",qtd);
    return 0;
}