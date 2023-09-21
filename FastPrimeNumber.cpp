// https://www.beecrowd.com.br/judge/en/problems/view/1221
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N;
    cin >> N;
    while (N--)
    {
        long long X;
        cin >> X;
        int count = 0;
        for (int i = 2; i <= sqrt(X); i++)
        {
            if (X % i == 0)
            {
                count++;
                break;
            }
        }
        if (count > 0)
        {
            cout << "Not Prime" << endl;
        }
        else
        {
            cout << "Prime" << endl;
        }
    }
    return 0;
}