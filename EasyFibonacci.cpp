// https://www.beecrowd.com.br/judge/en/problems/view/1151
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
    int n1 = 0, n2 = 1, r, i = 0;
    if (N >= 1)
    {
        cout << n1;
    }
    if (N >= 2)
    {
        cout << " " << n2;
    }
    while (i < (N - 2))
    {
        r = n1 + n2;
        n1 = n2;
        n2 = r;
        cout << " " << r;
        i++;
    }
    cout << endl;

    return 0;
}