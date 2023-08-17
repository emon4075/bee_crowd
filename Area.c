#include <stdio.h>
#define pi 3.14159
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    printf("TRIANGULO: %.3lf\n",(0.5*A*C));
    printf("CIRCULO: %.3lf\n",(pi*C*C));
    printf("TRAPEZIO: %.3lf\n",((A+B)/2)*C);
    printf("QUADRADO: %.3lf\n",(B*B));
    printf("RETANGULO: %.3lf\n",(A*B));
    return 0;
}