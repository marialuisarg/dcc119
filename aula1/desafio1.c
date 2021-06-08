#include <stdio.h>
#include <stdlib.h>

/*Imprimindo uma figura (diamante) na tela sem utilizar espaços*/

int main()
{
    printf("*1111%2d111*" , 1);
    printf("\n*111%4d11*" , 1);
    printf("\n*11%6d1*" , 1);
    printf("\n*1%8d*" , 1);
    printf("\n*11%6d1*" , 1);
    printf("\n*111%4d11*" , 1);
    printf("\n*1111%2d111*" , 1);
    return 0;
}