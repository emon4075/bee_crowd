#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int X, Y;
    scanf("%d %d", &X, &Y);
    if (X == 1)
    {
        printf("Total: R$ %.2lf\n", (4.00 * Y));
    }
    else if (X == 2)
    {
        printf("Total: R$ %.2lf\n", (4.50 * Y));
    }
    else if (X == 3)
    {
        printf("Total: R$ %.2lf\n", (5.00 * Y));
    }
    else if (X == 4)
    {
        printf("Total: R$ %.2lf\n", (2.00 * Y));
    }
    else if (X == 5)
    {
        printf("Total: R$ %.2lf\n", (1.50 * Y));
    }
    return 0;
}