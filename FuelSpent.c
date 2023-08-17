#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int v,t;
    double fuel;
    scanf("%d %d",&t,&v);
    fuel=(double)(v*t)/12;
    printf("%.3lf\n",fuel);
    return 0;
}