/*
Arquivo: fib
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 08/01/2023
*/

#include <stdio.h>

int fib(int n);

int main(int argc, char **argv)
{
    int n;
    printf("Digite o numero da sequencia de fibonacci: ");
    scanf("%d", &n);
    int res = fib(n);
    printf("%d\n", res);
return 0;
}

int fib(int n)
{
    switch (n)
    {
    case 0:
        return 0;
        break;
    case 1:
        return 1;
    default:
        return fib(n - 1) + fib (n - 2);
        break;
    }
}
