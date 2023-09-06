// https://www.beecrowd.com.br/judge/en/problems/view/1172
#include <iostream>

using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int X[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> X[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (X[i] <= 0)
        {
            X[i] = 1;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "X[" << i << "] = " << X[i] << endl;
    }
    return 0;
}