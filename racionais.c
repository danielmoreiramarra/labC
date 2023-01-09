/*
Arquivo: racionais;
Autor: Daniel Moreira Marra;
Matricula: 12121EEL009;
Criado em: 08/01/2022.
*/

#include <stdio.h>

int mdc (int a, int b);
int sinal (int x, int y);
int abs (int x);

int main (int argc, char **argv)
{
    int p_1, p_2, q_1, q_2;
    printf("Digite os numeradores e os denominadores de dois racionais: ");
    scanf("%d %d %d %d", &p_1, &q_1, &p_2, &q_2);
    p_1 = sinal(p_1, q_1);
    p_2 = sinal(p_2, q_2);
    q_1 = abs(q_1);
    q_2 = abs(q_2);
    int c = mdc(abs(p_1), abs(q_1));
    int d = mdc(abs(p_2), abs(q_2));
    int e = mdc(abs(p_1 * q_2 + p_2 * q_1), abs(q_2 * q_1));
    int f = mdc(abs(p_1 * q_2 - p_2 * q_1), abs(q_2 * q_1));
    int g = mdc(abs(p_1 * p_2), abs(q_1 * q_2));
    int h = mdc(abs(p_1 * q_2), abs(p_2 * q_1));
    printf("%d/%d %d/%d %d/%d %d/%d %d/%d %d/%d\n", p_1/c, q_1/c, p_2/d, q_2/d,
    (p_1 * q_2 + p_2 * q_1)/e, (q_1 * q_2)/e, (p_1 * q_2 - p_2 * q_1)/f, q_2 * q_1/f,
    (p_1 * p_2)/g, (q_1 * q_2)/g, (p_1 * q_2)/h, (p_2 * q_1)/h);
return 0;
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a%b);
    }
}

int sinal (int x, int y)
{
    if (x * y < 0)
    {
        return -abs(x);
    }
    else
    {
        return abs(x);
    }
}

int abs (int x)
{
    if (x < 0)
    {
        return -x;
    }
    else
    {
        return x;
    }
}
