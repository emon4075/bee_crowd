// https://www.beecrowd.com.br/judge/en/problems/view/1157
#include <iostream>

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
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}