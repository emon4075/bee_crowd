// https://www.beecrowd.com.br/judge/en/problems/view/2165
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
    if (Len <= 140)
    {
        cout << "TWEET" << endl;
    }
    else
    {
        cout << "MUTE" << endl;
    }

    return 0;
}