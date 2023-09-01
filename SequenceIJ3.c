// https://www.beecrowd.com.br/judge/en/problems/view/1097
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i = 1, j;
    for (i = 1; i <= 9; i += 2)
    {
        for (j = i + 6; j >= i + 4; j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
    }

    return 0;
}