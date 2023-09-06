// https://www.beecrowd.com.br/judge/en/problems/view/1173
#include <iostream>

using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int V;
    cin >> V;
    int array[10];
    array[0] = V;
    for (int i = 0; i < 10; i++)
    {
        array[i + 1] = 2 * array[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << array[i] << endl;
    }

    return 0;
}