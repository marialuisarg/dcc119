/**
 * Nomes de autores em referências bibliográficas geralmente aparecem grafados em formato específico.
 * Por exemplo, um autor chamado "João José Silva" pode ter seu nome citado como "João J. SILVA",
 * "SILVA, João José" ou "SILVA, J.J.".
 * 
 * a) Faça três funções distintas que recebam duas strings, s1 e s2. Cada uma das funções deve atribuir
 * a s2 o nome contido em s1 em um dos formatos citados acima.
 * 
 * b) Elabore um programa que leia um nome e imprima-o em cada um dos formatos citados, chamando as
 * funções implementadas na letra a.
**/

#include <stdio.h>
#include <string.h>
#define TAM 500

void formatoA(char s1[], char s2[]){
    int tam, contS2 = 0, iS;
    tam = strlen(s1);

    for (int i = tam; s1[i] != ' '; i--)
    {
        iS = i;
    }
    

    for (int i = 0; s1[i] != ' '; i++)
    {
        s2[i] = s1[i];
        contS2++;
    }
    
    for (int i = contS2; i < iS-1; i++)
    {
        if(s1[i] == ' '){
            s2[contS2] = ' ';
            contS2++;
            s2[contS2] = s1[i+1];
            contS2++;
            s2[contS2] = '.';
            contS2++;
        }
    }
        s2[contS2] = ' ';
        contS2++;

    for (int i = iS; i < tam; i++)
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z'){
            s2[contS2] = s1[i];
            contS2++;
        }
        
        if(s1[i] >= 'a' && s1[i] <= 'z'){
            s2[contS2] = s1[i] - 'a' + 'A';
            contS2++;
        }
    }
    s2[contS2] = '\0';  

    printf("%s\n", s2);
}

void formatoB(char s1[], char s2[]){
    int iS, tam, contS2=0, j=1;
    char aux;

    tam = strlen(s1);

    for (int i = tam-1; s1[i] != ' '; i--)
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z'){
            s2[contS2] = s1[i];
            contS2++;
        }
        if(s1[i] >= 'a' && s1[i] <= 'z'){
            s2[contS2] = s1[i] - 'a' + 'A';
            contS2++;
        }
        iS = i;
    }

    for (int i = 0; i < contS2/2; i++)
    {
        aux = s2[i];
        s2[i] = s2[contS2-j];
        s2[contS2-j] = aux;

        j++;
    }

    s2[contS2] = ',';
    contS2++;
    s2[contS2] = ' ';
    contS2++; 
    
    for (int i = 0; i < iS-1; i++)
    {
        s2[contS2] = s1[i];
        contS2++;
    }
    s2[contS2] = '\0';
    printf("%s\n", s2);
}

void formatoC(char s1[], char s2[]){
    int iS, tam, contS2=0, j=1;
    char aux;

    tam = strlen(s1);

    for (int i = tam-1; s1[i] != ' '; i--)
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z'){
            s2[contS2] = s1[i];
            contS2++;
        }
        if(s1[i] >= 'a' && s1[i] <= 'z'){
            s2[contS2] = s1[i] - 'a' + 'A';
            contS2++;
        }
        iS = i;
    }

    for (int i = 0; i < contS2/2; i++)
    {
        aux = s2[i];
        s2[i] = s2[contS2-j];
        s2[contS2-j] = aux;

        j++;
    }

    s2[contS2] = ',';
    contS2++;
    s2[contS2] = ' ';
    contS2++;
    s2[contS2] = s1[0];
    contS2++;
    s2[contS2] = '.';
    contS2++;

    for (int i = 0; i<iS-1; i++)
    {
        if(s1[i+1] >= 'A' && s1[i+1] <='Z'){
            s2[contS2] = s1[i+1];
            contS2++;
            s2[contS2] = '.';
            contS2++;
        }
    }
    s2[contS2] = '\0';
    printf("%s", s2);
}

int main(){
    char s1[TAM], s2[TAM], aux[TAM];

    scanf("%[^\n]s ",s1);
    
    s1[strlen(s1)] = '\0';

    strcpy(aux, s2);

    formatoA(s1, s2);
    strcpy(s2, aux);
    
    formatoB(s1, s2);
    strcpy(s2, aux);
    
    formatoC(s1, s2);
    
    return 0; 
}