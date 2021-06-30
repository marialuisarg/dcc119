/**
 * Escreva uma função que receba como parâmetros dois valores inteiros, n1 e n2, e imprima o intervalo
 * fechado entre esses dois valores.
 * Exemplo: se os valores lidos forem 5 e 2, a saída deverá ser 5 4 3 2.
 * Faça também um programa principal que leia do teclado as informações necessárias para executar a
 * chamada correta desta função.
 **/

#include <stdlib.h>
#include <stdio.h>

void imprimeIntervalo(int n1 , int n2){
    if (n1<n2){
        for (int i = n1; i <= n2; i++)
        printf("%d ",i);
    } else {
        if (n1>n2){
            for (int i = n1; i >= n2; i--)
            printf("%d ",i);
        } else {
            printf("0");
        }
    }
}

int main(){
    int num1 , num2;
    scanf("%d %d",&num1,&num2);
    imprimeIntervalo(num1,num2);
    return 0;
}