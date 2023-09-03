// https://www.beecrowd.com.br/judge/en/problems/view/1155
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
    double S = 0.0;
    for (int i = 1; i <= 100; i++)
    {
        S = S + (1.0 / i);
    }
    cout << setprecision(3);
    cout << S << endl;
    return 0;
}