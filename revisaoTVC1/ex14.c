/**
 * Considerando um vetor com no máximo de 100 elementos, faça o que se pede:
 * 
 * a) Crie uma função que receba um vetor e o seu tamanho e preencha-o com valores digitados no teclado. A função deve descartar valores
 * repetidos durante a leitura, ou seja, sempre que o usuário informar um valor já existente no vetor, a função deve solicitar um novo valor
 * para a mesma posição.
 * 
 * b) Elabore uma função que receba um vetor e o seu tamanho e reorganize os elementos do vetor de modo que os elementos pares fiquem
 * posicionados à esquerda e os números ímpares à direita.
 * 
 * c) Faça um programa que crie um vetor leia o número de elementos, chame as funções acima e imprima o vetor após cada função.
**/

#include <stdlib.h>
#include <stdio.h>

#define MAX 100

void recebeVetor(int vet[], int tam){
    int valor, qtdIgual = 0;

    for (int i = 0; i < tam; i++){ //preenchimento do vetor
        scanf("%d",&valor);

        for (int j = 0; j <= (i - 1); j++){ //verifica outros valores armazenados
            if (valor == vet[j]) // conta valores iguais
                qtdIgual++;
        }

        if (qtdIgual == 0){ // se não tiver iguais, armazena
            vet[i] = valor;
        } else { // se tiver iguais, não armazena e corrige variáveis
            qtdIgual = 0; 
            i --;
        }
    }
}

void organizaVetor(int vet[], int tam){
    int aux[tam], i2 = 0;
    
    for (int i = 0; i < tam; i++){ // guarda os pares no novo vetor
        if (vet[i]%2==0){
            aux[i2] = vet[i];
            i2++;
        }
    }

    for (int j = 0; j < tam; j++){ // guarda os ímpares nas outras posições
        if (vet[j]%2!=0){
            aux[i2] = vet[j];
            i2++;
        }
    }

    for (int n = 0; n < tam; n++){ // iguala os vetores
        vet[n] = aux[n];
    }
}

int main(){
    int vet[MAX], tam;

    scanf("%d",&tam);
    
    recebeVetor(vet,tam);

    printf("Impressao do vetor apos a leitura\n");
    for (int n = 0; n < tam; n++){
        printf("vet[%d] = %d\n",n,vet[n]);
    }

    organizaVetor(vet,tam);

    printf("Vetor apos a reorganizacao\n");
    for (int n = 0; n < tam; n++){
        printf("vet[%d] = %d\n",n,vet[n]);
    }

    return 0;
}