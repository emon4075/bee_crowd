#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double n;
    scanf("%lf", &n);
    if (n > 100 || n < 0)
    {
        printf("Fora de intervalo\n");
    }
    else if (n >= 0 && n <= 25)
    {
        printf("Intervalo [0,25]\n");
    }
    else if (n > 25 && n <= 50)
    {
        printf("Intervalo (25,50]\n");
    }
    else if (n > 50 && n <= 75)
    {
        printf("Intervalo (50,75]\n");
    }
    else if (n > 75 && n <= 100)
    {
        printf("Intervalo (75,100]\n");
    }
    return 0;
}