/*
Arquivo: aritmInt
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 06/09/2022
*/

#include <stdio.h>

int main(){
    int x, y;
    printf("Digite dois números inteiros ");
    scanf("%d %d", &x, &y);
    printf("%d%s%d = %d, %d%s%d = %d, %d%s%d = %d, %d%s%d = %d, %d%s%d = %d\n",
    x, "+", y, x+y, x, "-", y, x-y, x, "*", y, x*y, x, "/", y, x/y, x, "%", y , x%y);
return 0;
}
