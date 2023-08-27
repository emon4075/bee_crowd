// https://www.beecrowd.com.br/judge/en/problems/view/1074
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, i;
    scanf("%d", &N);
    int array[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < N; i++)
    {
        if (array[i] % 2 == 0 && array[i] > 0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (array[i] % 2 == 0 && array[i] < 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else if (array[i] % 2 != 0 && array[i] < 0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if (array[i] % 2 != 0 && array[i] > 0)
        {
            printf("ODD POSITIVE\n");
        }
        else
        {
            printf("NULL\n");
        }
    }
    return 0;
}