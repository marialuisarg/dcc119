/**
 * Escreva um programa que leia a nota de vários alunos e imprima na tela se cada um destes foi ou não
 * aprovado. Seu programa deve escrever na tela a palavra "Reprovado!" se a nota do aluno for inferior a
 * 60 ou escrever "Aprovado!", caso contrário. A quantidade de notas lidas é desconhecida. Seu programa
 * deve ser encerrado se for lido um valor inválido, isto é, fora do intervalo entre 0 e 100. 
**/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int nota;

    scanf("%d",&nota);

    while (nota >= 0 && nota <=100){
        if (nota<60)
            printf("Reprovado!\n");
        else 
            printf("Aprovado!\n");

        scanf("%d",&nota);
    }

    return 0;
}