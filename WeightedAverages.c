// https://www.beecrowd.com.br/judge/en/problems/view/1079
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, i = 0;
    scanf("%d", &N);
    double array[N];
    double d1, d2, d3, avg;
    while (i < N)
    {
        scanf("%lf %lf %lf", &d1, &d2, &d3);
        avg = ((d1 * 2.00) + (d2 * 3.00) + (d3 * 5.00)) / 10.0;
        array[i] = avg;
        i++;
    }
    for (i = 0; i < N; i++)
    {
        printf("%.1lf\n", array[i]);
    }

    return 0;
}