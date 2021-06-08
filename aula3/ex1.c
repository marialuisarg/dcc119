#include <stdio.h>
#include <stdlib.h>

/*
Escreva uma função que receba como parâmetro um tempo expresso em segundos e imprima na tela
esse mesmo tempo e horas, minutos e segundos.

Escreva uma função principal (main) que leia um valor inteiro do teclado e chame a função
desenvolvida no item anterior.
*/

void conversaoTempo(int seg);

int main(){
    int segundos;
    scanf("%d",&segundos);
    conversaoTempo(segundos);

    return 0;
}

void conversaoTempo(int seg){
    int hora, min;
    hora = seg/3600;
    min = (seg%3600)/60;
    seg = ((seg%3600)%60);

    printf("Conversão: %d horas, %d minutos e %d segundos.",hora,min,seg);
}