/**
 * Escreva uma função para auxiliar os agentes públicos na determinação de grupos prioritários para a
 * vacinação COVID-19. A função deve receber três vetores de números inteiros de mesmo tamanho (idades,
 * classes, selecionados) e uma uma variável inteira que representa o tamanho dos vetores. Cada posição
 * dos vetores: idades e classes representa uma mesma pessoa. O valor inteiro armazenado em cada posição
 * no vetor classes pode assumir um dos cinco valores a seguir:
 * 
 * 0: profissional da saúde
 * 1: pessoa em abrigos públicos
 * 2: pessoa com deficiência
 * 3: pessoa com comorbidade
 * 4: professor ou agente de segurança
 * 
 * A sua função deve:
 * 
 * a) Calcular e imprimir a porcentagem de pessoas em abrigos públicos
 * 
 * b) Armazenar no vetor selecionados, os índices das pessoas com idade superior ou igual a 60 anos que
 * estão em abrigos públicos.
 * 
 * c) Retornar o números de pessoas com idade superior a 60 anos que estão em abrigos públicos.
 * 
 * Escreva a função principal que lê o tamanho dos vetores, os vetores idades e classes, chame a função
 * e imprima os índices das pessoas com idade superior a 60 anos que estão em abrigos públicos.
**/

#include <stdlib.h>
#include <stdio.h>

int identificaSelecionados(int idades[], int classes[], int selecionados[], int tam){
    int qtdAbrigo = 0 , indiceS = 0 , numPessoas;
    float porcAbrigo;
    char porc = '%';
    
    // conta a quantidade de pessoas em abrigos públicos
    for (int i = 0; i < tam; i++){
        if (classes[i] == 1){
            qtdAbrigo++;
        }
    }

    // calcula e imprime a % de pessoas em abrigos públicos (comentado por causa do Moodle)
    porcAbrigo = (qtdAbrigo * 100) / tam;
    printf("%.2f%c das pessoas estão em abrigos públicos.\n",porcAbrigo,porc);

    // conta a quantidade de pessoas com idade >= 60 que estão em abrigos e armazena seus índices
    for (int i = 0; i < tam; i++) {
        if ((classes[i] == 1) && (idades[i] >= 60)){
            selecionados[indiceS] = i;
            indiceS++;
        }
    }

    //calcula e retorna o número de pessoas +60 que estão em abrigos públicos
    numPessoas = indiceS + 1;
    return numPessoas;
}

int main(){
    int tamanho, qtdAbrigo;

    scanf("%d",&tamanho);

    int idades[tamanho] , classes[tamanho] , selecionados[tamanho];

    for (int j = 0; j < tamanho; j++){
        scanf("%d",&idades[j]);
        scanf("%d",&classes[j]);
    }

    qtdAbrigo = identificaSelecionados(idades, classes, selecionados, tamanho);

    printf("Indices dos selecionados :\n");
    
    for (int n = 0; n < qtdAbrigo-1; n++)
        printf("%d\n",selecionados[n]);
    return 0;
}