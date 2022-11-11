/*
Arquivo: fibonacci
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 10/09/2022
*/

#include <stdio.h>

int main(){
    int i, j, t, k, l;
    /*O print abaixo serve apenas para pedir 
    o número do último termo ao usuário, conforme
    as instruções da questão*/
    printf("Digite o número do último termo ");
    scanf("%d", &k);
    /*l é a posição do termo na lista sendo 
    i e j os dois primeiros no começo e t é a
    variável acumuladora*/
    for (i = 0, j = 1, l = 1; l <= k; l++) {
        printf("%d, ", i);
        t = i + j;
        i = j;
        j = t;
    }
    //O printf abaixo está fora do laço e finaliza a sequência
    printf("...\n");
return 0;
}
