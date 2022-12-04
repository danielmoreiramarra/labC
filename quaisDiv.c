/*
Arquivo: quaisDiv
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 02/12/2022
*/

#include <stdio.h>

int main (void) 
{
    int N, R;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &N);
    int vetor[N];
    for (int i = 0; i < N; i++)
    {
        printf("Informe o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero de referência: ");
    scanf("%d", &R);
    for (int j = 0; j < N; j++)
    {
        if (R%vetor[j] == 0)
        {
            printf("%d# ", vetor[j]);
        } else {
            printf("%d ", vetor[j]);
        }
    }
    printf("\n");
return 0;
}
