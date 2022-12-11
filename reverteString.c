/*
Arquivo: reverteString.c
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 10/12/2022
*/

#include <stdio.h>

int main (void)
{
    char frase[101];
    printf("Digite uma palavra de no maximo 100 caracteres sem acentos ou cedilha: ");
    fgets(frase, 101, stdin);
    int tamanho = 0;
    while (frase[tamanho] != '\0')
    {
        tamanho ++;
    }
    char inversao[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        if (frase[i] >= 97 && frase[i] <= 122)
        {
            frase[i] -= 32;
        }
        inversao[(tamanho -1) - i] = frase[i];
    }
    inversao[tamanho] = '\0';
    printf("%s\n",inversao);
return 0;    
}
