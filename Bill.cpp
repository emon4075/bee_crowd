// https://www.beecrowd.com.br/judge/en/problems/view/1866
#include <iostream>

using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int C, N;
    cin >> C;
    while (C--)
    {
        cin >> N;
        if (N % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}