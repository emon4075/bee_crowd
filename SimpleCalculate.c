#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int code1,code2,unit1,unit2;
    double unit_price1,unit_price2,total;
    scanf("%d %d %lf",&code1,&unit1,&unit_price1);
    scanf("%d %d %lf",&code2,&unit2,&unit_price2);
    total=(unit1*unit_price1)+(unit2*unit_price2);
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
    return 0;
}