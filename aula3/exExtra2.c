
#include <stdio.h>
#include <stdlib.h>

/* 
 * Faça uma função que receba 4 valores inteiros  A, B, C e D. A seguir, calcule e retorne a diferença do
 * produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D). Faça também uma
 * função principal para ler os valores necessários e imprimir o resultado da função desenvolvida
 * anteriormente.

 * Entrada
 * O arquivo de entrada contém 4 valores inteiros.

 * Saída
 * Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em
 * branco antes e depois da igualdade.
**/

int calculaDiferenca(int A , int B , int C , int D);

int main(){
    int A , B , C , D , dif;
    
    //recebe as variáveis A, B, C e D
    scanf("%d %d %d %d",&A , &B , &C , &D);

    dif = calculaDiferenca(A,B,C,D);

    //imprime a diferenca da forma solicitada no exercício
    printf("DIFERENCA = %d",dif);

    return 0;
}

int calculaDiferenca(int A , int B , int C , int D){
    int diferenca;

    diferenca = (A * B - C * D);
    
    // retorna a diferença calculada
    return diferenca;
}