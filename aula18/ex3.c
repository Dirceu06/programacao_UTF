#include <stdio.h>
#include <stdlib.h>

/*3) Crie uma fun��o que retorne x elevado a y atrav�s de opera��o de
multiplica��o. A fun��o recebe x e y por par�metro*/

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
    printf("o resultado da potencia �: %i\n",y);
    return 0;
}