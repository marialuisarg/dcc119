/**
 * Uma empresa de auditoria de contas públicas te contratou para fazer um programa de contabilidade de
 * gastos de deputados com combustível durante a semana. Hoje é possível filtrar os pagamentos efetuados
 * a postos de abastecimento e informar um intervalo pré-determinado de valor esperado (em milhares de
 * Reais). Você vai monitorar se os pagamentos estão fora do esperado. Para isso, siga os passos abaixo:
 * 
 * a) Faça uma função que receba dois parâmetros: os valores mínimo e máximo esperados para um pagamento
 * (valores reais). Em seguida, a função deve ler os valores efetuados (valor real) de cada um dos
 * pagamentos, e se ele estiver fora da faixa desejada, somar o valor em um total de valores abaixo e um
 * total de valores acima. A leitura dos pagamentos deve ser encerrada quando o valor lido for um número
 * negativo ou zero. Ao final, a função deve imprimir a soma total de todos os pagamentos que estavam
 * acima e todos os pagamentos que estavam abaixo da faixa esperada (com duas casas decimais).
 * 
 * b) Faça um programa principal (main) que leia os valores para os parâmetros e chame a função definida
 * no item anterior.
**/

#include <stdio.h>
#include <stdlib.h>

void monitoraPagamentos(float valMinimo, float valMaximo) {
    float valEfetuado, somaAbaixo = 0, somaAcima = 0;
    scanf("%f", &valEfetuado);

    while (valEfetuado > 0){
        if (valEfetuado < valMinimo)
            somaAbaixo += valEfetuado;
        else if (valEfetuado > valMaximo)
            somaAcima += valEfetuado;

        scanf("%f", &valEfetuado);
    }

    printf("Abaixo: %.2f mil reais\n", somaAbaixo);
    printf("Acima: %.2f mil reais\n", somaAcima);
}

int main() {
    float min, max;
    scanf("%f %f", &min, &max);
    monitoraPagamentos(min, max);
    return 0;
}