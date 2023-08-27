#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int array[5], even = 0, odd = 0, pos = 0, neg = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] > 0)
        {
            pos++;
        }
        if (array[i] < 0)
        {
            neg++;
        }
        if (array[i] % 2 == 0)
        {
            even++;
        }
        if (array[i] % 2 != 0)
        {
            odd++;
        }
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}