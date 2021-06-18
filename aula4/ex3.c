/**
 * Faça uma função que receba como parâmetro  dois números reais e um caractere: ' + ', ' - ', ' * ' e
 * ' / '. A função deve imprimir o resultado da operação efetuada sobre os números lidos.
 * Lembre-se que divisão por 0 não existe, portanto imprima a mensagem "ERRO: Divisao por Zero" caso não
 * seja possível efetuar um cálculo.
 * Faça também um programa para ler o caractere e os números e chamar a função feita.
**/

#include <stdio.h>
#include <stdlib.h>

void fazOperacoes (float a , float b , char c) {
    float op;
    switch (c) {
        case '+':
            op = a + b;
            printf("%.4f",op);
            break;
        case '-':
            op = a - b;
            printf("%.4f",op);
            break;
        case '*':
            op = a * b;
            printf("%.4f",op);
            break;
        case '/':
            if (b != 0){
                op = a / b;
                printf("%.4f",op);    
            } else {
                printf("ERRO: Divisao por Zero");
            }
            break;
    }
}

int main () {
    char caractere;
    float num1 , num2;

    scanf("%c%*c%f%f",&caractere,&num1,&num2);

    fazOperacoes(num1 , num2 , caractere);
    
    return 0;
}