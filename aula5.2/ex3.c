/**
 * Escreva um programa que leia dez valores do teclado (usando a mesma variável) e imprima as posições
 * do maior e do menor na sequência
**/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor, maior, menor;
    int pMaior , pMenor;

    scanf("%f",&valor);
    maior = valor;
    menor = valor;

    pMaior = 1;
    pMenor = 1;

    for(int i = 1; i <= 9; i++){
        scanf("%f",&valor);
        
        if (valor > maior){
            pMaior = i+1;
            maior = valor;
        } else {
            if (valor < menor){
                pMenor = i+1;
                menor = valor;
            }
        }
    }

    printf("O %do elemento é o maior.\n",pMaior);
    printf("O %do elemento é o menor.\n",pMenor);
    return 0;
}