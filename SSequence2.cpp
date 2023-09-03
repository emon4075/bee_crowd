// https://www.beecrowd.com.br/judge/en/problems/view/1156
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double i, j, S = 0;
    int k = 1;
    for (i = 1.0, k = 1; i <= 39.0; i += 2.0)
    {
        S += i / k;
        k = k * 2;
    }
    cout << fixed;
    cout << setprecision(2);
    cout << S << endl;
    return 0;
}