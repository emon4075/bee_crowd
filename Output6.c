// https://www.beecrowd.com.br/judge/en/problems/view/2752
#include <stdio.h>

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    char ch[50] = "AMO FAZER EXERCICIO NO URI";
    printf("<%s>\n",ch);
    printf("<%30s>\n",ch);
    printf("<%0.20s>\n",ch);
    printf("<%-20s>\n",ch);
    printf("<%-30s>\n",ch);
    printf("<%.30s>\n",ch);
    printf("<%30.20s>\n",ch);
    printf("<%-30.20s>\n",ch);
    return 0;
}