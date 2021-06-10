#include <stdio.h>
#include <stdlib.h>
 
/**
 * Escreva uma função que receba como parâmetro dois números inteiros e imprima a soma, o produto,
 * a diferença, o quociente e o resto entre estes. Escreva uma função principal (main) que leia dois
 * valores inteiros do teclado e chame a função desenvolvida no item anterior
 **/

void calculos(int x , int y){
    int soma , prod , sub , divisao , mod;
    soma = x + y;
    prod = x * y;
    sub = x - y;
    divisao = x / y;
    mod = x % y;
    
    char porc = '%';
    
    printf("%d + %d = %d \n",x,y,soma);
    printf("%d * %d = %d \n",x,y,prod);
    printf("%d - %d = %d \n",x,y,sub);
    printf("%d / %d = %d \n",x,y,divisao);
    printf("%d %c %d = %d",x,porc,y,mod);
    
    return;
}

int main() {
  int num1 , num2;
  scanf("%d %d",&num1,&num2);
  calculos(num1,num2);
  return 0;
}