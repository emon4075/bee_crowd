// https://www.beecrowd.com.br/judge/en/problems/view/1132
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int X, Y, i, sum = 0;
    scanf("%d %d", &X, &Y);
    if (Y > X)
    {
        for (i = X; i <= Y; i++)
        {
            if (i % 13 != 0)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
    else if (Y < X)
    {
        for (i = Y; i <= X; i++)
        {
            if (i % 13 != 0)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
    else if (X == Y)
    {
        for (i = Y; i <= X; i++)
        {
            if (i % 13 != 0)
            {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}