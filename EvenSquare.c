#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, sq;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            sq = i * i;
            printf("%d^2 = %d\n", i, sq);
        }
    }

    return 0;
}