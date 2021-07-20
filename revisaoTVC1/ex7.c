/**
 * Escreva uma função para o cálculo do auxílio emergencial durante a pandemia COVID19 disponibilizado
 * por um governo fictício. A função recebe como parâmetros três vetores (famílias, rendas, pagamentos)
 * e o número de famílias cadastradas. Cada posição dos vetores famílias e rendas armazena o número de
 * pessoas na família e a renda familiar, respectivamente. 
 * 
 * Sabe-se que terá direito ao recebimento se a renda familiar mensal total é de até três salários
 * mínimos (R$ 3.135,00).
 * 
 * Assim sua função deve:
 * 
 * a) Para cada família, verificar se ela satisfaz o critério de recebimento.
 * 
 * b) Calcular e armazenar em pagamentos o valor do benefício seguindo as seguintes regras: 
 * 
 * Valor base do benefício (VBB) : R$2000,00.
 * Valor do benefício por família: VBB + 25% do VBB por pessoa.
 * 
 * c) Imprimir o número de famílias que não satisfazem o critério de recebimento do auxílio. 
 * 
 * Escreva a função principal que lê o número de famílias e os vetores pessoas e renda, chame a função e
 * imprima os pagamentos calculados.
**/

#include <stdio.h>
#include <stdlib.h>

void calculaAuxilio(int familias[], float rendas[], float pagamentos[], int numFam){
    int naoRecebe = 0;
    float beneficio , VBB = 2000;
    for (int i = 0; i < numFam; i++){
        if (rendas[i]<3135){
            beneficio = VBB + ((0.25 * VBB) * familias[i]);
            pagamentos[i] = beneficio;
        } else {
            pagamentos[i] = 0;
            naoRecebe++;
        }
    }
    printf("Número de famílias que não receberam o auxilio: %d\n",naoRecebe);

    for (int j = 0; j < numFam; j++){
        printf("Pagamentos: %.2f\n",pagamentos[j]);
    }
    
}

int main(){
    int numFamilias, familias[100];
    float rendas[100], pagamentos[100];

    scanf("%d",&numFamilias);

    for (int i = 0; i < numFamilias; i++)
        scanf("%d %f",&familias[i],&rendas[i]);
    
    calculaAuxilio(familias,rendas,pagamentos,numFamilias);
    return 0;
}