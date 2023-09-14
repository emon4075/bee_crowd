// https://www.beecrowd.com.br/judge/en/problems/view/1985
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
    int p, q, code;
    double sum = 0;
    cin >> p;
    while (p--)
    {
        cin >> code >> q;
        if (code == 1001)
        {
            sum += (1.50 * q);
        }
        else if (code == 1002)
        {
            sum += (2.50 * q);
        }
        else if (code == 1003)
        {
            sum += (3.50 * q);
        }

        else if (code == 1004)
        {
            sum += (4.50 * q);
        }

        else if (code == 1005)
        {
            sum += (5.50 * q);
        }
    }
    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}