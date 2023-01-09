/*
Arquivo: datas;
Autor: Daniel Moreira Marra;
Matricula: 12121EEL009;
Criado em: 08/01/2023.
*/

#include <stdio.h>

typedef struct data
{
    int dia;
    int mes;
    int ano;
} data;

int main (int argc, char **argv)
{
    data data;
    printf("Digite a data com barras e sem zeros a esquerda: ");
    scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);
    char strmes[13][4] = {"","JAN","FEV","MAR","ABR","MAI","JUN","JUL","AGO","SET","OUT","NOV","DEZ"};
    if (data.dia < 10 && data.mes < 10)
    {
        printf("0%d.0%d.%d 0%d-0%d-%d 0%d/0%d/%d 0%d%s%d\n", data.dia, data.mes, data.ano,
        data.dia, data.mes, data.ano, data.dia, data.mes, data.ano%100, data.dia, strmes[data.mes], data.ano);
    }
    else if (data.dia < 10 && data.mes >= 10)
    {
        printf("0%d.%d.%d 0%d-%d-%d 0%d/%d/%d 0%d%s%d\n", data.dia, data.mes, data.ano,
        data.dia, data.mes, data.ano, data.dia, data.mes, data.ano%100, data.dia, strmes[data.mes], data.ano);
    }
    else if (data.dia >= 10 && data.mes < 10)
    {
        printf("%d.0%d.%d %d-0%d-%d %d/0%d/%d %d%s%d\n", data.dia, data.mes, data.ano,
        data.dia, data.mes, data.ano, data.dia, data.mes, data.ano%100, data.dia, strmes[data.mes], data.ano);
    }
    
return 0;    
}
