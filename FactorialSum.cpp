// https://www.beecrowd.com.br/judge/en/problems/view/1161
#include <iostream>

using namespace std;

int main()
{
    int N, M;

    while (cin >> M >> N)
    {
        long long sum = 0;
        long long fact1 = 1, fact2 = 1;

        for (int i = 1; i <= M; i++)
        {
            fact1 *= i;
        }
        sum += fact1;

        for (int i = 1; i <= N; i++)
        {
            fact2 *= i;
        }
        sum += fact2;

        cout << sum << endl;
    }

    return 0;
}
