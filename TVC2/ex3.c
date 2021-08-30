/**
 * Uma rede de lojas possui 5 filiais. Cada uma das filiais comercializa 10 produtos. Você deve elaborar um algoritmo para auxiliar no
 * gerenciamento do estoque de produtos de cada filial. Para resolver esta questão, deve-se fazer:
 * 
 * a) Defina constantes para representar o número total de filiais e o número de produtos comercializados.
 * 
 * b) Crie uma estrutura para representar uma filial da loja. Essa estrutura deve conter 
 * 
 *      o nome da filial (string);
 *      um número inteiro representando a capacidade de estoque da filial, ou seja, a quantidade máxima de produtos que essa filial pode ter em
 *          estoque (considerando todos os produtos); 
 *      um vetor para armazenar a quantidade de unidades de cada produto presentes no estoque dessa filial.
 * 
 * c) Faça uma função que receba como parâmetro uma estrutura do tipo filial. A função deve determinar e imprimir o percentual de ocupação do
 * estoque de cada filial em relação à capacidade máxima. Caso a quantidade de itens em  estoque esteja acima de 90% da capacidade, a função
 * deve mostrar uma mensagem de alerta informando que o estoque está quase completo.
 * 
 * d) Elabore um programa principal que crie um vetor de estruturas do tipo filial para armazenar as informações referentes às 5 filiais da
 * loja e leia todos os dados para cada uma. Em seguida, o programa deve chamar a função do item c para cada filial.
**/

#include <stdio.h>
#include <stdlib.h>

#define F 5     // filiais
#define P 10    // produtos

#define MAX 100 

typedef struct {
    char nome[MAX];
    int maxEstoque;
    int uProdutos[P];
} Filial;

void verificaEstoque(Filial loja){
    int i, totalProdutos = 0;
    float ocupacao;

    // calcula a quantidade total de produtos
    for (i = 0; i < P; i++)
        totalProdutos += loja.uProdutos[i];
    
    // calcula a porcentagem de ocupação do estoque
    ocupacao = (totalProdutos * 100.0) / loja.maxEstoque;

    // imprime a ocupação do estoque e, se ela for maior que 90%, imprime o aviso
    printf("%.1f%% de ocupacao do estoque da filial %s\n", ocupacao, loja.nome);

    if (ocupacao > 90)
        printf("O estoque da filial esta quase completo!\n");
}

int main()
{
    Filial loja[F];
    int i, j;

    // recebe os dados e chama a função para cada filial

    for (i = 0; i < F; i++){
        scanf("%[^\n]s ", loja[i].nome);
        scanf("%d ", &loja[i].maxEstoque);
        for (j = 0; j < P; j++)
            scanf("%d ", &loja[i].uProdutos[j]);
            
        verificaEstoque(loja[i]);
    }

    return 0;
}