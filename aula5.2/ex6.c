/**
 * Faça um programa para determinar o número de meses necessários para que uma aplicação seja suficiente
 * para pagar uma dívida. Seu programa deve ler do teclado dois valores reais iniciais para dívida e
 * aplicação, respectivamente. Assuma que a dívida cresce a juros de 2.5% ao mês e que a aplicação rende
 * 4% ao mês.
**/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float divida , aplicacao;
    int i;
    scanf("%f %f",&divida,&aplicacao);

    for (i = 0; divida >= aplicacao; i++)
    {
        divida = divida * 1.025;
        aplicacao = aplicacao * 1.04;
    }

    printf("São necessários %d meses para pagar esta dívida.",i);
    
    return 0;
}