/**
 * Considerando a estrutura 
 * 
 * typedef struct{
 *     float x;
 *     float y;
 *     float z;
 * } Vetor;
 * 
 * para representar um vetor no R3, implemente um programa que calcule a soma de dois vetores, subtração
 * e produto vetorial. Faça um programa para ler 2 vetores calcular a soma, subtração e produto vetorial
 * deles e imprimir na tela.
 * 
 * Dica produto vetorial: 
 * 
 * x = y1*z2 - z1*y2; 
 * y =  z1*x2 - x1*z2; 
 * z =  x1*y2 - y1*x2;
**/

#include <stdlib.h>
#include <stdio.h>

typedef struct {
    float x;
    float y;
    float z;
} Vetor;

void fazSoma (Vetor vet1, Vetor vet2){
    float Xt, Yt, Zt;

    Xt = vet1.x + vet2.x;
    Yt = vet1.y + vet2.y;
    Zt = vet1.z + vet2.z;

    printf("%.2f , %.2f , %.2f\n", Xt, Yt, Zt);
}

void fazSub (Vetor vet1, Vetor vet2) {
    float Xt, Yt, Zt;

    Xt = vet1.x - vet2.x;
    Yt = vet1.y - vet2.y;
    Zt = vet1.z - vet2.z;

    printf("%.2f , %.2f , %.2f\n", Xt, Yt, Zt);
}

void fazProduto (Vetor vet1, Vetor vet2) {
    float Xt, Yt, Zt;

    Xt = (vet1.y * vet2.z) - (vet1.z * vet2.y); 
    Yt = (vet1.z * vet2.x) - (vet1.x * vet2.z); 
    Zt = (vet1.x * vet2.y) - (vet1.y * vet2.x);

    printf("%.2f , %.2f , %.2f", Xt, Yt, Zt);
}

int main(){
    Vetor vet1, vet2;

    scanf("%f",&vet1.x);
    scanf("%f",&vet1.y);
    scanf("%f",&vet1.z);

    scanf("%f",&vet2.x);
    scanf("%f",&vet2.y);
    scanf("%f",&vet2.z);

    fazSoma(vet1, vet2);
    fazSub(vet1, vet2);
    fazProduto(vet1, vet2);

    return 0;
}