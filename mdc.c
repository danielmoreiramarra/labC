/*
Arquivo: mdc
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 08/01/2023
*/

#include <stdio.h>

int mdc(int a, int b);

int main (void) {
    int a, b;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);
    int c = mdc(a, b);
    printf("%d\n", c);
return 0;
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a%b);
    }
}
