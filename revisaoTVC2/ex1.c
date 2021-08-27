/**
 * a) Faça uma função que receba como parâmetro uma string e coloque em destaque a segunda frase do texto. Para isso, a função deverá passar
 * letras minúsculas para maiúsculas em todo o trecho entre a primeira e a segunda ocorrências de  '.' (ponto final). A função deverá retornar
 * o número de modificações realizadas ou o valor -1, caso nenhum ponto seja encontrado. Caso o texto tenha apenas um ponto final, as
 * modificações deverão ser realizadas até o fim do texto.
 * 
 * b) Faça um programa que leia do teclado uma string e chame a função anterior. O programa deverá imprimir, dependendo do retorno da função,
 * "Nao foi encontrado ponto final" ou "Foram realizadas X alteracoes", onde X deve ser o número de letras modificadas pela função, neste caso
 * imprima, também, a string modificada.
**/

#include <stdlib.h>
#include <stdio.h>

#define MAX 200

int modifica(char texto[MAX]){
    int alt = 0, i, j, qtdPontos;

    for (i = 0; texto[i] != '\0'; i++){
        if (texto[i] == '.')
            qtdPontos++;
    }

    if (qtdPontos == 1 && texto[i-1] == '.'){           // uma única frase com ponto final
        for (j = 0; texto[j] != '\0'; j++) {
            if (texto[j] >= 'a' && texto[j] <= 'z'){
                texto[j] = texto[j] - 'a' + 'A';
                alt++;
            }
        }
    } else if (qtdPontos == 1 && texto[i-1] != '.') {   // duas frases, segunda sem ponto final
        for (j = 0; texto[j] != '\0'; j++) {
            if (texto[j] == '.') {
                j++;
                while (texto[j] != '\0'){
                    if (texto[j] >= 'a' && texto[j] <= 'z'){
                        texto[j] = texto[j] - 'a' + 'A';
                        alt++;
                    }
                    j++;
                }
            }
        }
    } else if (qtdPontos > 1 ) {                        // duas frases ou mais
        for (j = 0; texto[j] != '\0'; j++) {
            if (texto[j] == '.') {
                j++;

                while (texto[j] != '.'){
                    if (texto[j] >= 'a' && texto[j] <= 'z'){
                        texto[j] = texto[j] - 'a' + 'A';
                        alt++;
                    }
                    j++;
                }
                break;
            }
        }
    }

    return alt;
}

int main(){
    char texto[MAX];
    int X;

    scanf("%[^\n]s", texto);
    X = modifica(texto);

    if (X == 0){
        printf("Nao foi encontrado ponto final");
    } else {
        printf("Foram realizadas %d alteracoes\n", X);
        puts(texto);
    }

    return 0;
}