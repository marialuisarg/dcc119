/**
 * Faça um programa que leia um número inteiro positivo x e imprima na tela se ele é ou não um número
 * primo. A leitura de x deve ser repetida enquanto o valor digitado for inválido.
**/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int x , qtdDiv;

    qtdDiv = 0;

    do {
        scanf("%d",&x);
    } while (x <= 0);

    for (int i = 1 ; i<=x ; i++){
        if(x % i == 0)
            qtdDiv++;
    }

    if(qtdDiv == 2)
        printf("O número %d é primo.",x);
    else 
        printf("O número %d não é primo.",x);

    return 0;
}