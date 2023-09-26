// https://www.beecrowd.com.br/judge/en/problems/view/1169
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
    int N, X;
    cin >> N;
    while (N--)
    {
        cin >> X;
        long long grains = pow(2, X) / 12000;
        cout << grains<<" kg" << endl;
    }

    return 0;
}