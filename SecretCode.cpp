// https://www.beecrowd.com.br/judge/en/problems/view/2727
#include <iostream>

using namespace std;

int main()
{
    int N;
    while (cin >> N)
    {
        getchar();
        while (N--)
        {
            char str[50];
            cin.getline(str, 50);
            int count = -1;
            for (int i = 0; str[i] != '\0'; i++)
            {
                if (str[i] == '.')
                {
                    count++;
                }
            }
            char ch = 'a' + count;
            cout << ch << endl;
        }
    }
    return 0;
}
