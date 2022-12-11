/*
Arquivo: contaPalavras
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 11/12/2022
*/

#include <stdio.h>

int main(void)
{
    char texto[1024];
    printf("Digite uma frase com ate 1023 caracteres sem acentos ou cedilha:\n");
    fgets(texto, 1024, stdin);
    int i = 0;
    int palavras = 0;
    while(texto[i] != '\0')
    {
        if (texto[i] == ' ' || texto[i] >= 0 && texto[i] <= 47 ||
        texto[i] >= 58 && texto[i] <= 64 || texto[i] >= 91 && texto[i] <= 96 || texto[i] >= 123)
        {
            i++;
        }
        else
        { 
            palavras++;
            while(texto[i] != ' ')
            {
                i++;
            }
        }
    }
    printf("%d\n", palavras);
return 0;
}
