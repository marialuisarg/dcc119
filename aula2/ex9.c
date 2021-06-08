#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float precoProduto , precoComDesc;
    printf("Preço do produto: R$");
    scanf("%f" , &precoProduto);
    precoComDesc = precoProduto * 0.75;

    printf("Preço com desconto = R$%.2f",precoComDesc);

    return 0;
}