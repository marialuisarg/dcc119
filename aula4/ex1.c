/**
 * Escreva uma função que receba como parâmetro dois números inteiros e imprima na tela o resultado da
 * divisão inteira e da divisão real do primeiro pelo segundo. Caso não seja possível realizar a divisão,
 * imprima uma mensagem informando o problema. Escreva uma função principal (main) que leia dois valores
 * inteiros do teclado e chame a função desenvolvida no item anterior.
 **/

#include <stdio.h>
#include <stdlib.h>

void fazDivisoes(int a , int b){
    int resultInt;
    float resultReal;

    if (b != 0) {
        resultInt = a / b;
        resultReal = (float)a / b;

        printf("Divisão Inteira: %d\n",resultInt);
        printf("Divisão Real: %.2f\n",resultReal);
    } else {
        printf("Não é possível realizar a divisão.");
    }

    return;
}

int main(){
    int num1 , num2;
    scanf("%d %d", &num1 , &num2);
    fazDivisoes(num1,num2);
    return 0;
}