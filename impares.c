/*
Arquivo: impares
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 24/09/2022
*/

#include <stdio.h>

int main(void){
    int m, M, i;
    printf("Digite dois numeros ");
    scanf("%d %d", &m, &M);
    for (int i = m; i <= M; i = i + 2){
        if (i%2 != 0){
            printf("%d, ",i);
        }
    }
    printf("\n");
return 0;
}
