/**
 * Implemente uma função que receba um vetor de inteiros e seu tamanho e ordene-o.
**/

#include <stdio.h>
#include <stdlib.h>

void ordenaVetor(int tam , int vetor[tam-1]){
    int aux;

    //percorre por índice
    for (int a1 = 0; a1 < tam; a1++){
        //percorre comparando aos próximos índices
        for (int a2 = a1+1; a2 < tam; a2++){
            //se o valor na posição a1 é maior que o da posição a2, eles são invertidos
            if (vetor[a1]>vetor[a2]){
                aux = vetor[a1];
                vetor[a1] = vetor[a2];
                vetor[a2] = aux;
            }
        }
    }

    //imprime o vetor
    for(int n = 0; n < tam; n++){
        printf("%d\n",vetor[n]);
    }
}

int main(){
    int tam = 5;
    int vetor[tam-1];

    //armazena no vetor original
    for (int i = 0; i < tam; i++){
        scanf("%d",&vetor[i]);
    }

    //passa tamanho e vetor para a função
    ordenaVetor(tam,vetor);
    
    return 0;
}

