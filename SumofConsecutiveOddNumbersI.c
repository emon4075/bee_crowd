#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int Y, X, sum = 0, i;
    scanf("%d %d", &X, &Y);
    for (i = Y + 1; i < X; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}