// This code will show run time error as i started the array from 1 not from 0
// Check the c++ version for correct answer

#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, M, i, j;
    scanf("%d %d", &N, &M);
    int array[N][M];
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if (array[i][j] == 42 && array[i][j - 1] == 7 && array[i][j + 1] == 7 && array[i - 1][j - 1] == 7 && array[i - 1][j + 1] == 7 && array[i - 1][j] == 7 && array[i + 1][j + 1] == 7 && array[i + 1][j] == 7 && array[i + 1][j + 1] == 7)
            {
                printf("%d %d\n", i, j);
                return 1;
            }
        }
    }
    printf("0 0\n");
    return 0;
}