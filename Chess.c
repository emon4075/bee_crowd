// https://www.beecrowd.com.br/judge/en/problems/view/2787
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int L, C;
    scanf("%d %d", &L, &C);
    if (L % 2 != 0 && C % 2 == 0)
    {
        printf("0\n");
    }
    else if (L % 2 != 0 && C % 2 != 0)
    {
        printf("1\n");
    }
    else if (L % 2 == 0 && C % 2 != 0)
    {
        printf("0\n");
    }
    else if (L % 2 == 0 && C % 2 == 0)
    {
        printf("1\n");
    }
    return 0;
}