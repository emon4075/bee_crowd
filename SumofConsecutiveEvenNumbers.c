// https://www.beecrowd.com.br/judge/en/problems/view/1159
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int X, i, S;
    do
    {
        scanf("%d", &X);
        if (X == 0)
        {
            break;
        }
        else if (X % 2 == 0)
        {
            int sum = 0;
            S = 2.5 * (2 * X + 8);
            printf("%d\n", S);
        }
        else
        {
            int sum = 0;
            S = 2.5 * (2 * (X + 1) + 8);
            printf("%d\n", S);
        }

    } while (1);
    return 0;
}