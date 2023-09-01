// https://www.beecrowd.com.br/judge/en/problems/view/1116
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, X, Y;
    double div;
    scanf("%d", &N);
    while (N > 0)
    {
        scanf("%d %d", &X, &Y);
        if (Y == 0 )
        {
            printf("divisao impossivel\n");
        }
        else
        {
            div = (double)X / Y;
            printf("%.1lf\n", div);
        }
        N--;
    }

    return 0;
}