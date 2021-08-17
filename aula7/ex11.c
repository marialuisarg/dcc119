/**
 * Júlio César usava um sistema de criptografia, agora conhecido como Cifra de César, que trocava cada
 * letra pelo equivalente em duas posições adiante no alfabeto (por exemplo, 'A' vira 'C', 'R' vira 'T',
 * etc.). Ao final do alfabeto nós voltamos para o começo, isto é 'Y' vira 'A'. Nós podemos, é claro,
 * tentar trocar as letras com quaisquer número de posições.
 * 
 * Entrada
 * A entrada contém vários casos de teste. A primeira linha de entrada contém um inteiro N que indica a
 * quantidade de casos de teste. Cada caso de teste é composto por duas linhas. A primeira linha contém
 * uma string com até 50 caracteres maiúsculos ('A'-'Z'), que é a sentença após ela ter sido codificada
 * através desta Cifra de César modificada. A segunda linha contém um número que varia de 0 a 25 e que
 * representa quantas posições cada letra foi deslocada para a direita.
 * 
 * Saída
 * Para cada caso de teste de entrada, imprima uma linha de saída com o texto decodificado (transformado
 * novamente para o texto original) conforme as regras acima e o exemplo abaixo.
**/

#include <stdlib.h>
#include <stdio.h>

#define MAX 51

void decodifica(char texto[], int n){
    for (int i = 0; texto[i] != '\0'; i++){
        if (texto[i] - n < 'A')
            texto[i] = texto[i] + 26 - n;
        else 
            texto[i] = texto[i] - n;
    }
    puts(texto);
}

int main(){
    int N, desloc;
    char texto[MAX];

    scanf("%d ",&N);

    for (int i = 0; i < N; i++){
        scanf("%[^\n]s",texto);
        scanf("%d ",&desloc);

        decodifica(texto, desloc);

        texto[0] = '\0';
        desloc = 0;
    }

    return 0;
}