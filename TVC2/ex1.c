/**
 * Para te ajudar a organizar a lista de compras, você decidiu fazer um programa que receba pelo teclado os nomes
 * dos vários itens separados por vírgula, e imprime ao final a lista com quebras de linha e a informação da
 * quantidade de itens que você  precisa comprar.
 * Crie uma função que recebe a lista (string) como parâmetro, troque as vírgulas por '\n' e retorne a quantidade
 * de itens a serem comprados. 
 * 
 * Faça a leitura da lista e a impressão final no programa principal.
 * Obs: considere que a lista tenha no máximo 1000 caracteres.
**/

#include <stdio.h>
#include <stdlib.h>

#define MAX 1001

int contaItens(char lista[MAX]){
    int i, qtd = 0;
    for (i = 0; lista[i] != '\0'; i++){
        if (lista[i] == ','){
            lista[i] = '\n';
            qtd++;
        }
    }
    return qtd+1;
}

int main()
{
    char lista[MAX];
    int qtdIntens;
    
    scanf("%[^\n]s ", lista);
    
    qtdIntens = contaItens(lista);
    
    printf("Lista:\n ");
    puts(lista);
    printf("Voce precisa comprar %d itens.", qtdIntens);

    return 0;
}