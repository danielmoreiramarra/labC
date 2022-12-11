/*
Arquivo: contaCaracteres
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 11/12/2022
*/

#include <stdio.h>

int main (void)
{
    char texto[101];
    printf("Digite uma frase com ate 100 caracteres:\n");
    fgets(texto, 101, stdin);
    int i, letras, digitos, outros = 0;
    while (texto[i] != '\0')
    {
        if (texto[i] >= 65 && texto[i] <= 90 || texto[i] >= 97 && texto[i] <= 122)
        {
            letras ++;
        } 
        else if (texto[i] >= 48 && texto[i] <= 57)
        {
            digitos ++;
        } 
        else
        {
            outros ++;
        }
    i++;
    }
    outros--;
    printf ("letras: %d dígitos: %d outros: %d", letras, digitos, outros);
return 0;
}
