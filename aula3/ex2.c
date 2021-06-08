#include <stdio.h>
#include <stdlib.h>

/*
Considerando o critério de aprovação de uma disciplina que determina que um aluno está aprovado se a
média ponderada de suas três provas for maior ou igual a 5.0, onde a média é dada pela fórmula:
media = (p1 + p2 + 2.0 * p3) / 4.0

a) Escreva uma função que receba como parâmetros as notas das duas primeiras provas de um aluno (p1 e p2)
e retorne a nota mínima que o aluno precisa na terceira prova para que seja aprovado.

b) Escreva um programa que leia do teclado as duas primeiras notas de um aluno, chame a função do item
anterior e imprima a nota mínima que o aluno precisa tirar na p3 para que seja aprovado.
*/

float calculaNotaMinima(float p1, float p2);

int main(){
    float notaMinima, notaP1, notaP2;
    
    // lê notas P1 e P2
    scanf("%f %f", &notaP1, &notaP2);

    // calcula nota mínima em P3 pela função
    notaMinima = calculaNotaMinima(notaP1, notaP2);

    //exibe nota na tela
    printf("Nota necessaria: %.2f",notaMinima);
    return 0;
}

float calculaNotaMinima(float p1, float p2){
    float minimaP3;
    /*  media = (p1 + p2 + 2.0 * p3) / 4.0
        media >= 5
        5 * 4 = 20
        20 = (p1 + p2 + 2.0 * p3)
        20 - (p1 + p2) = 2.0 * p3
        p3 = (20 - (p1 + p2)) / 2;
    */

    minimaP3 = (20 - (p1 + p2)) / 2;
    return minimaP3;
}