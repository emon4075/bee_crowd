// https://www.beecrowd.com.br/judge/en/problems/view/1078
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, i;
    scanf("%d", &N);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, N, (i * N));
    }

    return 0;
}