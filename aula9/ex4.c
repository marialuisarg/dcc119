/**
 * Sabendo que um número real pode ser representado pela estrutura abaixo, na qual  esq  e  dir 
 * representam, respectivamente, os dígitos à esquerda e à direita do ponto decimal, elabore um programa
 * conforme orientado à seguir:
 * 
 * typedef struct{
 *   int esq;
 *   int dir;
 * } numeroReal;
 * 
 * Escreva uma função que receba como parâmetro a estrutura acima e retorne o número real representado
 * por ela.
 * 
 * Elabore as funções soma, subtracao e multiplicacao que realizem, respectivamente, as operações de soma,
 * subtração e multiplicação. Cada uma dessas funções deve receber como parâmetro duas variáveis do tipo
 * numeroReal, realizar o cálculo apropriado e armazenar o resultado encontrado em uma terceira variável,
 * também do tipo numeroReal. Esta terceira estrutura deverá, utilizando a função criada na letra A,
 * gerar o número real que representa, imprimindo-o.
 * 
 * Faça a função principal (main) com todas as partes necessárias para o bom funcionamento das funções
 * criadas e, antes de chamar as funções criadas na letra B, utilize a função da letra A para imprimir o
 * número real obtido na leitura.
 * 
 * Para a elaboração do código, considere que os números reais informados terão até duas casas decimais
 * e que, em cada representação, o primeiro dígito do número contido em dir  equivale ao mesmo algarismo,
 * na casa dos décimos e, o segundo dígito, na casa dos centésimos.
**/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct{
    int esq;
    int dir;
} numeroReal;

float retornaReal(numeroReal num){
    float numFloat = 0;

    if (num.esq < 0){
        numFloat = -(num.esq);

        if (num.dir >= 10)
            numFloat += num.dir/100.0;
        else
            numFloat += num.dir/10.0;

        return -numFloat;

    } else {
        numFloat = num.esq;

        if (num.dir >= 10)
            numFloat += num.dir/100.0;
        else
            numFloat += num.dir/10.0;

        return numFloat;
    }
}

void fazSoma(numeroReal A, numeroReal B){
    numeroReal soma;
    float resultadoSoma;
    int totalA, totalB, somaInt;

    // soma de dois nums negativos
    if (A.esq < 0 && B.esq < 0){
        if (A.dir < 10)
                totalA = (-A.esq * 100) + (A.dir * 10);
            else
                totalA = (-A.esq * 100) + (A.dir);

            if (B.dir < 10)
                totalB = (-B.esq * 100) + (B.dir * 10);
            else
                totalB = (-B.esq * 100) + (B.dir);

        somaInt = totalA + totalB;
        
        soma.esq = somaInt/100;
        soma.dir = somaInt - (soma.esq * 100);

        resultadoSoma = - retornaReal (soma);
    } else {
        if (A.dir < 10)
                totalA = (A.esq * 100) + (A.dir * 10);
            else
                totalA = (A.esq * 100) + (A.dir);

            if (B.dir < 10)
                totalB = (B.esq * 100) + (B.dir * 10);
            else
                totalB = (B.esq * 100) + (B.dir);

        somaInt = totalA + totalB;
        
        soma.esq = somaInt/100;
        soma.dir = somaInt - (soma.esq * 100);

        resultadoSoma = retornaReal (soma);
    }

    printf("soma: %.2f\n", resultadoSoma);
}

