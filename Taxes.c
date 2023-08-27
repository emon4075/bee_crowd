#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float salary, x1, x2, x3, total;

    scanf("%f", &salary);
    if (salary >= 0.00 && salary <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (salary > 2000.00)
    {
        x1 = salary - 2000.00;
        if (x1 >= 1000.00)
        {
            x2 = x1 - 1000.00;
            x1 = 1000.00;
        }
        if (x2 >= 1500.00)
        {
            x3 = x2 - 1500.00;
            x2 = 1500.00;
        }
        total = (x1 * 0.08) + (x2 * 0.18) + (x3 * 0.28);
        printf("R$ %.2f\n", total);
    }
    return 0;
}