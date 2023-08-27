// https://www.beecrowd.com.br/judge/en/problems/view/1075
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, rest;
    scanf("%d", &N);
    for (int i = 1; i <= 10000; i++)
    {
        rest = i % N;
        if (rest == 2)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}