// https://www.beecrowd.com.br/judge/en/problems/view/1080
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int array[100], i = 0, pos;
    for (i = 0; i < 100; i++)
    {
        scanf("%d", &array[i]);
    }
    int max = array[0];
    for (i = 0; i < 100; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    for (i = 0; i < 100; i++)
    {
        if (max == array[i])
        {
            pos = i + 1;
        }
    }

    printf("%d\n", max);
    printf("%d\n", pos);
    return 0;
}