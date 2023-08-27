#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int X, i, count = 0;
    scanf("%d", &X);
    for (i = X; count != 6; i++)
    {
        if (i % 2 != 0)
        {
            count++;
            printf("%d\n", i);
        }
    }
    return 0;
}