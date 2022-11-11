/*
Arquivo: imc
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 10/09/2022
*/

#include <stdio.h>

int main(){
    double m, h, IMC;
    printf("Digite o peso [Kg] e a altura [m]\n");
    scanf("%lf %lf", &m, &h);
    IMC = m/(h*h);
    printf("IMC = %.2lf\n", IMC);
    if (IMC < 16) {
        printf("Perigo de vida\n");
    } else if (IMC >= 16 && IMC < 17) {
        printf("Muito abaixo do peso\n");
    } else if (IMC >= 17 && IMC < 18.5) {
        printf("Abaixo do peso\n");
    } else if (IMC >= 18.5 && IMC < 25) {
        printf("Peso normal\n");
    } else if (IMC >= 25 && IMC < 30) {
        printf("Acima do peso\n");
    } else if (IMC >= 30 && IMC < 35) {
        printf("Obesidade grau I\n");    
    } else if (IMC >= 35 && IMC < 40) {
        printf("Obesidade grau II\n");
    } else {
        printf("Obesidade grau III\n");
    }
return 0;
}
