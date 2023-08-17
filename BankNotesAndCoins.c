#include <stdio.h>
#include <math.h>
int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double N;
    scanf("%lf", &N);
    printf("NOTAS:\n");
    printf("%.0lf nota(s) de R$ 100.00\n", trunc(N / 100));
    N = fmod(N, 100); // fmod() is used to do frictional modulas
    printf("%.0lf nota(s) de R$ 50.00\n", trunc(N / 50));
    N = fmod(N, 50);
    printf("%.0lf nota(s) de R$ 20.00\n", trunc(N / 20));
    N = fmod(N, 20);
    printf("%.0lf nota(s) de R$ 10.00\n", trunc(N / 10));
    N = fmod(N, 10);
    printf("%.0lf nota(s) de R$ 5.00\n", trunc(N / 5));
    N = fmod(N, 5);
    printf("%.0lf nota(s) de R$ 2.00\n", trunc(N / 2));
    N = fmod(N, 2);
    printf("MOEDAS:\n");
    printf("%.0lf moeda(s) de R$ 1.00\n", trunc(N / 1));
    N = fmod(N, 1);
    printf("%.0lf moeda(s) de R$ 0.50\n", trunc(N / 0.50));
    N = fmod(N, 0.50);
    printf("%.0lf moeda(s) de R$ 0.25\n", trunc(N / 0.25));
    N = fmod(N, 0.25);
    printf("%.0lf moeda(s) de R$ 0.10\n", trunc(N / 0.10));
    N = fmod(N, 0.10);
    printf("%.0lf moeda(s) de R$ 0.05\n", trunc(N / 0.05));
    N = fmod(N, 0.05);
    printf("%.0lf moeda(s) de R$ 0.01\n", round(N / 0.01));// with out using round it will print 0 while round value is accepted by the online judge
    return 0;
}