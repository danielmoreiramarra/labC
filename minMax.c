/*
Arquivo: minMax
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 02/12/2022
*/

#include <stdio.h>

int min(int *vetor, int N);
int Max(int *vetor, int N);

int main (void) 
{
    int N;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &N);
    int vetor[N];
    for (int i = 0; i < N; i++)
    {
        printf("Informe o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    int m = min(vetor, N);
    int M = Max(vetor, N);
    for (int j = 0; j < N; j++)
    {
        if (vetor[j] == m)
        {
            printf("%d< ", m);
        } else if (vetor[j] == M)
        {
            printf("%d> ", M);
        } else {
            printf("%d ", vetor[j]);
        }
    }
    printf("\n");
return 0;
}

int min(int *vetor, int N)
{
    int m = vetor[0];
    for (int i = 0; i < N; i++)
    {
        if (vetor[i] <= m)
        {
            m = vetor[i];
        }
    }
return m;
}

int Max(int *vetor, int N)
{
    int M = vetor[0];
    for (int i = 0; i < N; i++)
    {
        if (vetor[i] >= M)
        {
            M = vetor[i];
        }
    }
return M;
}
