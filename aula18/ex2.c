#include <stdio.h>
#include <stdlib.h>
/*2) Crie uma fun��o que retorne x*y atrav�s de opera��o de soma. A fun��o
recebe x e y por par�metro*/

void multiplicacao(int contador, int* y){
    int valorAnt=(*y);
    if(contador==1){
    }else{
        contador--;
        multiplicacao(contador,y);
        (*y)=(*y)+valorAnt;
    }
    
    return;
}

int main(){
    int x=5,y=7;
    multiplicacao(x,&y);
    printf("%i\n",y);
    return 0;
}