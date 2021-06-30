/**
 * Desenvolva um programa que leia do teclado um valor inteiro positivo n e imprima todos os múltiplos de
 * n no intervalo entre n e seu quadrado, em forma de tabuada, como o exemplo abaixo:
 **/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor , mult , total;
    scanf("%d",&valor);

    mult = 1;
    
    while (mult <= valor){
        total = valor * mult;
        printf("%d x %d = %d \n",mult,valor,total);
        mult++;
    }

    return 0;
}