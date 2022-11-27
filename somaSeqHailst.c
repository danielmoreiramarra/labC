/*
Arquivo: somaSeqHailst.c
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 27/09/2022
*/

#include <stdio.h>

int main(void){
    int a, s;
    printf("Digite um número inteiro ");
    scanf("%d", &a);
    s = a;
    while (a > 1){
        if (a%2 == 1){
            a = 3*a + 1;
            s = s + a;
        }else{
            a = a/2;
            s = s + a;
        }
    }
printf("%d\n", s);
return 0;
}
