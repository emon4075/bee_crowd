// https://www.beecrowd.com.br/judge/en/problems/view/1114
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int password = 2002, n;
    while (n != password)
    {
        scanf("%d", &n);
        if (n == password)
        {
            printf("Acesso Permitido\n");
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}