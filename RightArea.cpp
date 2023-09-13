// https://www.beecrowd.com.br/judge/en/problems/view/1190
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
    char O;
    double M[12][12], sum = 0;
    cin >> O;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }
    if (O == 'S')
    {
        for (int j = 7; j <= 11; j++)
        {
            for (int i = 0; i < 12; i++)
            {
                if (i < j && i > 11 - j)
                {
                    sum += M[i][j];
                }
            }
        }

        cout << fixed;
        cout << setprecision(1) << sum << endl;
    }
    else if (O == 'M')
    {
        for (int j = 7; j <= 11; j++)
        {
            for (int i = 0; i < 12; i++)
            {
                if (i < j && i > 11 - j)
                {
                    sum += M[i][j];
                }
            }
        }
        cout << fixed;
        cout << setprecision(1) << sum / 30 << endl;
    }

    return 0;
}