void fazSub(numeroReal A, numeroReal B){
    numeroReal sub;
    int totalA , totalB, subInt;
    float resultadoSub;

    if (A.esq < 0 && B.esq < 0){
        // se o primeiro número lido for maior que o segundo...
        if ((A.esq > B.esq) || (A.esq == B.esq && A.dir > B.dir)){
            
            // transforma o número lido (esq.dir) em inteiro 

            // Exemplo: 2.5 vira 250 // 3.14 vira 314

            if (A.dir < 10)
                totalA = (-A.esq * 100) + (A.dir * 10);
            else
                totalA = (-A.esq * 100) + (A.dir);

            if (B.dir < 10)
                totalB = (-B.esq * 100) + (B.dir * 10);
            else
                totalB = (-B.esq * 100) + (B.dir);

            // faz a subtração com os números inteiros obtidos

            subInt = totalA - totalB;

            // armazena o numero inteiro lido em sub

            sub.esq = subInt/100;
            sub.dir = subInt - (sub.esq * 100);

            // transforma sub em real
            resultadoSub = - retornaReal(sub);

        // se o primeiro número lido for menor que o segundo...

        } else if ((A.esq < B.esq)  || (A.esq == B.esq && A.dir < B.dir)) {
            
            // transforma o número lido (esq.dir) em inteiro positivo

            // Exemplo: -2.5 vira 250 // -3.14 vira 314
            
            if (A.dir < 10)
                totalA = -(A.esq * 100) + (A.dir * 10);
            else
                totalA = -(A.esq * 100) + (A.dir);

            if (B.dir < 10)
                totalB = -(B.esq * 100) + (B.dir * 10);
            else
                totalB = -(B.esq * 100) + (B.dir);

            // faz a subtração com os números inteiros obtidos

            subInt = totalA - totalB;

            // armazena o numero inteiro lido em sub

            sub.esq = subInt/100;
            sub.dir = subInt - (sub.esq * 100);

            // transforma sub em real (negativo)

            resultadoSub = -retornaReal(sub);

        // se os números lidos forem iguais...

        } else {
            sub.esq = 0;
            sub.dir = 0;
            resultadoSub = retornaReal(sub);
        }
    } else {
        // se o primeiro número lido for maior que o segundo...
        if ((A.esq > B.esq) || (A.esq == B.esq && A.dir > B.dir)){
            
            // transforma o número lido (esq.dir) em inteiro 

            // Exemplo: 2.5 vira 250 // 3.14 vira 314

            if (A.dir < 10)
                totalA = (A.esq * 100) + (A.dir * 10);
            else
                totalA = (A.esq * 100) + (A.dir);

            if (B.dir < 10)
                totalB = (B.esq * 100) + (B.dir * 10);
            else
                totalB = (B.esq * 100) + (B.dir);

            // faz a subtração com os números inteiros obtidos

            subInt = totalA - totalB;

            // armazena o numero inteiro lido em sub

            sub.esq = subInt/100;
            sub.dir = subInt - (sub.esq * 100);

            // transforma sub em real
            resultadoSub = retornaReal(sub);

        // se o primeiro número lido for menor que o segundo...

        } else if ((A.esq < B.esq)  || (A.esq == B.esq && A.dir < B.dir)) {
            
            // transforma o número lido (esq.dir) em inteiro 

            // Exemplo: 2.5 vira 250 // 3.14 vira 314
            
            if (A.dir < 10)
                totalA = (A.esq * 100) + (A.dir * 10);
            else
                totalA = (A.esq * 100) + (A.dir);

            if (B.dir < 10)
                totalB = (B.esq * 100) + (B.dir * 10);
            else
                totalB = (B.esq * 100) + (B.dir);

            // faz a subtração com os números inteiros obtidos (invertendo B e A)

            subInt = totalB - totalA;

            // armazena o numero inteiro lido em sub

            sub.esq = subInt/100;
            sub.dir = subInt - (sub.esq * 100);

            // transforma sub em real (negativo)

            resultadoSub = - retornaReal(sub);

        // se os números lidos forem iguais...

        } else {
            sub.esq = 0;
            sub.dir = 0;
            resultadoSub = retornaReal(sub);
        }
    }

    printf("subtracao: %.2f\n", resultadoSub);
}

void fazMult(numeroReal A, numeroReal B){
    float resultadoMult, realA, realB;

    realA = retornaReal(A);
    realB = retornaReal(B);

    resultadoMult = realA * realB;

    printf("multiplicacao: %.2f\n", resultadoMult);
}

int main(){
    numeroReal X , Y;
    float realX , realY;

    scanf("%d", &X.esq);
    scanf("%d", &X.dir);
    scanf("%d", &Y.esq);
    scanf("%d", &Y.dir);

    realX = retornaReal(X);
    realY = retornaReal(Y);

    printf("%.2f\n", realX);
    printf("%.2f\n", realY);

    fazSoma(X, Y);
    fazSub(X, Y);
    fazMult(X, Y);

    return 0;
}