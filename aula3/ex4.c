/**
 * Faça uma função que receba um valor inteiro, que é o tempo de duração em segundos de um determinado
 * evento em uma fábrica, e imprima-o expresso no formato hh:mm:ss.
 * Entrada: O arquivo de entrada contém um valor inteiro N.
 * Saída: Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos,
 * conforme exemplo fornecido.
**/

#include <stdio.h>
#include <stdlib.h>
 
void converteTempo(int seg){
    int hh , mm , ss;
    
    hh = seg / 3600;
    mm = (seg % 3600)/60;
    ss = (seg % 3600) % 60;

    printf("%.2d:%.2d:%.2d",hh,mm,ss);
    return;
}

int main() {
    int segundos;
    scanf("%d",&segundos);
    converteTempo(segundos);

    return 0;
}