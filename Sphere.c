#include <stdio.h>
#define pi 3.14159
int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double R;
    scanf("%lf", &R);
    double volume = (4 / 3.0) * pi * (R * R * R);
    printf("VOLUME = %.3lf\n", volume);

    return 0;
}