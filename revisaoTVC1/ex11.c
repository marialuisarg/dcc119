/**
 * Faça uma função que receba como parâmetro  dois números reais e um caractere: ' + ', ' - ', ' * ' e ' / '. A função deve imprimir o 
 * resultado da operação efetuada sobre os números lidos.
 * 
 * Lembre-se que divisão por 0 não existe, portanto imprima a mensagem "ERRO: Divisao por Zero" caso não seja possível efetuar um cálculo.
 * 
 * Faça também um programa para ler o caractere e os números e chamar a função feita.
**/

#include <stdio.h>
#include <stdlib.h>

void imprimeOperacao(float a, float b, char op){
    float resultado;

    if (b == 0 && op == '/')
        printf("ERRO: Divisao por Zero");
    else {
        switch (op){
        case '+':
            resultado = a + b;    
            break;
        case '-':
            resultado = a - b;    
            break;
        case '*':
            resultado = a * b;    
            break;
        case '/':
            resultado = a / b;
            break;
        default:
            break;
        }

        printf("%.4f",resultado);
    }
}

int main(){
    float num1 , num2;
    char operador;

    scanf("%c%*c %f %f",&operador,&num1,&num2);
    imprimeOperacao(num1,num2,operador);

    return 0;
}