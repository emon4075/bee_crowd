// https://www.beecrowd.com.br/judge/en/problems/view/1759
#include <iostream>

using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    long long N, i;
    cin >> N;
    for (i = 1; i <= N; i++)
    {
        if (i < N)
        {
            cout << "Ho"<<" ";
        }
        else
        {
            cout << "Ho!" << endl;
        }
    }

    return 0;
}