/**
 * Modifique o programa anterior para que este exiba apenas um par de índices de elementos repetidos,
 * mesmo que haja mais repetições. Ao final, se nenhum par de índices repetidos foi encontrado, imprima
 * a mensagem "não há elementos repetidos no vetor".
**/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int indice;

    scanf("%d",&indice);

    int vetorInteiros [indice];
    int testePar = 0;

    // lê todos os valores e armazena no vetor
    for (int i = 0; i <= indice; i++){
        scanf("%d",&vetorInteiros[i]);
    }

    // testa, a cada valor do vetor, se há elementos repetidos
    for (int i = 0; i <= indice; i++){

        int n = 0;

        while(n <= indice){

            if ((n > i) && (vetorInteiros[n] == vetorInteiros[i])) { 
                    // se há elementos repetido, armazena '1' na variável de teste e imprime o par
                    testePar = 1;
                    printf("Par de elmentos repetidos: %d e %d\n",i,n);
            }

            // verifica a variável de teste (para n). caso haja elementos repetidos, interrompe o laço
            if (testePar == 1)
                break;
            else // se não há elementos repetidos, continua com o laço
                n++;
        }

        // verifica a variável de teste (para i). caso haja elementos repetidos, interrompe o laço
        if (testePar == 1)
                break;
    }

    // ao final, verifica se algum par de elementos foi encontrado. Caso contrário, imprime a msg
    if (testePar == 0)
        printf("Nao ha elementos repetidos no vetor.");
    
    return 0;
}