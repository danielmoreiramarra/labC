/*
Arquivo: divisores
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 27/09/2022
*/

#include <stdio.h>

int main(void){
    int n, i;
    printf("Digite um número inteiro ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        if(n%i == 0){
            printf("%d, ", i);
        }
    }
printf("\n");
return 0;
}
