/**
 * Escreva uma função que recebe como parâmetro um número inteiro n. A função deve retornar 1 caso o
 * número digitado seja primo e 0 caso contrário. Faça também um programa para ler o número e chamar
 * essa função e imprimir “PRIMO” caso a função retorne 1 e "NAO PRIMO" caso contrario. Dica: Números
 * primos são os números naturais que têm apenas dois divisores diferentes: o 1 e ele mesmo.
**/

#include <stdio.h>
#include <stdlib.h>

int verificaPrimo(int n){
    int contador, qtdDiv;
    contador = 1;
    qtdDiv = 0;

    while (contador <= n){
        if (n%contador == 0)
            qtdDiv++;
        contador++;
    }

    if (qtdDiv == 2)
        return 1;
    else
        return 0;
}

int main(){
    int numero , teste;
    scanf("%d",&numero);
    teste = verificaPrimo(numero);

    if (teste == 1)
        printf("PRIMO");
    else
        printf("NAO PRIMO");
    
    return 0;
}