/**
 * Para resolver este exercício, siga os passos abaixo:
 * 1. Escreva uma função que receba os valores inteiros n1, n2 e x como parâmetro, e imprima os múltiplos
 * de x que pertencem ao intervalo fechado entre n1 e n2, em ordem crescente.
 * 
 * 2. Escreva uma função principal (main) que ​leia​ os valores inteiros n1,n2 e x. Por fim, chame a função
 * desenvolvida no item anterior.
**/

#include <stdio.h>
#include<stdlib.h>

void imprimeIntervalo(int n1 , int n2 , int x){
    do {
        if (n1%x==0)
            printf("%d ",n1);
        n1++;
    } while(n1<=n2);
}

int main(){
    int n1 , n2 , x;
    scanf("%d %d %d",&n1,&n2,&x);
    imprimeIntervalo(n1,n2,x);
    return 0;
}