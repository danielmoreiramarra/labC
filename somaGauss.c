/*
Arquivo: somaGauss
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 10/09/2022
*/

#include <stdio.h>

int main(){
    int n, i;
    printf("Digite um número inteiro ");
    scanf("%d", &n);
    int soma = 0;
    for(i = 1; i <= n; i++){
        soma = soma + i;      
    };
    printf("%d", soma);
return 0;
}