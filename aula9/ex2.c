/**
 * Utilizando a estrutura ponto definida no exercício 1, faça uma função que receba 2 pontos e retorne o
 * ponto mais próximo da origem. Em seguida, modifique o programa principal para ler 4 pontos e imprimir
 * apenas as coordenadas do ponto mais próximo da origem.
**/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct {
    int x, y;
} Ponto;

Ponto distanciaPontosOrigem(Ponto A, Ponto B){
    float distB, distA;

    distA = sqrt( (A.x * A.x) - (A.y * A.y) );
    distB = sqrt( (B.x * B.x) - (B.y * B.y) );

    if (distA > distB)
        return B;
    else
        return A;
}

int main(){
    Ponto p[4];
    Ponto menorDistancia;
    int i;
    float distancia;

    for (i = 0; i < 4; i++){
        scanf("%d",&p[i].x);
        scanf("%d",&p[i].y);
    }

    menorDistancia = p[0];

    for (i = 1; i < 4; i++){
        menorDistancia = distanciaPontosOrigem(menorDistancia, p[i]);
        printf("(%d,%d)\n",menorDistancia.x, menorDistancia.y);
    }

    printf("Ponto mais proximo da origem: (%d,%d)", menorDistancia.x, menorDistancia.y);

    return 0;
}