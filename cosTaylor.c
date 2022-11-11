/*
Arquivo: cosTaylor
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 10/09/2022
*/

#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793115997963468544185161590576171875

int main(){
    int n, f;
    double x;
    printf("Digite o número de termos [n]\n");
    scanf("%d", &n);
    printf("Digite o fator de pi [x]\n");
    scanf("%lf", &x);
    double soma = 0.0;
    for (int i = 0; i <= n; i = i + 1) {
        if (i == 0) {
            f = 1;
        } else {
            f = 1;
            int j = 1;
            while (j <= 2*i) {
                f = f*j;
                j++;
            }
        }
        soma += pow(-1, i)*pow((x*PI), 2*i)/f;
    }
    printf("%.5lf\n", soma);
return 0;
}
