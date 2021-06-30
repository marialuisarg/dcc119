/**
 * Para resolver este exercício, siga os passos abaixo:
 * Escreva uma função que receba como parâmetro um número inteiro e imprima na tela sua tabuada.
 * Escreva uma função principal (main) que chame a função desenvolvida no item anterior para imprimir
 * a tabuada de todo valor inteiro que o usuário digitar. O programa deverá ser encerrado quando o
 * usuário digitar o valor zero.
**/

#include <stdlib.h>
#include <stdio.h>

void imprimeTabuada(int n){
    int mult;
    int total;
    mult = 0;

    printf("Tabuada do %d:\n",n);
    
    while(mult <= 10){
        total = mult * n;
        printf("%d x %d = %d\n",n,mult,total);
        mult++;
    }
}

int main(){
    int numero;
    scanf("%d",&numero);
    while (numero != 0){
        imprimeTabuada(numero);
        printf("\n");
        scanf("%d",&numero);
    }
    return 0;
}