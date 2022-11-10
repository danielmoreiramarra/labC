/*
Arquivo: fatorial
Autor: Daniel Moreira Marra
Matricula: 12121EEL009
Criado em: 10/09/2022
*/

#include <stdio.h>
#include <stdint.h>

int main(){
    int n;
    printf("Digite um número inteiro positivo menor que 21 ");
    scanf("%d", &n);
    unsigned long long int fatorial;
    int i = 1;
    if (n == 0) {
        fatorial = 0;
        printf("%lld\n", fatorial);
    } else {
        fatorial = 1;
        while (i <= n) {
            fatorial = fatorial*i;
            i = i + 1;
        }
        printf("%lld\n", fatorial);
    }
return 0;
}
