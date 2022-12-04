/*
Arquivo: diferencas.c
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 03/12/2022
*/

#include <stdio.h>

float min(float *vetor, int N);
float Max(float *vetor, int N);

int main (void)
{
    int n;
    printf("Numero de elementos do vetor: ");
    scanf("%d", &n);
    float vetor_A[n];
    for (int i = 0; i < n; i++)
    {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &vetor_A[i]);
    }
    float vetor_B[n - 1];
    for (int j = 0; j < n - 1; j++)
    {
        vetor_B[j] = vetor_A[j + 1] - vetor_A[j];
    }
    for (int k = 0; k < n - 2; k++)
    {
        printf("%g, ", vetor_B[k]);
    }
    printf("%g min = %g, max = %g\n", vetor_B[n - 2], min(vetor_B, n - 1), Max(vetor_B, n - 1));
return 0;
}

float min(float *vetor, int N)
{
    float m = vetor[0];
    for (int i = 0; i < N; i++)
    {
        if (vetor[i] <= m)
        {
            m = vetor[i];
        }
    }
return m;
}

float Max(float *vetor, int N)
{
    float M = vetor[0];
    for (int i = 0; i < N; i++)
    {
        if (vetor[i] >= M)
        {
            M = vetor[i];
        }
    }
return M;
}
