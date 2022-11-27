/*
Arquivo: somaPrimos
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 27/09/2022
*/

#include <stdio.h>

int main(void){
    int a, b, s, i, j, t;
    printf("Digite dois números inteiros a e b, onde a < b ");
    scanf("%d %d", &a, &b);
    s = 0;
    for(i = a; i <= b; i++){
        t = 0;
        for(j = 1; j <= i; j++){
            if(i%j == 0){
                t = t + j;
            }
        }
        if(t == i + 1){
            s = s + i;
        }
    }
printf("%d\n", s);
return 0;
}
