#include <stdlib.h>
#include <stdio.h>

int main(){
    float salFunc , aumento;
    scanf("%f" , &salFunc);
    scanf("%f" , &aumento);

    float novoSalario = ((aumento/100) * salFunc) + salFunc;
    float diferencaSal = novoSalario - salFunc;

    printf("Novo salario: %.2f \n" , novoSalario);
    printf("Aumento: %.2f" , diferencaSal);

    return 0;
}