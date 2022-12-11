/*
Arquivo: bin2dec.c
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 10/12/2022
*/

#include <stdio.h>

int main (void)
{
    char m[65], n[65];
    printf("Digite um numero binario de ate 64 bits: ");
    scanf("%s", m);
    int i = 0;
    int j = 0;
    while (n[i] != '\0')
    {
        if (n[i] == '0' || n[i] == '1') {
            m[j] = n[i];
            i++;
            j++;
        } else {
        i++;
        }
    }
    m[j] = '\0';
    long long unsigned r = 0;
    int potencia = 1;
    int l, tamanho = 0;
    while (m[tamanho] != '\0')
    {
        tamanho ++;
    }
    char inversao[tamanho + 1];
    for (int k = 0; k < tamanho; k++)
    {
        inversao[(tamanho - 1) - k] = m[k];
    }
    inversao[tamanho] = '\0';
    while (inversao[l] != '\0')
    {
        r += (inversao[l] - 48)*potencia;
        potencia = potencia*2;
        l++;
    }
    printf("%s %s %s %llu\n",n, m, inversao, r);
return 0;
}
