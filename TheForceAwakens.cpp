// https://www.beecrowd.com.br/judge/en/problems/view/2163
#include <iostream>

using namespace std;

int main()
{
    int N, M, i, j;
    cin >> N >> M;
    int array[N][M];

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            cin >> array[i][j];
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (array[i][j] == 42 && array[i][j - 1] == 7 && array[i][j + 1] == 7 && array[i - 1][j - 1] == 7 && array[i - 1][j + 1] == 7 && array[i - 1][j] == 7 && array[i + 1][j + 1] == 7 && array[i + 1][j] == 7 && array[i + 1][j + 1] == 7)
            {
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }

    cout << 0 << " " << 0 << endl;
    return 0;
}
