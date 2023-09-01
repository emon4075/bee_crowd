// https://www.beecrowd.com.br/judge/en/problems/view/1117
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int count1 = 0, count2 = 0;
    while (1)
    {
        double x, y, media, temp1, temp2;
        scanf("%lf %lf", &x, &y);
        if ((x > 10.0 && x < 0.0) || (y > 10.0 && y < 0.0))
        {
            printf("nota invalida\n");
            continue;
        }
        else
        {
            temp1=x;
            temp2=y;
            printf("Tem1=%lf\n", temp1);
            printf("Tem2=%lf\n", temp2);
        }
        

    }

    return 0;
}