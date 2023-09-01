// https://www.beecrowd.com.br/judge/en/problems/view/1113
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int X, Y;
    while (X != Y)
    {
        scanf("%d %d", &X, &Y);
        if (X > Y)
        {
            printf("Decrescente\n");
        }
        else if (X < Y)
        {
            printf("Crescente\n");
        }
    }

    return 0;
}