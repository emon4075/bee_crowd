// https://www.beecrowd.com.br/judge/en/problems/view/1101
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int M, N, i;
    do
    {
        scanf("%d %d", &M, &N);
        if (M <= 0 || N <= 0)
            break;
        else if (M > N)
        {
            int sum = 0;
            for (i = N; i <= M; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("Sum=%d\n", sum);
        }
        else if (M < N)
        {
            int sum = 0;
            for (i = M; i <= N; i++)
            {
                printf("%d ", i);
                sum += i;
            }
            printf("Sum=%d\n", sum);
        }
        else if(M==N)
        {
            int sum=0;
            sum+=M;
            printf("%d Sum=%d\n",M,sum);
        }

    } while (1);
    return 0;
}