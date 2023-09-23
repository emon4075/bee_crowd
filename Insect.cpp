// https://www.beecrowd.com.br/judge/en/problems/view/2862
#include <iostream>

using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int C, N;
    cin >> C;
    while (C--)
    {
        cin >> N;
        if (N <= 8000)
        {
            cout << "Inseto!" << endl;
        }
        else
        {
            cout << "Mais de 8000!" << endl;
        }
    }

    return 0;
}