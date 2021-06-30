/**
 * Desenvolva um programa que leia os valores inteiros n1 e n2 e imprima o intervalo fechado entre esses
 * dois valores.
**/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int n1 , n2;
    scanf("%d %d",&n1,&n2);
    if (n1 < n2){
        for (int i = n1; i <= n2; i++){
            printf("%d ",i);
        } 
    } else {
        if (n2 < n1) {
            for (int i = n2; i <= n1; i++){
                printf("%d ",i);
            }
        } else {
            printf("0");
        }
    }
    return 0;
}