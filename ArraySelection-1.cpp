// https://www.beecrowd.com.br/judge/en/problems/view/1174
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
    float A[100];
    for (int i = 0; i < 100; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < 100; i++)
    {
        if (A[i] <= 10)
        {
            cout << fixed;
            cout << setprecision(1);
            cout << "A[" << i << "] = " << A[i] << endl;
        }
    }

    return 0;
}