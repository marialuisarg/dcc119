#include <stdlib.h>
#include <stdio.h>

int main() {
    int a = 10;
    float x = a;
    // double é um float com maior espaço
    double y = a;
    // char armazena um único caractere.
    char c = 'a';
    
    // escrever %.0f faz nenhuma casa decimal aparecer na tela. %.1f, p. ex., exibiria uma casa decimal.
    printf("a = %d; x = %.0f; y = %f; c = %c" , a , x , y , c);
    
    return 0;
}