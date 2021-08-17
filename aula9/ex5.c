/**
 * Faça um programa que leia do teclado os dados de um atleta e imprima na tela as informações lidas.
 * Os dados devem ser guardados em uma estrutura de nome "Atleta" e campos: nome, medidas (registro com
 * definição de peso e altura), esporte e idade. Utilize as estruturas já definidas abaixo.
**/

#include <stdio.h>

typedef struct {
    float peso;
    float altura;
} Medidas;

typedef struct {
    int idade;
    char nome[200];
    char esporte[100];
    Medidas meds;
} Atleta;

int main() {
    Atleta x;

    scanf("%[^\n]s", x.nome);
    scanf("%f ", &x.meds.peso);
    scanf("%f ", &x.meds.altura);
    scanf("%[^\n]s", x.esporte);
    scanf("%d ", &x.idade);

    printf("Nome: %s\n", x.nome);
    printf("Peso: %.1f kg\n", x.meds.peso);
    printf("Altura: %.2f m\n", x.meds.altura);
    printf("Esporte: %s\n", x.esporte);
    printf("Idade: %d anos", x.idade);

    return 0;
}