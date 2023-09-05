// https://www.beecrowd.com.br/judge/en/problems/view/1154
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int sum = 0, i = 0, n, tem;
    while (1)
    {
        scanf("%d", &n);
        if (n < 0)
            break;
        else
        {
            tem = n;
            sum += tem;
            i++;
        }
    }
    printf("%.2lf\n", sum / (double)i);

    return 0;
}