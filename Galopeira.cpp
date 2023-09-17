// https://www.beecrowd.com.br/judge/en/problems/view/2147
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int C;
    cin >> C;
    while (C--)
    {
        char ch[10001];
        cin >> ch;
        int len = strlen(ch);
        cout << fixed << setprecision(2) << 0.01 * len << endl;
    }
    return 0;
}