// https://www.beecrowd.com.br/judge/en/problems/view/1177
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int T;
    scanf("%d", &T);
    int N[1000];
    for (int i = 0; i < 1000; i++)
    {
        N[i] = i % T;
    }
    for (int i = 0; i < 1000; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}