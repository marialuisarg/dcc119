#include <stdio.h>
#include <stdlib.h>

void tempo(int tempbase){
    char pais;
    scanf(" %c%*c", &pais);

    switch (pais){
        case 'A':
        printf("Tempo Adicional %d dias\nTempo Total %d dias", tempbase, tempbase+3);
        break;
        case 'E':
        printf("Tempo Adicional %d dias\nTempo Total %d dias", tempbase, tempbase+5);
        break;
        case 'P':
        printf("Tempo Adicional %d dias\nTempo Total %d dias", tempbase, tempbase+10);
        break;
        case 'C':
        printf("Tempo Adicional %d dias\nTempo Total %d dias", tempbase, tempbase*2);
        break;
    }
}

int main(){
    int tempbase;
    scanf("%d",&tempbase);
    tempo(tempbase);
    return 0;
}