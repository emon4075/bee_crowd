// https://www.beecrowd.com.br/judge/en/problems/view/1182
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int C;
    scanf("%d", &C);
    getchar();
    char ch;
    scanf("%c", &ch);
    float sum = 0;
    float M[12][12];
    if (ch == 'S')
    {
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                scanf("%f", &M[i][j]);
            }
        }
        for (int i = 0; i < 12; i++)
        {
            for (int j = C; j <= C; j++)
            {
                sum += M[i][j];
            }
        }
        printf("%.1f\n", sum);
    }
    else if (ch == 'M')
    {

        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                scanf("%f", &M[i][j]);
            }
        }
        for (int i = 0; i < 12; i++)
        {
            for (int j = C; j <= C; j++)
            {
                sum += M[i][j];
            }
        }
        printf("%.1f\n", sum / 12.0);
    }

    return 0;
}