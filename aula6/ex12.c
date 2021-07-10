/**
 * Implemente uma função que recebe como parâmetros um vetor de valores reais e a quantidade de elementos
 * que ele armazena e retorne a média desses valores. Imprima, como nos exemplos, a média.
 * 
 * Dica: leia primeiro a quantidade de elementos e depois os valores do vetor. Utilize #define.
**/

#include <stdlib.h>
#include <stdio.h>

#define qtd qtdElementos

void retornaMedia(int qtd, float vetor[]){
    float media = 0;
    for (int i = 0; i<qtd; i++){
        scanf("%f",&vetor[i]);
        media += vetor[i];
    }

    media = media/qtd;
    printf("Media = %.2f",media);
}

int main(){
    int qtdElementos;
    scanf("%d",&qtdElementos);

    float vetor[qtdElementos];

    retornaMedia(qtd,vetor);    

    return 0;
}