/**
 * Uma empresa organizadora de eventos está oferecendo uma promoção na mensalidade para os fundos de
 * formatura de acordo com a área do curso. O desconto segue a tabela abaixo:
 * 
 * Área                | Desconto
 * Biológicas ('B')	   | 5%
 * Humanas ('H')	   | 10%
 * Sociais ('S')	   | 20%
 * Exatas ('E')	       | 30%
 * 
 * a) Faça uma função que receba por parâmetro o valor da mensalidade. Para cada aluno, a função deverá
 * ler um caractere representando a área do curso (observe os caracteres entre parênteses na tabela
 * acima), calcular e imprimir o valor do desconto obtido e o valor da mensalidade com desconto. A
 * função deverá ser encerrada quando for digitado o caractere 'Q'.
 * 
 * b) Faça um programa (função main) que leia o valor da mensalidade e chame a função anterior.
 * 
 * SAÍDA:
 * Desconto R$10.00
 * Nova Mensalidade R$90.00
 * 
**/

#include <stdlib.h>
#include <stdio.h>

void calculaDesconto(float valMens){
    char area;
    float novaMens,desc;

    do{
        scanf("%c",&area);
        switch (area){
        case 'B':
            novaMens = valMens * 0.95;
            desc = valMens - novaMens;
            printf("Desconto R$%.2f\n",desc);
            printf("Nova Mensalidade R$%.2f\n",novaMens);
            printf("\n");
            break;
        case 'H':
            novaMens = valMens * 0.90;
            desc = valMens - novaMens;
            printf("Desconto R$%.2f\n",desc);
            printf("Nova Mensalidade R$%.2f\n",novaMens);
            printf("\n");
            break;
        case 'S':
            novaMens = valMens * 0.80;
            desc = valMens - novaMens;
            printf("Desconto R$%.2f\n",desc);
            printf("Nova Mensalidade R$%.2f\n",novaMens);
            printf("\n");
            break;
        case 'E':
            novaMens = valMens * 0.70;
            desc = valMens - novaMens;
            printf("Desconto R$%.2f\n",desc);
            printf("Nova Mensalidade R$%.2f\n",novaMens);
            printf("\n");
            break;
        default:
            break;
        }
    } while (area != 'Q');
}

int main(){
    float valor;
    scanf("%f",&valor);
    calculaDesconto(valor);
    return 0;
}