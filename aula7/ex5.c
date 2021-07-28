/**
 * Faça uma função que receba uma string do usuário (máx. 50 caracteres) e um caractere. A função deverá
 * remover todas as ocorrências do caractere na string e retornar o número de remoções realizadas.
 * 
 * Escreva uma função principal (main) que leia do teclado um caracter e uma string e chame a função
 * desenvolvida no item anterior passando estas informações como parâmetro. Após chamar a função, mostre
 * a string alterada e a quantidade de caracteres removidos.
**/

#include <stdio.h>
#include <stdlib.h>

#define TAM 51

int removeCaracter(char texto[], char letra){
    int qtd = 0;
    for (int i = 0; texto[i] != '\0'; i++){
        if (texto[i] == letra){
            for (int j = i; texto[j] != '\0'; j++)
                texto[j] = texto[j+1];
            qtd++;
        }
    }
    return qtd;
}

int main(){
    char texto[TAM], letra;
    int remocoes;

    scanf("%c ", &letra);
    scanf("%[^\n]s ", texto);

    remocoes = removeCaracter(texto, letra);

    puts(texto);
    printf("%d",remocoes);
    return 0;
}