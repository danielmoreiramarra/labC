/*
Arquivo: altura;
Autor: Daniel Moreira Marra;
Matricula: 12121EEL009;
Criado em: 08/01/2022.
*/

#include <stdio.h>

int cm (int x);

struct altura
{
    int metros;
    int centimetros;
};

typedef struct altura altura;

int main (int argc, char **argv)
{
    altura altura;
    printf("Digite a altura em metros: ");
    scanf("%d.%d", &altura.metros, &altura.centimetros);
    altura.centimetros = cm(altura.centimetros);
    printf("Altura %dm%d\n", altura.metros, altura.centimetros);
return 0;
}

int cm (int x)
{
    if (x < 10)
    {
        return x*10;
    } else if (x > 99)
    {
        return cm(x/10);
    } else
    {
        return x;
    }
}
