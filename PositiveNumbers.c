#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float array[6];
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &array[i]);
        if (array[i] > 0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n",count);
    return 0;
}