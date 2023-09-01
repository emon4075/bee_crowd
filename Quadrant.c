// https://www.beecrowd.com.br/judge/en/problems/view/1115
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int X, Y;
    while (1)
    {
        scanf("%d %d", &X, &Y);
        if (X == 0 || Y == 0)
        {
            break;
        }

        else if (X > 0 && Y > 0)
        {
            printf("primeiro\n");
        }
        else if (X < 0 && Y > 0)
        {
            printf("segundo\n");
        }
        else if (X < 0 && Y < 0)
        {
            printf("terceiro\n");
        }
        else if (X > 0 && Y < 0)
        {
            printf("quarto\n");
        }
    }

    return 0;
}