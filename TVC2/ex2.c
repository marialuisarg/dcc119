/**
 * Como estratégia para incentivar os atletas participantes da Olimpíada de Tóquio, um patrocinador brasileiro ofereceu, para diversas
 * modalidades olímpicas, um investimento em projetos de apoio às modalidades por cada medalha recebida pelos atletas. O investimento seria de
 * 30.000 reais por cada medalha conquistada. Dado o quadro de medalhas com a quantidade de medalhas de ouro, prata e bronze para um conjunto de
 * M modalidades esportivas, faça o que se pede.  Este quadro de medalhas deve ser registrado numa matriz M x 3, onde cada coluna corresponde
 * a quantidade de medalhas de ouro, prata e bronze, nesta ordem.  
 * 
 * a) Faça uma função que receba a matriz já preenchida com os dados de até 40 modalidades olímpicas, um vetor e a quantidade de modalidades
 * que serão analisadas. Utilize o vetor para registrar, para cada modalidade, o total de recursos que devem ser destinados aos projetos de
 * apoio à modalidade. Um bônus de 10.0000 reais deve ser somado na posição no vetor correspondente à modalidade que conquistou o maior número
 * de medalhas (Considere que há apenas uma modalidade com maior número de medalhas, sem empates). Sua função deve retornar o índice da
 * modalidade que recebeu o bônus. 
 * 
 * b) Faça também o programa principal que leia o número de modalidades, o número de medalhas de ouro, prata e bronze para cada modalidade, e
 * chame a função criada. Em seguida, imprima o total a ser investido em projetos da modalidade retornada pela função, bem como o total que
 * será investido pelo patrocinador.
**/

#include <stdio.h>
#include <stdlib.h>

#define M 40
#define N 3

int calculaInvestimentos(int quadro[M][N], float investimentos[], int modalidades){
    int i, j, indice;
    float maiorInvestimento = 0;

    for (i = 0; i < modalidades; i++){
        investimentos[i] = 0;       

        for (j = 0; j < N; j++){
            investimentos[i] += quadro[i][j] * 30000;       // calcula o investimento pelo numero de medalhas de cada modalidade
        }

        if (investimentos[i] > maiorInvestimento){          // verifica se foi a modalidade com mais medalhas e armazena indice
            maiorInvestimento = investimentos[i];
            indice = i;                                 
        }
    }

    investimentos[indice] += 100000;     // bônus de 100.000 reais para a modalidade com mais medalhas

    return indice;
}

int main()
{
    int quadroMedalhas[M][N];
    float investimentos[M], invTotal = 0;
    int i, j, modalidades, iModalidade;

    // leitura da quantidade de modalidades e das medalhas

    scanf("%d", &modalidades);

    for (i = 0; i < modalidades; i++){
        for (j = 0; j < N; j++){
            scanf("%d", &quadroMedalhas[i][j]);
        }
    }
    
    // função recebe o índice da maior modalidade e calcula o investimento por modalidade (armazena no vetor)

    iModalidade = calculaInvestimentos(quadroMedalhas, investimentos, modalidades);

    // calcula o investimento total, percorrendo o vetor investimentos

    for (i = 0; i < modalidades; i++){
        invTotal += investimentos[i];
    }

    // imprime os valores encontrados

    printf("Total a ser investido na modalidade %d: R$%.2f\n", iModalidade, investimentos[iModalidade]);
    printf("Investimento total: R$%.2f", invTotal);

    return 0;
}