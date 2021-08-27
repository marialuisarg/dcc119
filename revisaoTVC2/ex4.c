/**
 * Uma falha em um sistema de comunicação fez com que alguns caracteres das mensagens enviadas fossem substituídos por ‘-’. Assim, nesse sistema,
 * a mensagem  "Algoritmos eh facil” poderia ser transformada em  “A-gor-tm-s eh fa-il”. 
 * 
 * Para resolver esta questão, deve-se desenvolver:
 * 
 * a) Uma função que receba duas strings, uma representando uma mensagem transmitida nesse sistema e outra representando a string original. A
 * função deve realizar a correção da string e devolver quantos caracteres foram corrigidos.
 * 
 * b) Um programa que leia uma string transmitida nesse sistema e a string original, chame a função do item a), imprima a string corrigida e o
 * número de caracteres modificados
**/

#include <stdlib.h>
#include <stdio.h>

#define MAX 100

int corrige(char transmitida[MAX], char original[MAX]){
    int i, caracteres = 0;
    for (i = 0; transmitida[i] != '\0'; i++){
        if (transmitida[i] != original[i]){
            caracteres++;
            transmitida[i] = original[i];
        }
    }
    return caracteres;
}

int main() {
    char transmitida[MAX], original[MAX];
    int caract;

    scanf("%[^\n]s ", transmitida);
    scanf("%*c");
    scanf("%[^\n]s ", original);

    caract = corrige(transmitida, original);

    printf("String corrigida: %s\n", transmitida);
    printf("Numero de caracteres corrigidos: %d", caract);

    return 0;
}