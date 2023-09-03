// https://www.beecrowd.com.br/judge/en/problems/view/1117
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double a, b, temp1, temp2, media;
    while (1)
    {
        scanf("%lf", &a);
        if (a >= 0 && a <= 10)
        {
            temp1 = a;
            break;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    while (1)
    {
        scanf("%lf", &b);
        if (b >= 0 && b <= 10)
        {
            temp2 = b;
            break;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    media = (temp1 + temp2) / 2.0;
    printf("media = %.2lf\n", media);
    return 0;
}



// Alternative Way
/* 

#include <stdio.h>

int main() {
    double a, b;
    int count = 0;
    double sum = 0.0;

    while (count < 2) {
        scanf("%lf", &a);
        if (a >= 0 && a <= 10) {
            sum += a;
            count++;
        } else {
            printf("nota invalida\n");
        }
    }

    double media = sum / 2.0;
    printf("media = %.2lf", media);

    return 0;
}


*/