#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    float tempC , tempF;
    printf("Temperatura em Celsius: ");
    scanf("%f" , &tempC);

    tempF = (9 * tempC + 160) / 5;

    printf("%.2f graus Celsius em Fahrenheit = %.2f" , tempC , tempF);

    return 0;
}