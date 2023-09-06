// https://www.beecrowd.com.br/judge/en/problems/view/1158
#include <iostream>

using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, X, Y;
    cin >> N;
    while (N--)
    {
        cin >> X >> Y;
        if (X % 2 != 0)
        {
            int sum = 0, count = 0;
            for (int i = X; count < Y; i = i + 2)
            {
                sum += i;
                count++;
            }
            cout << sum << endl;
        }
        else
        {
            int sum = 0, count = 0;
            for (int i = X + 1; count < Y; i = i + 2)
            {
                sum += i;
                count++;
            }
            cout << sum << endl;
        }
    }

    return 0;
}