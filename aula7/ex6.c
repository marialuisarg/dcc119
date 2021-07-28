/**
 * Fazer uma função que leia uma string do teclado (máx. 50 caracteres) e imprima uma “estatística” dos
 * caracteres digitados. O programa deverá imprimir a quantidade total de caracteres digitados, a
 * quantidade de vogais, a quantidade de consoantes, e a quantidade de outros caracteres.
 * 
 * Observações:
 * 
 * - Os espaços são contados como caracteres especiais.
 * 
 * - Quando uma vogal é acentuada, o programa considera aquela posição como sendo dois caracteres
 * especiais.
 * 
 * - Além disso, o acento agudo é considerado pelo algoritmo como sendo dois caracteres.
 * 
 * - O cê-cedilha (ç) é considerado dois caracteres especiais.
**/

#include <stdlib.h>
#include <stdio.h>

#define TAM 51

int main(){
    char texto[TAM];
    int total = 0, vogais = 0, cons = 0, outros = 0; 
    
    scanf("%[^\n]s ", texto);

    for (int i = 0; texto[i] != '\0'; i++){
        total++;

        if ((texto[i] >= 'A' && texto[i] <= 'Z') || (texto[i] >= 'a' && texto[i] <= 'z')){
            if (texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U' || 
            texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u')
                vogais++;
            else if (texto[i] == 128 || texto[i] == 135)
                outros+=2;
            else
                cons++;
        } else
            outros++;
    }

    printf("Total de caracteres digitados: %d\n",total);
    printf("--> Vogais: %d.\n",vogais);
    printf("--> Consoantes: %d.\n",cons);
    printf("--> Outros: %d.",outros);

    return 0;
}