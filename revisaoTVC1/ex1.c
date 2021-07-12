/**
 * Um supermercado deseja reajustar os preços de seus produtos usando o seguinte critério:  o produto
 * poderá ter seu preço aumentado ou diminuído. Para o preço ser alterado, o produto deve preencher
 * pelo menos um dos requisitos a seguir:
 * 
 * VALOR MEDIA MENSAL 	   PREÇO ATUAL  	    %DE AUMENTO	    %DE DIMINUIÇÃO
 *     < 500    	    < R$ 30,00 	                10	               -
 *     ≥ 500 e <1.200  	≥ R$ 30,00 e <R$ 80,00	    15	               -
 *     ≥ 1200	        ≥ R$ 80,00	                -	              20
 * 
 * Faça uma função que recebe por parâmetro o preço atual e a venda média mensal. A função deve retornar
 * o novo preço. Construa um programa que leia o preço atual e a venda média mensal e mostre o preço
 * atual e o novo preço.
**/

#include <stdio.h>
#include <stdlib.h>

float calculaNovoPreco(float precoAtual , float vendaMedia){
    float novoPreco;

    if ((precoAtual < 30.0) && (vendaMedia < 500.0))
        novoPreco = precoAtual * 1.1;
    else if ((precoAtual >= 30.0 && precoAtual < 80.0) && (vendaMedia >= 500.0 && vendaMedia < 1200.0))
        novoPreco = precoAtual * 1.15;
    else if ((precoAtual >= 80.0) && (vendaMedia >= 1200))
        novoPreco = precoAtual * 0.8;
    else
        novoPreco = precoAtual;
    return novoPreco;
}

int main(){
    float precoAtual , vendaMedia , novoPreco;
    scanf("%f %f",&precoAtual,&vendaMedia);
    novoPreco = calculaNovoPreco(precoAtual , vendaMedia);
    printf("R$ %.2f",precoAtual);
    printf("\nR$ %.2f",novoPreco);
    return 0;
}