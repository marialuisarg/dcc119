#include <stdio.h>
#include <string.h>

#define TAM 3
// tiro porrada e bomba ( ͡° ͜ʖ ͡°)
// E aí pessoitchas
// Boa sorten
//olá só testando
// bob esponja calça quadrada
// caracteres estranhos do meu teclado: áßðü¼®³åé©ñµµí
// firmeza familia
// Todo mundo colaborani ^,^
// Não peguem o coleguinha na porrada
// zack e cody gemeos em acao é uma ótima série
// dia de 
// (> o_o)>
//aopa




///////////////////////////////////////////////////////


// Pessoas, criei uma constante TAM = 3
// Grupo Luciana:
// Imprime tabuleiro
void imprimeTabuleiro(int mat[TAM][TAM]){
  int i, j;
  
  printf("\e[1;1H\e[2J");
  for(i=0;i<TAM;i++){
    for(j=0;j<TAM;j++){
        switch(mat[i][j]){
            case 0: printf ("     "); 
                    break;
            case 1: printf ("  X  "); 
                    break;
            case 2: printf ("  O  "); 
                    break;        
        }
        if(j != TAM-1){
          printf("|");
        }
    }
    printf("\n");
    if (i != TAM-1)
      printf("-----------------\n");
  }
}

  
// Inicializa matriz => Não precisa de scanf() => 0 (vazio), 1 - X (primeiro jogador), 2 - O (segundo jogador)
void inicializaMat(int mat[TAM][TAM]){
  int i,j;
  for(i=0;i<TAM;i++){
    for(j=0;j<TAM;j++){
      mat[i][j] = 0;
    }
  }
  return;
}



// Grupo Bruno:
// Verifica se ganhou (vertical, horizontal) => Uma função para cada
// Velha (-1)

// Pessoas, criei uma constante TAM = 3



/////////////// Grupo Isadora:	VAMOOOOOOOOOO

// Ler a jogada e marcar a posição - recebe matriz (lembrar que é um de cada vez = usar parâmetros)

void marcaPosicao(int tabuleiro[TAM][TAM], int jogador){
	
  int linha, coluna;

  printf("Insira a linha e coluna:");

  scanf("%d", &linha);
  scanf("%d", &coluna);

  if(jogador==1)
      {
        tabuleiro[linha][coluna]=1;
      }
  else 
      if (jogador==2)
          {
            tabuleiro[linha][coluna]=2;
          }
}


// Verifica se ganhou diagonal principal ou secundária
int ganhouDiagonal(int tabuleiro[TAM][TAM]){

	int resposta = -1;	// FALSO, NÃO GANHOU

	// Diagonal principal:
	if(tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]){
		resposta = tabuleiro[1][1];	// GANHOU E diz que quem está com a marcação em tabuleiro[1][1] ganhou;
	}

	// Diagonal secundária:
	if(tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]){
		resposta = tabuleiro[1][1];	// GANHOU E diz que quem está com a marcação em tabuleiro[1][1] ganhou;
	}

	return resposta;
}
int quemGanhou(int mat[3][3]){
    int i,j,cont1=0,cont2=0;

    //verifica vertical
    for(i=0;i<3;i++){
      cont1=0;
      cont2=0;
      for(j=0;j<3;j++){
        if(mat[i][j]==1){
          cont1++;
        }
        else if(mat[i][j]==2){
          cont2++;
        }
      }
      if(cont1==3)return 1;
      if(cont2==3)return 2;
    }

    //verica horizontal
    for(j=0;j<3;j++){
      cont1=0;
      cont2=0;
      for(i=0;i<3;i++){
        if(mat[i][j]==1){
          cont1++;
        }
        else if(mat[i][j]==2){
          cont2++;
        }
      }
      if(cont1==3)return 1;
      if(cont2==3)return 2;
    }
    int diag=ganhouDiagonal(mat);
    if(diag==1){
      return 1;
    }
    else if(diag==2){
      return 2;
    }

    int cont;
    for(i=0;i<3;i++){
      for(j=0;j<3;j++){
        if (mat[i][j] == 0){
          cont ++;
        }
      }
    }    
    if (cont == 0){
      //velha
      return -1;
    }
    else{
      //jogo continua
      return 0;
    }

}



// Todo mundo:
int main() {
	// Ideia?:
	// int jogador = 0, se jogador % 2 == 0(jogador1), else jogador % 2 != 0(jogador2) ?

  int jogo[TAM][TAM];
  
  inicializaMat(jogo);
  imprimeTabuleiro(jogo);

  int terminou = 0;
  int jogador = 1;

  while (terminou == 0){
    marcaPosicao(jogo, jogador);
    imprimeTabuleiro(jogo);

    terminou = quemGanhou(jogo);

    jogador ++;
    if (jogador == 3){
      jogador = 1;
    }
  }
  
	switch(terminou){
    case -1: printf ("Deu Velha!!!\n"); 
           break;
    case 1: printf ("Jogador X é o vencedor!!!!"); 
          break;
    case 2: printf ("Jogador O é o vencedor!!!!"); 
          break;        
  }

  return 0;
}