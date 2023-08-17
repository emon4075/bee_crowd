#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N;
    scanf("%d", &N);
    int h = N / 3600;
    N = N % 3600;
    int m = N / 60;
    int s = N % 60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}