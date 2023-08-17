#include <stdio.h>

int main()
{

    /*
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int age, ano, mes;
    scanf("%d",&age);
    ano = age / 365;
    printf("%d ano(s)\n", ano);
    age = age % 365;
    mes = age / 30;
    printf("%d mes(es)\n", mes);
    age = age % 30;
    printf("%d dia(s)\n", age);
    return 0;
}