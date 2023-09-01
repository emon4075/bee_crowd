// https://www.beecrowd.com.br/judge/en/problems/view/1099
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, X, Y, i = 0;
    scanf("%d", &N);
    while (N > 0)
    {
        int sum = 0;
        scanf("%d %d", &X, &Y);
        if (X < Y)
        {
            for (i = X + 1; i < Y; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
            printf("%d\n", sum);
        }
        else
        {
            for (i = Y + 1; i < X; i++)
            {
                if (i % 2 != 0)
                {
                    sum += i;
                }
            }
            printf("%d\n", sum);
        }
        N--;
    }

    return 0;
}