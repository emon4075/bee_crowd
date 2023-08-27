#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int start, end;
    scanf("%d %d", &start, &end);
    if (start >= end)
    {
        printf("O JOGO DUROU %d HORA(S)\n", ((24 + end) - start));
    }
    else if (start < end)
    {
        printf("O JOGO DUROU %d HORA(S)\n", (end - start));
    }

    return 0;
}