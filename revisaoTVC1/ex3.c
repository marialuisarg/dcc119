/**
 * Crie uma função chamada PREENCHE que receba 3 parâmetros: um vetor de inteiros de 10 posições chamado
 * ORIGEM, que já vem preenchido com valores inteiros; um vetor de inteiros de 10 posições chamado
 * DESTINO e, uma variável inteira chamada VAL. Esta função deve preencher o vetor DESTINO da seguinte
 * forma: para os índices dos vetores menores ou iguais a VAL, esta função deve preencher o vetor DESTINO
 * com o valor do vetor origem, na mesma posição. Para os índices maiores que VAL, o vetor DESTINO tem
 * que receber o valor do vetor ORIGEM na posição posterior, ou seja, DESTINO na posição i recebe valor
 * de ORIGEM na posição i+1. A última posição do vetor DESTINO deve ser preenchida com o valor 100.
 * 
 * No programa principal (função main), crie os dois vetores de inteiros de 10 posições e uma variável
 * inteira. Preencha, de forma automática, o vetor ORIGEM com o valor do seu índice, ou seja, ORIGEM no
 * índice zero recebe o valor zero, e assim por diante até a última posição. Peça o usuário para digitar
 * um valor no intervalo de 0 à 8 e chame a função PREENCHE passando esses 3 parâmetros: os dois vetores
 * criados e o valor digitado pelo usuário. Por fim, imprima o vetor DESTINO . 
**/

#include <stdio.h>
#include <stdlib.h>

#define tam 10

void preenche(int origem[] , int destino[] , int val){
    for (int i = 0; i < tam; i++){
        if (i <= val)
            destino[i] = origem[i];
        else if (i > val)
            destino[i] = origem[i+1];

        destino[tam-1] = 100; 
    }
}

int main(){
    int origem[10] , destino[10] , var;
    
    for (int i = 0; i < tam; i++)
        origem[i] = i;
    
    scanf("%d",&var);
    preenche(origem,destino,var);
    
    for (int i = 0; i < tam; i++)
        printf("%d ",destino[i]);
    return 0;
}