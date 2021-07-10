/**
 * Um professor resolveu criar uma regra para avaliar a interação entre um grupo de alunos ao longo do
 * semestre. Considere que será avaliado um grupo de quatro alunos e que a regra diz que cada integrante
 * deste é responsável por dar uma nota para os outros três colegas. Faça um programa que calcule as
 * notas de um grupo de alunos lendo do teclado as notas obtidas por cada integrante e imprimindo a
 * média das notas que cada aluno recebeu. Assuma que as notas atribuídas sempre estarão entre 1 e 10.
 * 
 * Dica: Use um vetor para armazenar em cada posição a soma das notas recebidas por cada estudante.
 * Observe que não é necessário armazenar as notas individuais de um aluno, apenas a soma de suas notas.
**/

#include <stdlib.h>
#include <stdio.h>

#define tamVetor 3

float calculaMedia(float vetorNotas[tamVetor]){
    float media = 0;

    for (int i = 0; i < tamVetor; i++){
        media += vetorNotas[i];
    }

    media = media / (tamVetor);

    return media;
}

int main(){
    float NotasAluno1 [tamVetor];
    float NotasAluno2 [tamVetor];
    float NotasAluno3 [tamVetor];
    float NotasAluno4 [tamVetor];
    float mediaAluno;

    // aluno1
    for (int n = 0; n < tamVetor; n++){
        scanf("%f",&NotasAluno1[n]);
    }
    mediaAluno = calculaMedia(NotasAluno1);
    printf("Média Aluno 01: %.1f\n",mediaAluno);

    // aluno2
    for (int n = 0; n < tamVetor; n++){
        scanf("%f",&NotasAluno2[n]);
    }
    mediaAluno = calculaMedia(NotasAluno2);
    printf("Média Aluno 02: %.1f\n",mediaAluno);

    // aluno3
    for (int n = 0; n < tamVetor; n++){
        scanf("%f",&NotasAluno3[n]);
    }
    mediaAluno = calculaMedia(NotasAluno3);
    printf("Média Aluno 03: %.1f\n",mediaAluno);

    // aluno4
    for (int n = 0; n < tamVetor; n++){
        scanf("%f",&NotasAluno4[n]);
    }
    mediaAluno = calculaMedia(NotasAluno4);
    printf("Média Aluno 04: %.1f\n",mediaAluno);

    return 0;
}