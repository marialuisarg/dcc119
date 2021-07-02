/**
 * Determinado banco, todos os meses desconta uma taxa de administração de R$12,47 de seus clientes.
 * Sempre que o saldo da conta estiver negativo, o banco envia uma mensagem ao cliente, lembrando-o da
 * divida
 * 
 * a) Faça uma função que receba como parâmetro o número de clientes do banco. Para cada cliente, a
 * função deverá ler o saldo atual, calcular e imprimir o valor do saldo após o desconto. Caso, após a
 * operação, o saldo esteja negativo, a função deverá imprimir a frase “SALDO NEGATIVO, CLIENTE DEVE
 * SER COMUNICADO”.
 * 
 * b) Faça um programa (função main) que leia o número de clientes do banco e chame a função da letra a.
**/

#include <stdio.h>
#include <stdlib.h>

void situacaoBanco(int qtdClientes){
    int i = 1;
    float saldo;
    do {
        scanf("%f",&saldo);
        saldo -= 12.47;

        if (saldo < 0)
            printf("%.2f SALDO NEGATIVO, CLIENTE DEVE SER COMUNICADO.\n",saldo);
        else 
            printf("%.2f\n",saldo);
        
        i++;
    } while (i <= qtdClientes);
}

int main(){
    int clientes;
    scanf("%d",&clientes);
    situacaoBanco(clientes);
    
    return 0;
}