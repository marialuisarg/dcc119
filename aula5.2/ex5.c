/**
 * Faça uma função que recebe um valor N inteiro e que, se N for positivo, a função deve imprimir a
 * mensagem , (Fatorial calculado:) e retornar o fatorial de N (N!). 
 * Se não for possível calcular o fatorial, a função deve imprimir mensagem, (Fatorial não pode ser
 * calculado: )e retornar o valor -1.
**/

#include <stdio.h>
#include <stdlib.h>

void calculaFatorial(int N){
    if (N>=0){
        int fat = 1;

        for(int i=1; i<=N; i++){
            fat = fat * i;
        }

        printf("Fatorial calculado:%d",fat);

    } else {
        printf("Fatorial não pode ser calculado:-1");
    }
}

int main(){
    int num;
    scanf("%d",&num);
    calculaFatorial(num);
    return 0;
}