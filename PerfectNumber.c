// https://www.beecrowd.com.br/judge/en/problems/view/1164
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, X, i, j = 1, temp;
    scanf("%d", &N);
    while (j <= N)
    {
        scanf("%d", &X);
        temp = X;
        int sum = 0;
        for (i = 1; i < temp; i++)
        {
            if (temp % i == 0)
            {
                sum += i;
            }
        }
        if (sum == X)
        {
            printf("%d eh perfeito\n", X);
        }
        else
        {
            printf("%d nao eh perfeito\n", X);
        }

        j++;
    }
    return 0;
}