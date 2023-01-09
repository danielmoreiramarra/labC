/*
Arquivo: aproxpi;
Autor: Daniel Moreira Marra;
Matricula: 12121EEL009;
Criado em: 08/01/2022.
*/

#include <stdio.h>
#include <math.h>

double aprox_pi (double n);

int main (int argc, char **argv)
{
    double n;
    printf("Digite um numero para aproximar pi: ");
    scanf("%lf", &n);
    printf("%lf\n", aprox_pi(n));
return 0;
}

double aprox_pi (double n)
{
    if (n == 0.0)
    {
        return 4.0;
    }
    else
    {
        return aprox_pi(n - 1.0) + 4*pow(-1.0, n)/(2*n + 1.0);
    }
}
