// https://www.beecrowd.com.br/judge/en/problems/view/1180
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
    int X[N], i;
    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
    }
    int minimum = X[0];
    for (i = 0; i < N; i++)
    {
        if (minimum > X[i])
        {
            minimum = X[i];
        }
    }
    cout << "Menor valor: " << minimum << endl;
    for (i = 0; i < N; i++)
    {
        if (minimum == X[i])
        {
            break;
        }
    }
    cout << "Posicao: " << i << endl;

    return 0;
}