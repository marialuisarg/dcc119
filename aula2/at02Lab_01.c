#include <stdio.h>
#include <stdlib.h>

int main(){
    int hora , min;
    scanf("%d" , &hora);

    min = hora * 60;
    printf("%d horas = %d minutos" , hora , min);

    return 0;
}