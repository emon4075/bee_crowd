// https://www.beecrowd.com.br/judge/en/problems/view/1175
#include <iostream>

using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N[20], temp;
    for (int i = 0; i < 20; i++)
    {
        cin >> N[i];
    }
    for (int i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << N[19 - i] << endl;
    }

    return 0;
}