// https://www.beecrowd.com.br/judge/en/problems/view/1178
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
    double N[100], X;
    cin >> X;
    for (int i = 0; i < 100; i++)
    {
        N[i] = X;
        X = X / 2;
    }
    for (int i = 0; i < 100; i++)
    {
        cout << fixed;
        cout << setprecision(4);
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}