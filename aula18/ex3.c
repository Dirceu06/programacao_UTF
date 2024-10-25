#include <stdio.h>
#include <stdlib.h>

/*3) Crie uma função que retorne x elevado a y através de operação de
multiplicação. A função recebe x e y por parâmetro*/

void potencia(int expoente, int* base, int baseAux){
    if(expoente==1){
    }else{
        expoente--;
        potencia(expoente,base,baseAux);
        (*base)=(*base)*baseAux;
    }
    return;
}

int main(){
    int x=7,y=3;
    potencia(x,&y,y);
    printf("o resultado da potencia é: %i\n",y);
    return 0;
}