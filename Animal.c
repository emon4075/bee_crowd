#include <stdio.h>
#include <string.h>
int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    char string1[15], string2[10], string3[15];
    gets(string1);
    gets(string2);
    gets(string3);
    // Section-1
    int d1 = strcmp(string1, "vertebrado");
    int d2 = strcmp(string2, "ave");
    int d3 = strcmp(string3, "onivoro");
    if (d1 == 0 && d2 == 0 && d3 != 0)
    {
        printf("aguia\n");
    }
    else if (d1 == 0 && d2 == 0 && d3 == 0)
    {
        printf("pomba\n");
    }
    else if (d1 == 0 && d2 != 0 && d3 == 0)
    {
        printf("homem\n");
    }
    else if (d1 == 0 && d2 != 0 && d3 != 0)
    {
        printf("vaca\n");
    }
    // Section-2
    int e1 = strcmp(string1, "invertebrado");
    int e2 = strcmp(string2, "inseto");
    int e3 = strcmp(string3, "hematofago");
    if (e1 == 0 && e2 == 0 && e3 == 0)
    {
        printf("pulga\n");
    }
    else if (e1 == 0 && e2 == 0 && e3 != 0)
    {
        printf("lagarta\n");
    }
    else if (e1 == 0 && e2 != 0 && e3 == 0)
    {
        printf("sanguessuga\n");
    }
    else if (e1 == 0 && e2 != 0 && e3 != 0)
    {
        printf("minhoca\n");
    }
    return 0;
}