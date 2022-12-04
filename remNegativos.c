/*
Arquivo: remNegativos
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 02/12/2022
*/

#include <stdio.h>

int negativos (int * vetor, int n);

int main (void)
{
    int n;
    printf("Numero de elementos do vetor: ");
    scanf("%d", &n);
    int vetor[n];
    for (int i = 0; i < n; i++)
    {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    int neg_vetor = negativos(vetor, n);
    int vetor_pos[n - neg_vetor];
    int k = 0;
    int l = 0;
    while (k < n)
    {
        if (vetor[k] >= 0)
        {
            vetor_pos[l] = vetor[k];
            l++;
        }
        k++;
    }
    if (neg_vetor == n)
    {
        printf("vazio");
    } else {
        for (int j = 0; j < n - neg_vetor - 1; j++)
        {
                printf("%d, ", vetor_pos[j]);
        }
        printf("%d", vetor_pos[n - neg_vetor - 1]);
    }
    printf("\n");
return 0;
}

int negativos (int * vetor, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (vetor[i] < 0)
        {
            s++;
        }
    }
return s;
}
