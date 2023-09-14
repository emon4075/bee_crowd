// https://www.beecrowd.com.br/judge/en/problems/view/1865
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
    string name;
    cin >> C;
    while (C--)
    {
        cin >> name >> N;
        if (name == "Thor")
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}