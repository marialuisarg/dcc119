/**
 * Para resolver este exercício, siga os passos abaixo:
 * Escreva uma função que receba como parâmetro um valor inteiro e positivo (N), calcule o resultado da
 * expressão abaixo e imprima na tela o resultado obtido.
 * 
 * Escreva uma função principal (main) que leia um valor inteiro e positivo do teclado e chame a função
 * desenvolvida no item anterior.
 * 
 * E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!
**/

#include <stdio.h>
#include <stdlib.h>

void imprimeResultado(int N){
    float E = 1 , div;
    while (N >=1) {
       
        // cálculo fatorial N
        float fatN;
        fatN = 1;
        for(int i=1; i<=N; i++){
            fatN = fatN * i;
        }

        div = 1 / fatN;
        E += div;
        
        N--;
    }
    printf("E = %f",E);
}

int main(){
    int num;
    scanf("%d",&num);
    imprimeResultado(num);
    return 0;
}