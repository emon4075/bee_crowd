// https://www.beecrowd.com.br/judge/en/problems/view/1715
#include <iostream>

using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N, M;
    cin >> N >> M;
    int temp = M;
    int array[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> array[i][j];
        }
    }
    int goal = 0;
    for (int i = 0; i < N; i++)
    {
        int count = 0;
        for (int j = 0; j < M; j++)
        {
            if (array[i][j] > 0)
            {
                count++;
            }
            if (count == temp)
            {
                goal++;
            }
        }
    }
    cout << goal << endl;
    return 0;
}