// https://www.beecrowd.com.br/judge/en/problems/view/2006
#include <iostream>

using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int T, A, B, C, D, E, i = 0;
    cin >> T;
    cin >> A >> B >> C >> D >> E;
    if (T == A)
    {
        i++;
    }
    if (T == B)
    {
        i++;
    }
    if (T == C)
    {
        i++;
    }
    if (T == D)
    {
        i++;
    }
    if (T == E)
    {
        i++;
    }
    cout << i << endl;
    return 0;
}