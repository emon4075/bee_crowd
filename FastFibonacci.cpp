// https://www.beecrowd.com.br/judge/en/problems/view/2164
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double n, x1, x2, fib;
    cin >> n;
    x1 = pow(((1 + sqrt(5)) / 2), n);
    x2 = pow((1.0 - sqrt(5)) / 2.0, n);
    fib = (x1 - x2) / sqrt(5);
    cout << fixed << setprecision(1) << fib << endl;
    return 0;
}