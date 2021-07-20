/**
 * Escreva uma função que irá calcular estatísticas dos 10 times que disputam o Campeonato Brasileiro 2021
 * da Série A. Sua função deve receber 3 (três) vetores inteiros, onde o mesmo índice nos 3 vetores
 * representa um time do campeonato. O primeiro vetor armazenará o número de vitórias de cada time, o
 * segundo vetor armazenará o número de empates de cada time e o terceiro vetor estará vazio e será
 * preenchido pela função.   Considere que o número do time possui valores de 1 a 10. A função deve:
 * 
 * a) Calcular a pontuação de cada um dos 10 times do campeonato, considerando a vitória como 3 pontos e
 * o empate 1 ponto. Armazenar a pontuação de cada time no terceiro vetor e imprimir na tela a pontuação
 * de cada time;
 * 
 * b) Imprimir na tela os números dos 2 times com menor pontuação, os quais serão rebaixados para disputar
 * o Campeonato Brasileiro da Série B de 2022.
 * 
 * Observação: considere que dois ou mais times não terão a mesma pontuação no campeonato.
 * 
 * Implemente também um programa principal para ler o número de vitórias e empates de cada time a ser
 * passado pelo vetor da função. Chame a função para que ela imprima na tela a pontuação dos 10 times do
 * campeonato, além dos números dos 2 times com menor pontuação, rebaixados para disputar o Campeonato
 * Brasileiro da Série B de 2022.
**/

#include <stdlib.h>
#include <stdio.h>

#define qtdTimes 10

void calculaPontuacao(int vitorias[], int empates[], int pontuacao[]) {
    int indiceZ = 0, indiceY = 0, pontosZ, pontosY;

    for (int i = 0; i < qtdTimes; i++){ // calcula pontuações
        pontuacao[i] = (vitorias[i] * 3) + (empates[i] * 1);
        printf("%d\n",pontuacao[i]);
    }

    pontosZ = pontuacao[0];

    for (int z = 0; z < qtdTimes; z++){ // armazena índice do time com menor pontuação
        if (pontuacao[z] < pontosZ){
            pontosZ = pontuacao[z];
            indiceZ = z;
        }
    }

    if (indiceZ == 0){ // armazena índice do time com 2ª menor pontuação
        pontosY = pontuacao[1];
        
        for (int y = 1; y < qtdTimes; y++) { 
            if ((pontuacao[y] < pontosY)){
                pontosY = pontuacao[y];
                indiceY = y;
            }
        }
    } else {
        pontosY = pontuacao[0];

        for (int y = 0; y < qtdTimes; y++) {
            if ((y != indiceZ) && (pontuacao[y] < pontosY)){
                pontosY = pontuacao[y];
                indiceY = y;
            }
        }
    }

    // corrige números dos times (+1)
    indiceZ+= 1;
    indiceY+= 1;

    // impressão na tela
    printf("%d\n%d",indiceZ,indiceY);
}

int main() {
    int vitorias[qtdTimes] , empates[qtdTimes] , pontuacao[qtdTimes];

    for (int i = 0; i < qtdTimes; i++){ // recebe vitorias
        scanf("%d", &vitorias[i]);
    }

    for (int k = 0; k < qtdTimes; k++){ // recebe empates
        scanf("%d", &empates[k]);
    }
    
    calculaPontuacao(vitorias, empates, pontuacao);

    return 0;
}