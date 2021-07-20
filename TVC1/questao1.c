/**
 * Elabore a função denominada TOPUS que recebe três parâmetros reais: D, R, U. A função deverá retornar
 * o valor do polinômio p = x3 – 2.5*x2 + 2.5*x, onde x = (U-R)/(D-R). Sabemos que para valores nos quais
 * x < 0 ou x > 1, o polinômio é simplesmente p = U. Além disso, se a diferença entre D e R (D - R) for
 * igual a zero, então o polinômio é simplesmente p = D. Construa a função main para a leitura dos
 * parâmetros D, R e U, os quais deverão ser informados pelo usuário nessa ordem. A função main também
 * deverá realizar uma chamada à função TOPUS e imprimir o valor retornado por esta função.
**/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float TOPUS(float D, float R, float U){
    float p , x;
    x = (U - R) / (D - R);

    if ((D - R) == 0){
        p = D;
    } else if ((x < 0) || (x > 1)){
        p = U;
    } else {
        p = pow(x, 3) - (2.5 * pow(x, 2)) + (2.5 * x);
    }

    return p;
}

int main(){
    float D, R, U, result;
    scanf("%f %f %f", &D, &R, &U);

    result = TOPUS(D, R, U);

    printf("Valor do polinomio: %.1f",result);
    return 0;
}