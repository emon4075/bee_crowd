#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    if (B + C > A && A + C > B && A + B > C)
    {
        printf("Perimetro = %.1lf\n", (A + B + C));
    }
    else
    {
        printf("Area = %.1lf\n", (((A + B) / 2) * C));
    }
    return 0;
}