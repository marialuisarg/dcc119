/*
 * Faça um programa que crie um vetor com 100 posições e preencha as primeiras posições do vetor até que
 * seja digitado um valor negativo. O programa deve inverter os valores armazenados nas 3 primeiras
 * posições com os valores armazenados nas últimas 3 posições preenchidas e imprimir a sequência obtida
 * ao final.
 * 
 * Por exemplo: Se a sequência digitada for 4 6 8 3 6 9 2 0 7 -1 o programa deverá imprimir no final a
 * sequência 7 0 2 3 6 9 8 6 4
**/

#include <stdlib.h>
#include <stdio.h>

#define numP 99

int main(){
    int vetorInicial[numP];
    int qtdNumeros = 0;
    
    // preenchendo o vetor inicial
    for (int i = 0; i <= numP; i++){
        
        scanf("%d",&vetorInicial[i]); // recebe os valores e armazena
        qtdNumeros = i + 1; // conta quantos números foram lidos
    
        if (vetorInicial[i] < 0) // interrompe a leitura quando um número negativo é digitado
            break;
    }

    if (qtdNumeros >= 7){ // o resto do programa executa se mais de 6 números positivos forem lidos
        int tamanho = qtdNumeros - 2;
        int vetorFinal[tamanho];

        for(int n = 0; n <= tamanho; n++){

            /* int vetor[8]
            0 1 2 3 4 5 6 7
            vetor[0] -> vetor[7] x 0
            vetor[1] -> vetor[6] x 1
            vetor[2] -> vetor[5] x 2
            vetor[3] -> vetor[3]
            vetor[4] -> vetor[4]
            vetor[5] -> vetor[2] x 8 - 3
            vetor[6] -> vetor[1] x 8 - 2
            vetor[7] -> vetor[0] x 8 - 1*/

            if ((n > 2) && (n < tamanho-2)) { // valores diferentes dos 3 primeiros e 3 últimos
                vetorFinal[n] = vetorInicial[n];
            } else {
                if (n <= 2) { // 3 primeiros valores
                    if (n==0)
                        vetorFinal[0] = vetorInicial[tamanho];
                    else if (n==1)
                        vetorFinal[1] = vetorInicial[tamanho-1];
                    else if (n==2)
                        vetorFinal[2] = vetorInicial[tamanho-2];

                } else { // 3 últimos valores
                    if (n==tamanho)
                        vetorFinal[n] = vetorInicial[0];
                    else if (n==tamanho-1)
                        vetorFinal[n] = vetorInicial[1];
                    else
                        vetorFinal[n] = vetorInicial[2];
                }
            }

            printf("%d ",vetorFinal[n]);
        }

    } else { // se menos de 6 valores forem lidos (além do negativo), o programa não é executado
        printf("O vetor possui menos de 6 valores! A inversao das posicoes nao eh possivel!");
    }

    return 0;
}