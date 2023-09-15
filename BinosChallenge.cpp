// https://www.beecrowd.com.br/judge/en/problems/view/2060
#include <iostream>

using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, L, two = 0, three = 0, four = 0, five = 0;
    cin >> N;
    while (N--)
    {
        cin >> L;
        if (L % 2 == 0)
        {
            two++;
        }
        if (L % 3 == 0)
        {
            three++;
        }
        if (L % 4 == 0)
        {
            four++;
        }
        if (L % 5 == 0)
        {
            five++;
        }
    }
    cout << two << " Multiplo(s) de 2" << endl;
    cout << three << " Multiplo(s) de 3" << endl;
    cout << four << " Multiplo(s) de 4" << endl;
    cout << five << " Multiplo(s) de 5" << endl;

    return 0;
}