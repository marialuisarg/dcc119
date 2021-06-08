#include <stdlib.h>
#include <stdio.h>

int main(){
    float salMinimo , salFunc;
    printf("Insira o valor do salário mínimo: R$");
    scanf("%f" , &salMinimo);
    printf("Insira o valor do salário do funcionário: R$");
    scanf("%f" , &salFunc);

    float equiv = salFunc / salMinimo;
    printf("O salário do funcionário equivale a %.2f salários mínimos." , equiv);

    return 0;
}