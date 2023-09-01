// https://www.beecrowd.com.br/judge/en/problems/view/1146
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int X, i;
    do
    {
        scanf("%d", &X);
        for (i = 1; i <= X; i++)
        {
            if (i != X)
            {
                printf("%d ", i);
            }
            else
            {
                printf("%d\n", i);
            }
        }
    } while (X != 0);

    return 0;
}
