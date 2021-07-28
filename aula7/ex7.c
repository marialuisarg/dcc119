/**
 * Um dos sistemas de encriptação mais antigos é atribuído a Júlio César: se uma letra a ser criptografada é a letra de número N do alfabeto,
 * substitua-a com a letra (N+K), onde K é um número inteiro constante (César utilizava K = 3).
 * 
 * Dessa forma, para K = 1 a mensagem “Adoro programar em C” se torna “Bepsp!qsphsbnbs!fn!D”. Faça um programa que receba como entrada uma
 * mensagem e um valor de K e altere a mensagem criptografando-a pelo código de César.
**/

#include <stdio.h>
#include <stdlib.h>

#define TAM 500

int main(){
    char mensagem[TAM];
    int K;

    scanf("%[^\n]s ", mensagem);
    scanf("%d", &K);

    for (int i = 0; mensagem[i] != '\0'; i++){
        mensagem[i] = mensagem[i] + K;
    }

    printf("Mensagem criptografada: ");
    puts(mensagem);
    return 0;
}