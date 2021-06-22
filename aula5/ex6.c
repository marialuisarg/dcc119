/**
 * Desenvolva  uma função que receba como parâmetro um número inteiro N. A função deve ler "n" valores do
 * teclado e retornar quantos destes valores são negativos. Crie também uma função principal (main) que
 * leia um número inteiro do teclado, chame a função desenvolvida e imprima o resultado.
 **/

#include <stdlib.h>
#include <stdio.h>

int valoresNegativos(int N){
    int contador , qtdNeg;
    float num;
    contador = 0;
    qtdNeg = 0;

    while (contador < N){
        scanf("%f",&num);
        if (num<0)
            qtdNeg++;
        contador++;
    }

    return qtdNeg;
}

int main(){
    int qtdTotal , qtdNeg;
    
    scanf("%d",&qtdTotal);
    qtdNeg = valoresNegativos(qtdTotal);
    printf("Total de números negativos: %d",qtdNeg);

    return 0;
}