#include <stdlib.h>
#include <stdio.h>

int main(){
    int l, c;
    int matriz[3][4];
    int contador = 1;
    // Preenchendo a matriz
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 4; c++)
        {
            matriz[l][c] = contador++;
        } // for
    } // for
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 4; c++)
        {
            printf("%d ",matriz[l][c]);
        } // for
        printf("\n");
    } // for
}