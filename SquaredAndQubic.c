// https://www.beecrowd.com.br/judge/en/problems/view/1143
#include <stdio.h>
#include <math.h>
int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, i, j;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            float res = pow(i, j);

            if (j != 3)
            {
                printf("%0.f ", res);
            }
            else
            {
                printf("%0.f", res);
            }
        }
        printf("\n");
    }

    return 0;
}

// Another Method
/*
#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("%d %d %d\n", i, i * i, i * i * i);
    }

    return 0;
}


*/