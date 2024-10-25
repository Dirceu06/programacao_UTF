#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*2) Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distância entre os dois pontos no plano, através da seguinte fórmula:
*/

int main(){
    float pontox1,pontoy1, pontox2, pontoy2, distancia;
    printf("digite o ponto X1: ");
    scanf("%f",&pontox1);
    printf("digite o ponto y1: ");
    scanf("%f",&pontoy1);


    printf("digite o ponto X2: ");
    scanf("%f",&pontox2);
    printf("digite o ponto y2: ");
    scanf("%f",&pontoy2);

    distancia = sqrt(pow(pontox2-pontox1,2)+pow(pontoy2-pontoy1,2));

    printf("a distancia entre esses dois pontos é igual %.2f",distancia);
    return 0;
}