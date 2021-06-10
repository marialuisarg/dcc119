/**
 * Escreva uma função que receba como parâmetro três valores reais e retorne a média aritmética destes
 * valores. Escreva uma função principal (main) que leia três valores reais do teclado, chame a função
 * desenvolvida no item anterior e imprima na tela o resultado obtido.
 **/

#include <stdio.h>
#include <stdlib.h>
 
float calculaMediaAritmetica(float x , float y , float z){
    float media;
    
    media = (x + y + z) / 3;
    
    return media;
}

int main() {
    float num1 , num2 , num3 , media;
    
    scanf("%f %f %f",&num1,&num2,&num3);
    media = calculaMediaAritmetica(num1,num2,num3);

    printf("Média: %.2f",media);
    return 0;
}