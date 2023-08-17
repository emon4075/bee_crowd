#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    char name[20];
    float salary,sales,total;
    gets(name);
    scanf("%f %f",&salary,&sales);
    total=salary+(sales*0.15);
    printf("TOTAL = R$ %.2f\n",total);
    return 0;
}