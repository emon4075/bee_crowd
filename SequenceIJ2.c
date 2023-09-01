// https://www.beecrowd.com.br/judge/en/problems/view/1096
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i = 1, j = 7;
    for (i = 1; i <= 9; i += 2)
    {
        for (j = 7; j >= 5; j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
    }

    return 0;
}