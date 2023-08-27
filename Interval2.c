#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, in = 0, out = 0;
    scanf("%d", &N);
    int array[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] >= 10 && array[i] <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}