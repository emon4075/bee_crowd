// https://www.beecrowd.com.br/judge/en/problems/view/1943
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int K;
    scanf("%d", &K);
    if (K == 1)
    {
        printf("Top 1\n");
    }
    else if (K == 2 || K == 3)
    {
        printf("Top 3\n");
    }
    else if (K == 4 || K == 5)
    {
        printf("Top 5\n");
    }
    else if (K > 5 && K <= 10)
    {
        printf("Top 10\n");
    }
    else if (K > 10 && K <= 25)
    {
        printf("Top 25\n");
    }
    else if (K > 25 && K <= 50)
    {
        printf("Top 50\n");
    }
    else if (K > 50 && K <= 100)
    {
        printf("Top 100\n");
    }
    return 0;
}