/**
 * Escreva uma função que receba um vetor de valores reais e a quantidade de valores positivos. Além
 * disso, faça um programa que leia valores do teclado para preencher todo o vetor.
 * 
 * Observe que 0 e valores negativos devem ser ignorados e a leitura deve ignorar valores a mais. Imprima
 * o vetor resultante.
 * 
 * Dica: leia primeiro a quantidade de + e depois os valores candidatos do vetor. Imprima até 2 casas
 * decimais
**/

#include <stdlib.h>
#include <stdio.h>

void fazVetorPositivos(int qtdPositivos , float vetor[qtdPositivos - 1]){
    int cont = 0;
    float num;

    //recebe números até que todos os nums positivos sejam lidos
    while (cont < qtdPositivos){
        scanf("%f",&num);
        
        //armazena no vetor os nums positivos
        if (num>0){
            vetor[cont] = num;
            printf("%.2f ",vetor[cont]);
            cont++;
        }
    }
}

int main(){
    //recebe a quantidade de nums positivos e cria o vetor
    int qtdPositivos;
    scanf("%d",&qtdPositivos);
    float vetor[qtdPositivos - 1];

    fazVetorPositivos(qtdPositivos,vetor);
    
    return 0;
}