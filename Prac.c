#include <stdio.h>
int main()
{
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");
    int temmp;
    // sorting
    for (int i = 0; i < 10 - 1; i++)// Number of cases
    {
        for (int i = 0; i < 10; i++) // this is for array elements
        {
            if (array[i] > array[i + 1])
            {
                temmp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temmp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}