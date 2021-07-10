/**
 * Faça uma função que inverta a ordem dos elementos de um vetor (exemplo: o vetor {9,2,5,6} ao final
 * da função deve ser alterado para {6,5,2,9}). Faça um programa para testar a função com 3 vetores de
 * tamanhos 5, 9 e 14. Use impressões para mostrar a configuração de um vetor a cada passo do algoritmo.
**/

#include <stdio.h>
#include <stdlib.h>

void imprimeVetores(int tamanho){

    //recebe os valores e armazena no vetorInicial
    int vetorInicial[tamanho];
    for (int i = 0; i < tamanho; i++){
        scanf("%d",&vetorInicial[i]);
    }

    //armazena as variáveis invertendo no vetor
    int vetor[tamanho];
    for (int a = 0; a < tamanho; a++){
        vetor[a] = vetorInicial[tamanho-(a+1)];
        printf("v[%d] = %d\n",a,vetor[a]);
    }
}

int main(){
    int tamanho;
    
    //recebe o tamanho do vetor1 e chama a funcao
    scanf("%d",&tamanho);
    printf("Inversao do primeiro vetor\n");
    imprimeVetores(tamanho);

    //recebe o tamanho do vetor2 e chama a funcao
    scanf("%d",&tamanho);
    printf("\nInversao do segundo vetor\n");
    imprimeVetores(tamanho);

    //recebe o tamanho do vetor3 e chama a funcao
    scanf("%d",&tamanho);
    printf("\nInversao do terceiro vetor\n");
    imprimeVetores(tamanho);
    
    return 0;
}
