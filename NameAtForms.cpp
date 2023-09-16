// https://www.beecrowd.com.br/judge/en/problems/view/2160
#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    char ch[501];
    cin.get(ch, 501);
    int Len = strlen(ch);
    if (Len <= 80)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}