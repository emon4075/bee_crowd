#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float array[6], count = 0, sum = 0, avg;
    for (int i = 0; i < 6; i++)
    {
        scanf("%f", &array[i]);
        if (array[i] > 0)
        {
            sum += array[i];
            count++;
        }
    }
    avg = sum / count;
    printf("%.0f valores positivos\n", count);
    printf("%.1f\n", avg);
    return 0;
}