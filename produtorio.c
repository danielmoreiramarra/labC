/*
Arquivo: produtorio
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 02/12/2022
*/

#include <stdio.h>

float produtorio (float *vetor, int n);

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
        printf("%g * ", vetor[j]);
        j++;
    } while (j < n - 1);
    printf("%g = %g\n", vetor[n-1], produtorio(vetor, n));
return 0;
}

float produtorio (float *vetor, int n)
{
    float produto = 1.0;
    for (int i = 0; i < n; i++)
    {
        produto =  produto * vetor[i];
    }
return produto;
}
