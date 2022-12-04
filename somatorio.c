/*
Arquivo: somatorio
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 02/12/2022
*/

#include <stdio.h>

float somatorio (float *vetor, int n);

int main (void) 
{
    int n;
    printf("Numero de elementos do vetor: ");
    scanf("%d", &n);
    float vetor[n];
    for (int i = 0; i < n; i++)
    {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    int j = 0;
    do
    {
        printf("%g + ", vetor[j]);
        j++;
    } while (j < n - 1);
    printf("%g = %g\n", vetor[n-1], somatorio(vetor, n));
return 0;
}

float somatorio (float *vetor, int n)
{
    float soma = 0.0;
    for (int i = 0; i < n; i++)
    {
        soma += vetor[i];
    }
return soma;
}
