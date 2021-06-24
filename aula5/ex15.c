/**
 * Faça um programa que leia uma sequência de números positivos. Calcule a quantidade de números
 * pares e ímpares, a média de valores pares e a média geral dos números lidos. O número que
 * encerrará a leitura será zero.
**/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num , qtdPares , qtdImpares , somaPares , somaImpares;
    float mediaPares , mediaGeral;

    qtdPares = 0;
    qtdImpares = 0;
    somaPares = 0;
    somaImpares = 0;
    mediaPares = 0;
    mediaGeral = 0;

    scanf("%d",&num);

    while(num != 0){
        if (num%2==0){
            qtdPares++;
            somaPares+=num;
        } else {
            qtdImpares++;
            somaImpares+=num;
        }

        if (qtdPares != 0)
            mediaPares = somaPares / (float) qtdPares;
        else
            mediaPares = (float) 0;
        mediaGeral = (somaPares + somaImpares) / (float) (qtdPares + qtdImpares);

        scanf("%d",&num);
    }

    printf("%d \n%d \n%.3f \n%.3f",qtdPares,qtdImpares,mediaPares,mediaGeral);

    return 0;
}