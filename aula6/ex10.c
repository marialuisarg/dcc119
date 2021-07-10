/**
 * Uma empresa quer decidir o planejamento para 2020 por meio de um sistema implementado na linguagem C.
 * Neste sistema, cada usuário entra com a sua opinião: planejamento 1, 2 ou 3; e o seu nível de
 * experiência: 1, 2 ou 3. Durante a votação os resultados são armazenados em dois vetores: o vetor P
 * de inteiros que armazena o planejamento escolhido pelo gestor e o vetor N que armazena a sua
 * experiência. Por exemplo, considere que o primeiro gestor escolha o planejamento 1 e tem Nível 3; o
 * segundo gestor escolhe o planejamento 2 e possui nível 1; e o terceiro gestor escolha o planejamento
 * 3 e tem Nível 2, teríamos os seguintes vetores parcialmente preenchidos:
 * 
 * P  =  1  2  3 · · ·
 * N  =  3  1  2 · · ·
 * 
 * A regra para computação de cada voto considera o nível de experiência do gestor: um voto de um gestor
 * do Nível 3 equivale a 3 votos, um voto do Nível 2 equivale a 2 votos e um voto do Nível 1 equivale a
 * apenas um voto.
 * 
 * Assim, considerando os vetores acima teríamos uma apuração parcial com 3 votos para o planejamento 1,
 * 1 voto para o planejamento 2 e 2 votos para o planejamento 3. Para esta questão, assuma que todos os
 * valores digitados pelos funcionários  são válidos. Ou seja, todos os votos são  inseridos corretamente.
 * 
 * a) Faça uma função que receba por parâmetro os vetores P e N, além disso outro vetor R de tamanho 3
 * que deverá ser preenchido. No vetor R, a primeira posição será o total de votos no planejamento 1, a
 * segunda posição será o total de votos no planejamento 2 e a terceira posição será total de votos no
 * planejamento 3.
 * 
 * b) Faça o programa principal que leia as informações necessárias para os 10 funcionários, utilize a
 * função do tem anterior e imprima a quantidade de votos em cada um dos planejamentos.
**/

#include <stdio.h>
#include <stdlib.h>

#define tam 10

void calculaVotos(int P[tam-1], int N[tam-1], int R[2]){
    int votos1 = 0, votos2 = 0, votos3 = 0;
    for(int n = 0; n < tam; n++){
        switch (P[n]){
        case 1:
            switch (N[n]){
            case 1:
                votos1 += 1;
                break;
            case 2:
                votos1 += 2;
                break;
            case 3:
                votos1 += 3;
                break;
            default:
                break;
            }
            break;

        case 2:
            switch (N[n]){
            case 1:
                votos2 += 1;
                break;
            case 2:
                votos2 += 2;
                break;
            case 3:
                votos2 += 3;
                break;
            default:
                break;
            }
            break;
        
        case 3:
            switch (N[n]){
            case 1:
                votos3 += 1;
                break;
            case 2:
                votos3 += 2;
                break;
            case 3:
                votos3 += 3;
                break;
            default:
                break;
            }
            break;
        
        default:
            break;
        }
    }

    // preenchendo o vetor R
    R[0] = votos1;
    R[1] = votos2;
    R[2] = votos3;

    printf("%d %d %d",R[0],R[1],R[2]);
}

int main(){
    int P[tam-1]; //planejamento 
    int N[tam-1]; //nivel de experiência
    int R[2];  //resultado

    for(int i = 0; i < tam; i++){
        scanf("%d",&P[i]);
    }

    for(int j = 0; j < tam; j++){
        scanf("%d",&N[j]);
    }

    calculaVotos(P,N,R);

    return 0;
}