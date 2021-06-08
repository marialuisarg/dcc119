#include <stdio.h>
#include <stdlib.h>

int main(){
    float raio , area , pi;
    pi = 3.14159;

    printf("Digite o raio: ");
    scanf("%f" , &raio);

    area = pi * raio * raio;

    printf("Area do circulo: %f cm^2." , area);
}