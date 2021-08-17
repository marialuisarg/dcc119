/**
 * a) Crie uma estrutura chamada ponto contendo apenas as coordenadas x e y (inteiros) do ponto.
 * b) Faça uma função que receba dois pontos por parâmetro e retorne a distância entre eles.
 * c) Faça um programa que declare 2 pontos, leia as coordenadas x e y de cada um e chame a função criada
 *    para calcular a distância entre eles. Apresente no final a distância entre os dois pontos.
**/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct {
    int x, y;
} Ponto;

float distanciaPontos(Ponto A, Ponto B){
    float dist;
    dist = sqrt( ((B.x - A.x)*(B.x - A.x)) - ((B.y - A.y)*(B.y - A.y)) );
    return dist;
}

int main(){
    Ponto A;
    Ponto B;
    float distancia;

    scanf("%d",&A.x);
    scanf("%d",&A.y);
    scanf("%d",&B.x);
    scanf("%d",&B.y);

    distancia = distanciaPontos(A,B);

    printf("Distância entre os pontos: %.2f", distancia);

    return 0;
}