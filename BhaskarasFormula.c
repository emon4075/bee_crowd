#include <stdio.h>
#include <math.h>
int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double A, B, C, R1, R2, D;
    scanf("%lf %lf %lf", &A, &B, &C);
    D = (B * B - (4 * A * C));
    if (A == 0 || D < 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        R1 = (-B + sqrt(D)) / (2 * A);
        R2 = (-B - sqrt(D)) / (2 * A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}