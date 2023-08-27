#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float salary, new, add;
    scanf("%f", &salary);
    if (salary >= 0 && salary <= 400.00)
    {
        add = (salary * (15.0 / 100.00));
        new = salary + add;
        printf("Novo salario: %.2f\n", new);
        printf("Reajuste ganho: %.2f\n", add);
        printf("Em percentual: 15 %%\n");
    }
    else if (salary >= 400.01 && salary <= 800.00)
    {
        add = (salary * (12.0 / 100.00));
        new = salary + add;
        printf("Novo salario: %.2f\n", new);
        printf("Reajuste ganho: %.2f\n", add);
        printf("Em percentual: 12 %%\n");
    }
    else if (salary >= 800.01 && salary <= 1200.00)
    {
        add = (salary * (10.0 / 100.00));
        new = salary + add;
        printf("Novo salario: %.2f\n", new);
        printf("Reajuste ganho: %.2f\n", add);
        printf("Em percentual: 10 %%\n");
    }
    else if (salary >= 1200.01 && salary <= 2000.00)
    {
        add = (salary * (7.0 / 100.00));
        new = salary + add;
        printf("Novo salario: %.2f\n", new);
        printf("Reajuste ganho: %.2f\n", add);
        printf("Em percentual: 7 %%\n");
    }
    else if (salary > 2000.00)
    {
        add = (salary * (4.0 / 100.00));
        new = salary + add;
        printf("Novo salario: %.2f\n", new);
        printf("Reajuste ganho: %.2f\n", add);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}