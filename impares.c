#include <stdio.h>

int main(){
    int m, M, i;
    printf("Digite dois numeros ");
    scanf("%d %d", &m, &M);
    for (int i = m; i <= M; i = i + 2){
        if (i%2 != 0){
            printf("%d, ",i);
        }
    }
return 0;
}
