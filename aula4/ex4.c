/**
 * Para resolver este exercício, siga os passos abaixo:
 * Escreva uma função que receba como parâmetro um inteiro (dia da semana) e imprima o seu nome por
 * extenso. Considere que o número 1 representa o domingo; 2 a segunda-feira, etc. Caso o número não
 * corresponda a um dia da semana, a função deve exibir a mensagem "Dia da semana inválido!".
 * 
 * Escreva uma função principal (main) que leia do teclado um número inteiro e chame a função
 * desenvolvida no item anterior.
 **/

#include <stdio.h>
#include <stdlib.h>

void diaDaSemana(int dia){
    switch (dia)
    {
    case 1:
        printf("Domingo!");
        break;
    case 2:
        printf("Segunda-feira!");
        break;
    case 3:
        printf("Terça-feira!");
        break;
    case 4:
        printf("Quarta-feira!");
        break;
    case 5:
        printf("Quinta-feira!");
        break;
    case 6:
        printf("Sexta-feira!");
        break;
    case 7:
        printf("Sábado!");
        break;
    default:
        printf("Dia da semana inválido!");
        break;
    }
}

int main(){
    int dia;

    scanf("%d",&dia);
    diaDaSemana(dia);
    
    return 0;
}