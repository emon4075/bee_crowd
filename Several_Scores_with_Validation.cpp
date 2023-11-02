#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double fs, ss;

    while (1)
    {
        cin >> fs;
        if (fs >= 0 && fs <= 10)
        {
            break;
        }
        else
        {
            cout << "nota invalida" << endl;
        }
    }

    while (1)
    {
        cin >> ss;
        if (ss >= 0 && ss <= 10)
        {
            break;
        }
        else
        {
            cout << "nota invalida" << endl;
        }
    }

    cout << fixed << setprecision(2) << "media = " << (ss + fs) / 2.0 << endl;

    int choice;

    while (1)
    {
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> choice;
        if (choice == 1 || choice == 2)
        {
            break;
        }
    }

    while (1)
    {
        if (choice == 1)
        {
            while (1)
            {
                cin >> fs;
                if (fs >= 0 && fs <= 10)
                {
                    break;
                }
                else
                {
                    cout << "nota invalida" << endl;
                }
            }

            while (1)
            {
                cin >> ss;
                if (ss >= 0 && ss <= 10)
                {
                    break;
                }
                else
                {
                    cout << "nota invalida" << endl;
                }
            }

            cout << fixed << setprecision(2) << "media = " << (ss + fs) / 2.0 << endl;

            while (1)
            {
                cout << "novo calculo (1-sim 2-nao)" << endl;
                cin >> choice;
                if (choice == 1 || choice == 2)
                {
                    break;
                }
            }
        }
        else if (choice == 2)
        {
            return 0;
        }
    }

    return 0;
}
