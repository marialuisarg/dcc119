/**
 * Faça um programa que preenche um vetor de inteiros, de tamanho 10, com valores lidos do teclado.
 * O programa deve verificar se há elementos repetidos no vetor e imprimir os índices de todos os pares
 * de elementos repetidos. Faça as impressões seguindo a ordem dos exemplos, ou seja, do menor para o
 * maior índice
**/

#include <stdio.h>
#include <stdlib.h>

#define indice 9

int main(){
    int vetorInteiros [indice];

    // lê todos os valores e armazena no vetor
    for (int i = 0; i <= indice; i++){
        scanf("%d",&vetorInteiros[i]);
    }

    // testa, a cada valor do vetor, se há elementos repetidos
    for (int i = 0; i <= indice; i++){

        int n = 0;

        while(n <= indice){

            if ((n > i) && (vetorInteiros[n] == vetorInteiros[i])) { 
                    printf("%d e %d\n",i,n);
            }
            
            n++;
        }
    }
    return 0;
}