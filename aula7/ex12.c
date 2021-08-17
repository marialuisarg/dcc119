/**
 * Um teatro com 250 lugares tem os seguintes critérios de preço:
 * 
 * A entrada inteira custa R$ 75,00;
 * 
 * Pagam meia entrada pessoas com até 18 anos e pessoas com 65 anos ou mais;
 * 
 * Pessoas cujo nome completo contém o nome da personagem principal do espetáculo em cartaz, pagam
 * somente R$30,00.
 * 
 * a) Faça uma função que receba duas strings, nomeCompleto e nomePers, e retorne verdadeiro (valor 1),
 * se nomePers aparece em nomeCompleto, ou retorne falso (valor 0), caso contrário.
 * 
 * b) Faça uma função que leia do teclado a idade e o nome completo de um espectador e retorne o preço
 * que este deverá pagar. Esta função deverá receber como parâmetro o nome da personagem principal do
 * espetáculo e deverá chamar a função anterior para verificar se haverá desconto no ingresso.
 * 
 * c) Faça um programa que leia do teclado o nome da personagem principal do espetáculo e o número de
 * ingressos vendidos. A segunda função deverá ser chamada para computar o valor pago por cada ingresso.
 * O programa deverá imprimir o total arrecadado pela bilheteria do teatro.
**/

/**************************************  TERMINAR DE FAZER  *********************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int temNomePers(char nomeCompleto[], char nomePers[]){
    int teste = 0;
    
    for (int i = 0; nomePers[i] != '\0'; i++){
        for (int i = 0; nomeCompleto[i] != '\0'; i++){
            if (nomeCompleto[i] != nomePers[i])
                teste = 0;
            else
                if (i == 0 && nomeCompleto[i] == nomePers[i]){
                    teste = 1;
                    break;
                } else if (nomePers[i+1] != '\0' && nomeCompleto[i-1] == nomePers[i-1] && nomeCompleto[i] == nomePers[i] && nomeCompleto[i+1] == nomePers[i+1]){
                    teste = 1;
                    break;
                }
        }
    }
    printf("Teste de nome: %d\n",teste);
    return teste;
}

float calculaEntrada(char nomePers[]){
    int idade;
    char nomeCompleto[MAX];
    float valor = 0;

    scanf("%[^\n]s",nomeCompleto);
    scanf("%d ",&idade);

    if (temNomePers(nomeCompleto, nomePers) == 1)
        valor = 30;
    else

        if ((idade < 18) || (idade >= 65))
            valor = 75.0 / 2;
        else
            valor = 75;
            
    printf("Valor: %.2f\n",valor);
    return valor;
}

int main(){
    char nomePers[MAX];
    int numIngressos;
    float total = 0;

    scanf("%[^\n]s",nomePers);
    scanf("%d ",&numIngressos);

    for (int i = 0; i < numIngressos; i++)
        total += calculaEntrada(nomePers);

    printf("Valor arrecadado total: R$%.2f",total);

    return 0;
}