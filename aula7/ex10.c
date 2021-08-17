/**
 * Você certamente já utilizou algum programa de compressão de arquivos (zip, rar, entre outros). Estes
 * programas normalmente precisam analisar os dados armazenados nos arquivos para saber a melhor forma de
 * comprimí-los. No caso de arquivos de texto, por exemplo, uma possível análise é verificar que letras
 * ou símbolos aparecem com maior frequência no texto.
 * 
 * a) Faça uma função que receba uma string e um vetor de inteiros de tamanho 128. Em cada posição i do
 * vetor de inteiros do parâmetro, a função deverá contabilizar o número de vezes que o caractere de
 * código i aparecerá no texto. Por exemplo, se a string for "AAAB", o vetor deve ter o valor 3 na
 * posição 65, 1 na posição 66 e 0 em todas as outras posições. Caracteres fora do intervalo entre 0 e
 * 127 não precisam ser contabilizados.
 * 
 * b) Faça uma função que receba um vetor de inteiros de tamanho 128 e um vetor de inteiros de tamanho 5.
 * A função deve armazenar no segundo vetor o índice das posições que contém os 5 maiores valores do
 * primeiro vetor (em qualquer ordem).
 * 
 * c) Escreva um programa que leia um texto com até 1000 caracteres e imprima quais são os 5 símbolos
 * mais frequentes, em ordem de frequencia.
**/

/************************************ TERMINAR DE FAZER ************************************************/

#include <stdio.h>
#include <string.h>

#define TAM1 128
#define TAM2 5
#define MAX 1001

void contaCaractere(char texto[], int vetor[]){
    int cont = 0;

    for (int i = 0; i < TAM1; i++){
        for (int j = 0; texto[j] != '\0'; j++){
            if (texto[j] == i)
                cont++;
        }
        vetor[i] = cont;
        cont = 0;
    }
}

void maioresValores(int vetor[], int vetor2[]){
    int n = 0;
    int i, j, k, l, m;

    for (i = 0; i < TAM1; i++){
        if (vetor[i] >= vetor2[n])
            vetor2[n] = i;
    }
    n++;
    for (j = 0; j < TAM1 && j != i; j++){
        if (vetor[j] >= vetor2[n])
            vetor2[n] = j;
    }
    n++;
    for (k = 0; k < TAM1 && k != i && k != j; k++){
        if (vetor[k] >= vetor2[n])
            vetor2[n] = k;
    }
    n++;
    for (l = 0; l < TAM1 && l != i && l != j && l != k; l++){
        if (vetor[l] >= vetor2[n])
            vetor2[n] = l;
    }
    n++;
    for (m = 0; m < TAM1 && m != i && m != j && m != k && m != l; m++){
        if (vetor[m] >= vetor2[n])
            vetor2[n] = m;
    }
}

int main(){
    char texto[MAX];
    int vetor[TAM1];
    int vetor2[TAM2] = {0,0,0,0,0};

    scanf("%[^\n]s ",texto);

    for (int i = 0; i < TAM2; i++){
        printf("Frequência do símbolo %d: %d\n", vetor2[i], vetor[vetor2[i]]);
    }

    return 0;
}