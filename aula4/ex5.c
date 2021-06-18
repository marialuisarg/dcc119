/**
 * Faça uma função que receba um número inteiro como parâmetro e imprima se o número lido é par ou impar.
 * Além disso, crie também a função principal (main) com todas as partes necessárias para o bom
 * funcionamento da função criada.
 **/

#include <stdio.h>
#include <stdlib.h>

void parOuImpar(int numero){
    if (numero%2 == 0){
        printf("par");
    } else {
        printf("impar");
    }
}

int main(){
    int num;

    scanf("%d",&num);
    parOuImpar(num);
    
    return 0;
}