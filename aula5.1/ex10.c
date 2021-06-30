/**
 * Escreva uma função que leia os valores n1 e n2 e imprima o intervalo fechado entre esses dois valores
 * sempre do menor para o maior. Faça também um programa (main) para chamar essa função.
*/

#include <stdio.h>
#include <stdlib.h>

void imprimeIntervalo(int n1 , int n2){
    if(n1<n2){
        while (n1<=n2){
            printf("%d ",n1);
            n1++;
        }
    } else {
        while (n2<=n1){
            printf("%d ",n2);
            n2++;
        }
    }
}

int main(){
    int num1 , num2;
    scanf("%d %d",&num1,&num2);
    imprimeIntervalo(num1,num2);
    return 0;
}