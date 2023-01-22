/*
Arquivo: txtfibonacci;
Autor: Daniel Moreira Marra;
Matricula: 12121EEL009;
Criado em: 22/01/2023.
*/

# include <stdio.h>
# include <stdlib.h>

/*
Ao inves do modelo recursivo para
a sequencia de fibonacci, sera utilizado
o medelo de iteracao pois realiza menos
operacoes e e mais eficiente do ponto de
vista computacional
*/

typedef unsigned long long int ull;
ull fib(int x, ull p[]);

int main (int argc, char **argv)
{
    int n;
    printf("Digite a quantia de elementos da sequencia de fibonacci: ");
    scanf("%d", &n);
    ull *p;
    FILE *q;
    q = fopen("fibonacci.txt", "a");
    if (q == NULL)
    {
        printf("Erro na abertura do arquivo");
    }
    p = (ull*) malloc (n*sizeof(ull));
    for (int i = 0; i < n; i++)
    {
        p[i] = fib(i, p);
        fprintf(q, "%llu\n", p[i]);
    }
    printf("%llu\n", p[n - 1]);
    fclose(q);
    free(p);
return 0;
}

ull fib(int x, ull p[])
{
    switch (x)
    {
    case 0:
        return (ull) 0;
        break;
    
    case 1:
        return (ull) 1;
        break;
    
    default:
        return p[x - 1] + p[x - 2];
        break;
    }
}
