/*
Arquivo: contaVogais.c
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 10/12/2022
*/

#include <stdio.h>

int main (void)
{
    char palavra[101];
    printf("Digite uma palavra de no maximo 100 caracteres sem acentos ou cedilha: ");
    scanf("%s", palavra);
    int i, tamanho, vogais = 0;
    while (palavra[i] != '\0')
    {
        tamanho += 1;
        i ++;
    }
    for (int j = 0; j <= tamanho ; j++)
    {
        if (palavra[j] == 'A' || palavra[j] == 'E' || palavra[j] == 'I' || palavra[j] == 'O' || palavra[j] == 'U'
        || palavra[j] == 'a' || palavra[j] == 'e' || palavra[j] == 'i' || palavra[j] == 'o' || palavra[j] == 'u')
        {
            vogais = vogais + 1;
        } 
    }
    printf("%d %d\n", vogais, tamanho);
return 0;
}
