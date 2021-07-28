/**
 * Nomes de autores em referências bibliográficas geralmente aparecem grafados em formato específico.
 * Por exemplo, um autor chamado "João José Silva" pode ter seu nome citado como "João J. SILVA",
 * "SILVA, João José" ou "SILVA, J.J.".
 * 
 * a) Faça três funções distintas que recebam duas strings, s1 e s2. Cada uma das funções deve atribuir
 * a s2 o nome contido em s1 em um dos formatos citados acima.
 * 
 * b) Elabore um programa que leia um nome e imprima-o em cada um dos formatos citados, chamando as
 * funções implementadas na letra a.
**/

/////////////////// TERMINAR DE FAZER! /////////////////////////////


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 500

int calculaEspacos(char s1[]){
    int espacos = 0;
    for (int n = 0; s1[n] != '\0'; n++){ // conta o número de espaços no nome
        if (s1[n] == ' ')
            espacos++;
    }
    return espacos;
}

int ultimoEspaco(char s1[]){
    int posicao;
    for (int n = 0; s1[n] != '\0'; n++){ // procura último espaco e retorna índice
        if (s1[n] == ' '){
            posicao = n;
        }
    }
    return posicao;
}

void formatoA(char s1[], char s2[]){
    int espacos, i = 0, cont = 0;

    espacos = calculaEspacos(s1);
    
    while (s1[i] != ' '){ // armazena o primeiro nome inteiro
        s2[i] = s1[i];
        i++;
    }

    s2[i] = ' ';
    i++;
    espacos--;
    cont = i;

    while(espacos > 0){ // abrevia os nomes do meio
        if (s1[i-1] == ' '){
            s2[cont] = s1[i];
            cont++;
            s2[cont] = '.';
            cont++;
            s2[cont] = ' ';
            cont++;
            espacos--;
        }
        i++;
    }

    for (cont = cont; s1[cont] != '\0'; cont++){
        if (s1[cont] >= 'a' && s1[cont] <= 'z')
            s2[cont] = s1[cont] - 'a' + 'A';
        else
            s2[cont] = s1[cont];
    }

    s2[cont] = '\0';

}

void formatoB(char s1[], char s2[]){
    int espacos = 0, posicao, i, n = 0;

    posicao = ultimoEspaco(s1);

    for (i = posicao+1; s1[i] != '\0'; i++){ // armazena o último nome inteiro, em letras maiúsculas
        if (s1[i] >= 'a' && s1[i] <= 'z')
            s2[n] = s1[i] - 'a' + 'A';
        else
            s2[n] = s1[i];

        n++;
    }

    s2[i] = ',';
    i++;
    s2[i] = ' ';
    i++;

    for (int n = 0; n < posicao; n++){
        s2[i] = s1[n];
        i++;
    }
    
    s2[i] = '\0';

}

int main(){
    char s1[TAM], s2[TAM];

    scanf("%[^\n]s ", s1);

    formatoA(s1 , s2);
    puts(s2);

    formatoB(s1 , s2);
    puts(s2);

    return 0;
}