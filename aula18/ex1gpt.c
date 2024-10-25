#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1) Crie uma fun��o que retorne o fatorial de um n�mero passado por
par�metro. A ideia do fatorial est� abaixo:*/

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

    printf("Fatorial de %d �: %d\n", num, resultado);

    return 0;
}