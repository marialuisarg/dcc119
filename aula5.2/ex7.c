/**
 * Faça um programa que leia um inteiro x e imprima na tela todos os números pares no intervalo
 * decrescente de x a 1.
 * 
 * Dica: assuma para este exercício que o número lido sempre será maior do que zero
**/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;
    scanf("%d",&x);
    for (int i = x; i >= 1; i--){
        if (i%2 == 0){
            printf("%d ",i);
        }
    }
    
    return 0;
}