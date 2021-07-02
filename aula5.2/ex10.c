/**
 * Sabe-se que uma das formas para se calcular o valor de π é com a seguinte equação:
 * PI = 4 * ( 1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13 ... )
 * 
 * Com isso em mente, escreva uma função que recebe como parâmetro um número inteiro e positivo N e que
 * calcula o valor aproximado de π, utilizando N termos na equação.
 * 
 * Por exemplo, se o valor de N digitado for 3, a equação será a seguinte:
 * 
 * PI = 4 * (1 - 1/3 + 1/5)
 * 
 * Além de calcular o valor aproximado de π, a função deve imprimir (como nos exemplos) a expressão,
 * com cada termo utilizado no cálculo, e o resultado obtido.
 * 
 * A função principal deve ler o inteiro N e chamar a função criada.
**/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;
    float divisor, pi , somaPi;
    char sinal;

    scanf("%d",&n);
    somaPi = 1;
    divisor = 3;

    if (n>0){

        printf("1 ");

        for (int i = 1; i < n ; i++){
            
            if (i%2==0){ //qtd par
                somaPi = somaPi + (1 / (float) divisor);
                sinal = '+';

            } else { //qtd ímpar
                somaPi = somaPi - (1 / (float) divisor);
                sinal = '-';
            }

            printf("%c 1/%.f ",sinal,divisor);

            divisor += 2;
        }

        pi = 4 * somaPi;

        printf("\n%.3f",pi);

    }

    return 0;
}