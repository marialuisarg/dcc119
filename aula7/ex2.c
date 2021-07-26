/**
 * Para resolver este exercício, siga os passos abaixo:
 * Escreva uma função que receba como parâmetro uma string e um caractere, retorne o número de vezes que o caractere aparece na string.
 * Escreva uma função principal (main) que leia do teclado uma string e um caractere, chame a função desenvolvida no item anterior e imprima
 * na tela o resultado obtido.
**/

#include <stdio.h>
#include <stdlib.h>

#define TAM 500

int contaCaracteres(char frase[TAM], char caractere){
    int cont = 0;
    for (int i = 0; frase[i] != '\0'; i++){
        if (frase[i] == caractere)
            cont++;
    }
    return cont;
}

int main(){
    char frase[TAM], crct;
    int qtd;

    scanf("%[^\n]s",frase);
    scanf(" %c",&crct);

    qtd = contaCaracteres(frase, crct);

    printf("%d",qtd);
    return 0;
}