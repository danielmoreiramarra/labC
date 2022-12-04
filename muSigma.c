/*
Arquivo: muSigma
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 02/12/2022
*/

#include <stdio.h>
#include <math.h>

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
    float media = somatorio(vetor, n)/n;
    float s = 0.0;
    for (int j = 0; j < n; j++)
    {
        s = s + pow((vetor[j] - media),2);
    }
    float desvio = sqrt(s/n);
    printf("média %g, desvio %g\n", media, desvio);
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
