#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int array[3], temp = 0;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &array[i]);
    }
    // Copying The array
    int copy[3];
    for (int i = 0; i < 3; i++)
    {
        copy[i] = array[i];
    }

    // Sorting
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", array[i]);
    }
    printf("\n");
    // readed values
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", copy[i]);
    }
    return 0;
}