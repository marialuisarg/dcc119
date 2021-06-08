#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float lado , perimetro;
    printf("Lado 1: ");
    scanf("%f",&lado);
    perimetro = lado;
    printf("Lado 2: ");
    scanf("%f",&lado);
    perimetro += lado;
    printf("Lado 3: ");
    scanf("%f",&lado);
    perimetro += lado;

    printf("Perimetro: %.0f" , perimetro);
    return 0;
}