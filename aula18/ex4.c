#include <stdio.h>
#include <stdlib.h>

/*4) Fa�a uma fun��o recursiva que retorne o n-�simo termo da sequ�ncia de
Fibonacci, sendo que n � recebido por par�metro. Utilize essa fun��o para
desenvolver um programa que mostre no main() os n termos dessa
sequ�ncia na tela, a partir do valor de n recebido pelo teclado. Sabe-se que
o 1� termo � 0 e o 2� termo � 1.*/

void Fibonacci(int n,int contador,int sequencia[]){
    if(contador==n){

    }else{
        sequencia[1+contador]=sequencia[contador] + sequencia[contador-1];
        Fibonacci(n,contador+1,sequencia);
    }
    return;
}

int main(){
    int n=7;
    int sequencia[n];
    sequencia[0]=0;
    sequencia[1]=1;
    Fibonacci(n,n-(n-1),sequencia);
    for (int i = 0; i < n; i++)
    {
        printf("%i ",sequencia[i]);
    }
    printf("\n");
    
    return 0;
}