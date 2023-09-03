// https://www.beecrowd.com.br/judge/en/problems/view/1153#include <iostream>
#include <iostream>
using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, fact = 1;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        fact *= i;
    }
    cout << fact << endl;
    return 0;
}