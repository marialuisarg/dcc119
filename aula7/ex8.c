/**
 * Para resolver este exercício, siga os passos abaixo:
 * 
 * Escreva uma função que receba como parâmetro duas strings, strA e strB, e o tamanho máximo definido
 * pelo usuário para ambas, t. A função deve completar a string strA com os caracteres da string strB
 * sem que o tamanho máximo da string seja ultrapassado (como mostrado nos exemplos abaixo).
 * 
 * Escreva uma função principal (main) que leia do teclado o tamanho máximo das strings, e as duas strings,
 * chame a função desenvolvida no item anterior e imprima na tela o resultado obtido.
**/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 1000

void completaString(char strA[], char strB[], int t){
    int tamA = strlen(strA), i = 0;

    while (tamA < t){
        strA[tamA] = strB[i];
        tamA++;
        i++;
    }

    strA[t] = '\0';

}

int main(){
    char strA[MAX], strB[MAX];
    int t;

    scanf("%d ",&t);
    scanf("%[^\n]s ",strA);
    scanf("%*c");
    scanf("%[^\n]s ",strB);

    completaString(strA, strB, t);

    puts(strA);
    return 0;
}