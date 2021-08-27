/**
 * Um documento publicado em setembro de 2019 aponta que a produção brasileira de leite em 2018 atingiu
 * 33,8 bilhões de litros. De acordo com o estudo, as regiões Sul e Sudeste, com participação de 34,2% e
 * 33,9%, respectivamente, lideram a produção nacional. O Brasil atingiu média de produtividade de 2.069
 * litros de leite por vaca no ano. Sendo a região sul responsável pelo aumento da produtividade, com
 * 3.437 litros/vaca/ano. Os três estados do Sul tiveram produtividades superiores a 3.200
 * litros/vaca/ano. Em seguida, aparece Minas Gerais, com 2.840 litros de leite por vaca no ano. 
 * 
 * De olho nesses números, um produtor mineiro resolveu registrar mensalmente a quantidade de litros de
 * leite ordenhado de uma de suas melhores vacas durante um ano. 
 * 
 * a) Crie uma estrutura  chamada Est_Vaca capaz de armazenar o nome da fazenda, o código identificador
 * da vaca e sua produção mensal no período de um ano. Seguem os campos:
 * 
 *  char nome_fazenda[71]
 *  int id_vaca
 *  float litros_ordenhados[12]
 * 
 * b) O produtor mineiro deseja verificar se sua vaca consegue alcançar uma produção semelhante à
 * produção dos estados da região Sul do Brasil. Para isso, faça uma função que receba como parâmetros
 * uma estrutura Est_Vaca com os dados da vaca. Sua função deve retornar 1, caso a vaca consiga uma
 * produção total superior ou igual a 3200 litros, e deverá retornar 0 caso contrário.    
 * 
 * c) Faça um programa que leia os dados da vaca armazenando-os numa estrutura. A partir de uma chamada
 * da função do item anterior, imprima uma das mensagem: "Produção superior ou igual a 3200 litros" ou
 * "Baixa produtividade".
**/

#include <stdlib.h>
#include <stdio.h>

typedef struct {
    char nome_fazenda[71];
    int id_vaca;
    float litros_ordenhados[12];
} Est_Vaca;

int verificaProducao(Est_Vaca vaca){
    int i;
    float totalProduzido = 0;

    for (i = 0; i < 12; i++)
        totalProduzido += vaca.litros_ordenhados[i];

    if (totalProduzido >= 3200)
        return 1;
    else
        return 0;
}

int main() {
    Est_Vaca vaca;
    int i, teste;

    scanf("%[^\n]s ", vaca.nome_fazenda);
    scanf("%d ", &vaca.id_vaca);
    for (i = 0; i < 12; i++)
        scanf("%f", &vaca.litros_ordenhados[i]);
    
    teste = verificaProducao(vaca);

    if (teste == 1)
        printf("Produção superior ou igual a 3200 litros");
    else 
        printf("Baixa produtividade");

    return 0;
}