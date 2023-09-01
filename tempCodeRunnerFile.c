// https://www.beecrowd.com.br/judge/en/problems/view/1133
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int X, Y, i, r;
    scanf("%d %d", &X, &Y);
    if (X < Y)
    {
        for (i = X; i < Y; i++)
        {
            r = i % 5;
            if (r == 2 || r == 3)
            {
                printf("%d\n", i);
            }
        }
    }
    else
    {
        for (i = Y; i < X; i++)
        {
            r = i % 5;
            if (r == 2 || r == 3)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}