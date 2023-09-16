// https://www.beecrowd.com.br/judge/en/problems/view/1168
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
    char num[100];
    cin >> num;
    int sum = 0;
    for (int i = 0; i < 100; i++)
    {
        cout << num[i] << endl;
        if (num[i] == '\0')
        {
            break;
        }
        else
        {
            switch (num[i])
            {
            case 1:
                sum += 2;
                break;
            case 2:
                sum += 5;
                break;
            case 3:
                sum += 5;
                break;
            case 4:
                sum += 4;
                break;
            case 5:
                sum += 5;
                break;
            case 6:
                sum += 6;
                break;
            case 7:
                sum += 3;
                break;
            case 8:
                sum += 7;
                break;
            case 9:
                sum += 6;
                break;
            default:
                sum += 6;
                break;
            }
        }
    }
    cout << sum << endl;

    return 0;
}