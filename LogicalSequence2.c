// https://www.beecrowd.com.br/judge/en/problems/view/1145
#include <stdio.h>
#include <math.h>
int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int X, Y, i, j, k = 1;
    scanf("%d %d", &X, &Y);
    float range = ceil((float)Y / X);
    for (i = 1; i <= range; i++)
    {
        for (j = 1; j <= X; j++)
        {
            if (j != X && k <= Y)
            {
                printf("%d ", k);
            }
            else if (k <= Y)
            {
                printf("%d", k);
            }
            k++;
        }

        printf("\n");
    }

    return 0;
}