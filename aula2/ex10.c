#include <stdlib.h>
#include <stdio.h>

int main(){
    int entrada , seg , min , hora;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &entrada);

    hora = entrada / 3600;
    min = (entrada % 3600) / 60;
    seg = entrada - (3600 * hora) - (60 * min);

    printf("%d segundos = %d horas : %d minutos : %d segundos.", entrada , hora , min , seg);
    return 0;
}