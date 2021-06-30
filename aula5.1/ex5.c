/**
 * Faça uma função que leia uma sequência de valores inteiros do teclado até que seja digitado um valor
 * que não seja múltiplo de 3. A função deverá retornar o último valor digitado. Crie um programa que
 * chame a função criada e imprima seu resultado, se este estiver fora do intervalo fechado entre 0 e 60.
 * Caso contrário, o programa deve imprimir "valor invalido".
 **/ 

#include <stdio.h>
#include <stdlib.h>

int multiplosDe3 (){
    int num;
    do {
        scanf("%d",&num);
    } while(num%3==0);

    return num;
}

int main(){
    int numero;
    numero = multiplosDe3();
    if (numero < 0 || numero > 60)
        printf("%d",numero);
    else
        printf("valor invalido");
    return 0;
}