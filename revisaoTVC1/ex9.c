/**
 * Em breve será feito o lançamento de um novo empreendimento imobiliário. Para ajudar os corretores,
 * você deve fazer um programa para calcular o preço de cada lote. O preço dos lotes é definido a partir
 * de suas áreas, sendo uma parcela extra somada ao preço dos lotes que possuem área superior a um dado
 * tamanho. Os lotes são todos retangulares e existe uma lista onde há a medida de frente e profundidade
 * de vários lotes. Neste empreendimento, o m2 do lote custa R$350,00.
 * 
 * Para resolver esta questão, siga os passos abaixo:
 * 
 * (A) Faça uma função que receba como parâmetro as medidas de frente e profundidade de um lote. Sabe-se
 * que o preço de um lote é calculado pela multiplicação da sua área pelo valor do m2. Além disso, caso o
 * tamanho seja superior a 600m2, deve-se somar uma parcela fixa de R$12.500,00 ao preço do lote. Sua
 * função deve calcular e imprimir o valor do lote, destacando se houve cobrança da parcela extra. 
 * 
 * (B) Faça um programa (main) que leia, para um conjunto de lotes, as suas medidas de frente e
 * profundidade. Para cada lote, o seu programa deve chamar a função definida no item (A), passando por
 * parâmetro as informações necessárias. O programa deverá ser encerrado quando for lido valor 0 (zero)
 * para medida de frente de um lote.
**/

#include <stdio.h>
#include <stdlib.h>

void calculaValorLote(float frente, float prof){
    float valor, m2 = 350, tamanho;
    tamanho = frente * prof;

    if (tamanho > 600){
        valor = (tamanho * m2) + 12500;
        printf("Preco Lote: R$ %.2f (Cobranca de Parcela Extra).\n",valor);
    } else {
        valor = tamanho * m2;
        printf("Preco Lote: R$ %.2f.\n",valor);
    }
}

int main(){
    float frente , prof;
    scanf("%f %f",&frente,&prof);
    while (frente != 0){
        calculaValorLote(frente,prof);
        scanf("%f %f",&frente,&prof);
    }
    return 0;
}