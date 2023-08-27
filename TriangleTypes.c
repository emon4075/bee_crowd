#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    // Decreasing Order Section
    double array[3], A, B, C;
    for (int i = 0; i < 3; i++)
    {
        scanf("%lf", &array[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            if (array[i] < array[i + 1])
            {
                double temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
    // Assigning value
    A = array[0];
    B = array[1];
    C = array[2];
    // Condition Checking
    if ((A) >= (B + C))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if ((A * A) == ((B * B) + (C * C)))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if ((A * A) > ((B * B) + (C * C)))
    {
        printf("TRIANGULO OBSTUSANGULO\n");
    }

    else if ((A * A) < ((B * B) + (C * C)))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (A == B && B == C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }

    if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}