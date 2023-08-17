#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int number, hour;
    float amount, salary;
    scanf("%d %d", &number, &hour);
    scanf("%f", &amount);
    salary = (hour * amount);
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);
    return 0;
}