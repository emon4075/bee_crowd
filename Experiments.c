// https://www.beecrowd.com.br/judge/en/problems/view/1094
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int i = 0, N, C = 0, R = 0, S = 0, Qnty, Total;
    char ch;
    scanf("%d", &N);
    while (i != N)
    {
        scanf("%d %c", &Qnty, &ch);
        if (ch == 'C')
        {
            C += Qnty;
        }
        else if (ch == 'R')
        {
            R += Qnty;
        }
        else if (ch == 'S')
        {
            S += Qnty;
        }
        i++;
    }
    Total = C + R + S;
    printf("Total: %d cobaias\n", Total);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    printf("Percentual de coelhos: %.2lf \%%\n", ((double)C / Total) * 100.00);
    printf("Percentual de ratos: %.2lf \%%\n", ((double)R / Total) * 100.00);
    printf("Percentual de sapos: %.2lf \%%\n", ((double)S / Total) * 100.00);

    return 0;
}