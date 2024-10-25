#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1) Crie uma função que retorne o fatorial de um número passado por
parâmetro. A ideia do fatorial está abaixo:*/

void fatorial(int n, int *resultado) {
    if (n == 0 || n == 1) {
    } else {
        *resultado *= n; 
        fatorial(n - 1, resultado); 
    }
}

int main() {
    setlocale(LC_ALL,"portuguese");
    int num=7, resultado=1;

    fatorial(num, &resultado);

    printf("Fatorial de %d é: %d\n", num, resultado);

    return 0;
}