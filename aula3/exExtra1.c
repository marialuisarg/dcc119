#include <stdio.h>
#include <stdlib.h>

/*
Faça uma função que receba como parâmetros o valor de uma compra e o número de parcelas e imprima o
valor da parcela a ser paga a prazo. Faça também uma função principal para fazer as leituras necessárias
e a chamada da função desenvolvida.
*/

void valorParcelas(float valCompra , int numParcelas);

int main(){
    float valCompra;
    int numParcelas;
    
    // lê valor da compra e número de parcelas;
    scanf("%f %d", &valCompra, &numParcelas);

    //chama a função que calcula parcela a prazo;
    valorParcelas(valCompra,numParcelas);

    return 0;
}

void valorParcelas(float valCompra , int numParcelas){
    float valParcela;
    valParcela = valCompra / numParcelas;
    
    // Imprime o valor da parcela a prazo
    printf("COMPRA A PRAZO");
    printf("\nValor da parcela a prazo: R$ %.2f",valParcela);
}