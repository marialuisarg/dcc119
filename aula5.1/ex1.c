/**
 * Uma empresa tem 5 funcionários e resolveu conceder a todos um auxílio mensal de R$60,00 por mês para
 * cada dependente menor de 18 anos.
 * Escreva um programa que, para cada um dos 5 funcionários, leia seu número de dependentes. Em seguida,
 * o programa deve ler a idade de cada dependente e imprimir o valor total do auxílio que este
 * funcionário receberá. Você pode criar funções, se achar necessário.
**/

#include <stdio.h>
#include <stdlib.h>

void auxilioPorFunc(){
    int numDep , idade , i;
    float auxilio;

    scanf("%d",&numDep);
    i = 0;
    auxilio = 0;

    while (i < numDep){
        scanf("%d",&idade);
        if (idade < 18){
            auxilio += 60;
        }
        i++;
    }

    printf("Valor total do auxilio: R$ %.2f\n",auxilio);
}

int main(){
    int n = 0;

    while (n < 5){
        auxilioPorFunc();
        n++;
    }
    
    return 0;
}