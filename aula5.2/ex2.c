/**
 * Uma professora passou um trabalho para ser feito em duplas e criou um critério para definir quem fará
 * a apresentação de cada trabalho para a turma, baseado nas notas dos alunos até o momento. Se um dos
 * alunos tiver a partir de 7 pontos a mais que o outro ou nota superior a 4/3 da nota do outro aluno,
 * ele não deverá participar da apresentação; caso contrário, ambos deverão apresentar o trabalho.
 * 
 * a) Crie uma função que receba dois valores reais como parâmetros, representando as notas do primeiro
 * e do segundo integrante da dupla. A função deverá imprimir, de acordo com o critério estabelecido,
 * "Apenas o 1o aluno apresentara o trabalho", "Apenas o 2o aluno apresentara o trabalho" ou "Ambos
 * apresentarao o trabalho". É obrigatório o uso do ELSE nesta questão.
 * 
 * b) Faça um programa que, para cada uma das 10 duplas, leia a nota dos alunos que formam a dupla e
 * chame a função acima para imprimir quem fará a apresentação.
**/

#include <stdlib.h>
#include <stdio.h>

void apresentacaoTrabalho(float nota1 , float nota2){
    if ( (nota1 >= (nota2 + 7)) || (nota1 > ((nota2 * 4) / 3)) ) {
        printf("Apenas o 2o aluno apresentara o trabalho\n");
    } else {
        if ( (nota2 >= (nota1 + 7)) || (nota2 > ((nota1 * 4) / 3)) ) {
            printf("Apenas o 1o aluno apresentara o trabalho\n");
        } else {
            printf("Ambos apresentarao o trabalho\n");
        }
    }
}

int main(){
    int contDuplas;
    float n1 , n2;
    contDuplas = 0;

    while (contDuplas < 10){
        scanf("%f %f",&n1,&n2);
        apresentacaoTrabalho(n1,n2);
        contDuplas++;
    }

    return 0;
}