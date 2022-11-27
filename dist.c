/*
Arquivo: dist
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 24/09/2022
*/

#include <stdio.h>
#include <math.h>

int main(void){
    float A[2], B[2];
    printf("Digite as coordenadas dos pontos A e B ");
    scanf("%f %f %f %f", &A[0], &A[1], &B[0], &B[1]);
    float d = sqrt (pow(B[0]-A[0],2)+pow(B[1]-A[1],2));
    printf("A distancia vale %g\n", d);
return 0;
}
