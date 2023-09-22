// https://www.beecrowd.com.br/judge/en/problems/view/1170
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
    while (N--)
    {
        int count = 0;
        float X;
        cin >> X;
        while (X > 1)
        {
            X = X / 2;
            count++;
        }
        cout << count << " dias" << endl;
    }
    return 0;
}