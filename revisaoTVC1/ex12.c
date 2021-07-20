/**
 * Sabe-se que uma das formas para se calcular o valor de π é com a seguinte equação:
 * 
 * PI = 4 * ( 1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13 ... )
 * 
 * Com isso em mente, escreva uma função que recebe como parâmetro um número inteiro e positivo N e que calcula o valor aproximado de π,
 * utilizando N termos na equação.
 * 
 * Por exemplo, se o valor de N digitado for 3, a equação será a seguinte:
 * 
 * PI = 4 * (1 - 1/3 + 1/5)
 * 
 * Além de calcular o valor aproximado de π, a função deve imprimir (como nos exemplos) a expressão, com cada termo utilizado no cálculo, e
 * o resultado obtido.
 * 
 * A função principal deve ler o inteiro N e chamar a função criada.
**/

#include <stdlib.h>
#include <stdio.h>

void calculaPi(int N){
    float totalPi;
    int div = 3;
    char op;

    if (N > 1){
        printf("1");
        totalPi = 1;

        for (int i = 2; i <= N; i++){
            
            if (i % 2 == 0){ // i par
                totalPi -= (1 / (float)div); //subtrai 1/div do total
                op = '-'; // indica a operação feita
                printf(" %c 1/%d",op,div); // imprime a conta

            } else { // i ímpar
                totalPi += (1 / (float)div); //soma 1/div no total
                op = '+'; // indica a operação feita
                printf(" %c 1/%d",op,div); // imprime a conta
            }

            div = div + 2; // soma dois no divisor
        }

        // calcula e imprime pi
        totalPi = 4 * totalPi; 
        printf("\n%.3f",totalPi);

    } else if (N == 1) {
        totalPi = 4;
        printf("1\n%.3f",totalPi);
    }
}

int main(){
    int N;
    scanf("%d",&N);
    calculaPi(N);
    return 0;
}