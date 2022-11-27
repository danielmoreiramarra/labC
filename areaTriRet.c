/*
Arquivo: areaTriRet.c
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 26/09/2022
*/

#include <stdio.h>
#include <math.h>

int main(void){
    float A[2], B[2], C[2];
    printf("Digite as coordenadas dos pontos A e B ");    
    scanf("%f %f %f %f", &A[0], &A[1], &B[0], &B[1]);
    C[0] = B[0];
    C[1] = A[1];
    float d_1 = sqrt(pow(C[0]-A[0],2)+pow(C[1]-A[1],2));
    float d_2 = sqrt (pow(B[0]-C[0],2)+pow(B[1]-C[1],2));
    float area = (d_1*d_2)/2;
    printf("A area vale %g\n", area);
return 0;
}
