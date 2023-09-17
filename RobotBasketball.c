// https://www.beecrowd.com.br/judge/en/problems/view/2780
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int D;
    scanf("%d", &D);
    if (D <= 800)
    {
        printf("1\n");
    }
    else if (D > 800 && D <= 1400)
    {
        printf("2\n");
    }
    else
    {
        printf("3\n");
    }

    return 0;
}