// https://www.beecrowd.com.br/judge/en/problems/view/1150
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int X, Z, temp, count = 0, sum = 0;
    scanf("%d", &X);
    while (1)
    {
        scanf("%d", &Z);
        if (Z > X)
        {
            temp = Z;
            break;
        }
    }
    for (int i = X; sum <= temp; i++)
    {
        sum += i;
        count++;
        if (sum > Z)
            break;
    }
    printf("%d\n", count);
    return 0;
}