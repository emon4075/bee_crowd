// https://www.beecrowd.com.br/judge/en/problems/view/1279
#include <iostream>

using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int Y;
    while (cin >> Y)
    {
        if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0) && (Y % 15 != 0) && (Y % 55 != 0))
        {
            cout << "This is a leap year." << endl;
            cout << "\n";
        }
        else if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0) && (Y % 15 == 0) && (Y % 55 != 0))
        {
            cout << "This is a leap year." << endl;
            cout << "This is huluculu festival year." << endl;
            cout << "\n";
        }
        else if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0) && (Y % 15 == 0) && (Y % 55 == 0))
        {
            cout << "This is a leap year." << endl;
            cout << "This is huluculu festival year." << endl;
            cout << "This is buluculu festival year." << endl;
            cout << "\n";
        }
        else if ((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0) && (Y % 55 == 0))
        {
            cout << "This is a leap year." << endl;
            cout << "This is buluculu festival year." << endl;
            cout << "\n";
        }
        else if (Y % 15 == 0)
        {
            cout << "This is huluculu festival year." << endl;
            cout << "\n";
        }

        else
        {
            cout << "This is an ordinary year." << endl;
            cout << "\n";
        }
    }

    return 0;
}