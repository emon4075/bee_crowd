// https://www.beecrowd.com.br/judge/en/problems/view/1165
#include <iostream>

using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, X, i = 0;
    cin >> N;

    while (i < N)
    {
        int count = 0;
        cin >> X;
        for (int i = 1; i <= X; i++)
        {
            if (X % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << X << " eh primo" << endl;
        }
        else
        {
            cout << X << " nao eh primo" << endl;
        }
        i++;
    }

    return 0;
}