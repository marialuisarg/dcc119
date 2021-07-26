/**
 * Para resolver este exercício, siga os passos abaixo:
 * 
 * Escreva uma função que receba como parâmetro uma string, conte quantos caracteres desta são iguais ao caractere 'a' e substitua-os por 'b'.
 * Esta função deverá retornar quantos caracteres foram modificados.
 * 
 * Escreva uma função principal (main) que leia do teclado uma string, chame a função desenvolvida no item anterior e imprima na tela o
 * resultado obtido (string e retorno).
**/

#include <stdlib.h>
#include <stdio.h>

#define TAM 500

int substituiCaracteres(char frase[TAM], int cont){
    for (int i = 0; frase[i] != '\0'; i++){
        if (frase[i] == 'a'){
            frase[i] = 'b';
            cont++;
        }
    }
    return cont;
}

int main(){
    char frase[TAM];
    int cont = 0;

    scanf("%[^\n]s",frase);
    cont = substituiCaracteres(frase, cont);
    
    puts(frase);
    printf("Caracteres Modificados: %d",cont);
    return 0;
}