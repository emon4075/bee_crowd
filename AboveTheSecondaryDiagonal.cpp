// https://www.beecrowd.com.br/judge/en/problems/view/1185
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
    char ch;
    double M[12][12], sum = 0;
    cin >> ch;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }
    if (ch == 'S')
    {
        for (int i = 10; i >= 0; i--)
        {
            for (int j = 0; j < 11 - i; j++)
            {
                sum += M[i][j];
            }
        }
        cout << fixed;
        cout << setprecision(1) << sum << endl;
    }
    else if (ch == 'M')
    {
        for (int i = 10; i >= 0; i--)
        {
            for (int j = 0; j < 11 - i; j++)
            {
                sum += M[i][j];
            }
        }
        cout << fixed;
        cout << setprecision(1) << sum / 66.0 << endl;
    }

    return 0;
}