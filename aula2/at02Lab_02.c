#include <stdio.h>
#include <stdlib.h>

int main(){
    int salario1 , salario2;
    scanf("%d %d" , &salario1 , &salario2);

    int qtd100 , qtd50 , qtd20 , qtd10 , qtd5;
    int s1 = salario1;
    int s2 = salario2;

    //arredondando números não-múltiplos de 5
    salario1 += 4;
    salario2 += 4;

    //notas de 100
    qtd100 = (salario1 / 100) + (salario2 / 100);
    //notas de 50
    qtd50 = ((salario1 % 100) / 50)  + ((salario2 % 100) / 50);
    //notas de 20
    qtd20 = (((salario1 % 100) % 50) / 20)  + (((salario2 % 100) % 50) / 20);
    //notas de 10
    qtd10 = ((((salario1 % 100) % 50) % 20) / 10)  + ((((salario2 % 100) % 50) % 20) / 10);
    //notas de 5
    qtd5 = (((((salario1 % 100) % 50) % 20) % 10) / 5)  + (((((salario2 % 100) % 50) % 20) % 10) / 5);

    printf("PAGAMENTO SEM TROCO");
    printf("\n1o valor: R$%d" , s1);
    printf("\n2o valor: R$%d" , s2);
    printf("\nNotas: %dxR$100;%dxR$50;%dxR$20;%dxR$10;%dxR$5." , qtd100 , qtd50 , qtd20 , qtd10 , qtd5);
    return 0;
}