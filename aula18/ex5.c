#include <stdlib.h>
#include <stdio.h>

/*5) Um problema t�pico em ci�ncia da computa��o consiste em
converter um n�mero da sua forma decimal para bin�ria. Crie um
algoritmo recursivo para resolver esse problema. */
void parabin(int* valorDividir){
    if((*valorDividir)==0){
    }else{
        int resto=(*valorDividir)%2;
        int resultado=(*valorDividir)/2;
        parabin(&resultado);
        if (resto==1)
        {
            printf("1 ");
        }else if (resto == 0)
        {
            printf("0 ");
        }
    }

    return;
}
int main(){
    int num=8;
    int numaux=num;
    parabin(&numaux);
    
    
    return 0;
}