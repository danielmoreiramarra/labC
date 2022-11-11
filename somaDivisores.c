/*
Arquivo: somaDivisores
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 10/11/2022
*/

#include <stdio.h>

int main(){
    int a, b, i;
    printf("Digite um número inteiro positivo ");
    scanf("%d", &a);
    b = 0;
    for (i = a; i != 0; i--) {
        if (a%i == 0) {
            b = b + i;
        } 
    }
    printf("%d\n", b);
return 0;
}
