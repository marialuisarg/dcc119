/**
 * Para resolver este exercício, siga os passos abaixo:
 * 
 * Escreva uma função que receba como parâmetro uma string e imprima seu conteúdo sem espaços em branco.
 * A string não deve ser modificada pela função.
 * 
 * Escreva uma função principal (main) que leia do teclado uma string e chame a função desenvolvida no
 * item anterior.
**/

#include <stdlib.h>
#include <stdio.h>

#define TAM 500

void imprimeSemEspacos(char texto[]){
    for (int i = 0; texto[i] != '\0'; i++){
        if (texto[i] != ' ')
            printf("%c",texto[i]);
    }
}

int main(){
    char texto[TAM];
    scanf("%[^\n]s",texto);
    imprimeSemEspacos(texto);
    return 0;
}