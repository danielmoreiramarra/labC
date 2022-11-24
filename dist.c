#include <stdio.h>
#include <math.h>

int main(){
    double A[2], B[2];
    printf("Digite as coordenadas dos pontos A e B ");
    scanf("%lf %lf %lf %lf", &A[1], &A[2], &B[1], &B[2]);
    double d = sqrt (pow(B[1]-A[1],2)+pow(B[2]-A[2],2));
    printf("A distancia vale %.2lf", d);
return 0;
}
