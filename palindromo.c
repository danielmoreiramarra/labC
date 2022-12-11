/*
Arquivo: palindromo
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 11/12/2022
*/

#include <stdio.h>

int main (void)
{
    char texto_1[80];
    printf("Digite um texto de uma linha qualquer\n");
    fgets(texto_1, 80, stdin);
    char texto_2[80];
    int i,j = 0;
    while (texto_1[i] != '\0')
    {
        if (texto_1[i] >= 65 && texto_1[i] <= 90 || texto_1[i] >= 97 && texto_1[i] <= 122)
        {
            texto_2[j] = texto_1[i];
            i++;
            j++;
        }
        else
        {
        i++;
        }
    }
    texto_2[j] = '\0';
    char texto_3[j + 1];
    for (int k = 0; k < j; k++)
    {
        if (texto_2[k] >= 97 && texto_2[k] <= 122)
        {
            texto_2[k] -= 32;
        }
        texto_3[j - 1 - k] = texto_2[k];
    }
    texto_3[j] = '\0';
    int teste = 1;
    for (int l = 0; l < j; l++)
    {
        if (texto_2[l] != texto_3[l])
        {
            teste--;
        }
    }
    if (teste != 1)
    {
        printf("Palindromo : Falso\n");
    } 
    else 
    {
        printf("Palindromo: Verdadeiro\n");
    }
return 0;
}
