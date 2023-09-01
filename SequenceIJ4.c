// https://www.beecrowd.com.br/judge/en/problems/view/1098
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float i, j;
    for (i = 0.0; i < 2; i += 0.2)
    {
        for (j = i + 1; j < 3.2 + i; j++)
        {
            if (i == 0.0 && j == 1.0 || i == 0.0 && j == 2.0 || i == 0.0 && j == 3.0 || i == 1.0 && j == 2.0 || i == 1.0 && j == 3.0 || i == 1.0 && j == 4.0)
            {
                printf("I=%.0f J=%.0f\n", i, j);
            }
            else
            {
                printf("I=%.1f J=%.1f\n", i, j);
            }
        }
    }
    int k, l;
    for (k = 2; k <= 2; k++)
    {
        for (l = k + 1; l <= 5; l++)
        {
            printf("I=%d J=%d\n", k, l);
        }
    }

    return 0;
}