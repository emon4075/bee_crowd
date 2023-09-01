// https://www.beecrowd.com.br/judge/en/problems/view/1142
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i, j, k = 1, N;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= 4; j++)
        {

            if (k % 4 != 0)
            {
                printf("%d ", k);
            }
            else
            {
                printf("PUM");
            }
            k++;
        }
        printf("\n");
    }

    return 0;
}