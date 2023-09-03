// https://www.beecrowd.com.br/judge/en/problems/view/1149
#include <stdio.h>

int main()
{
    int A, N, temp, i, sum = 0, p;
    scanf("%d", &A);
    while (1)
    {
        scanf("%d", &N);
        if (N > 0)
        {
            temp = N;
            break;
        }
    }
    for (i = 0; i < temp; i++)
    {
        p = A + i;
        sum += p;
    }
    printf("%d\n", sum);
    return 0;
}

// Alternative Way
/*
// https://www.beecrowd.com.br/judge/en/problems/view/1149
#include <stdio.h>

int main()
{
    int A, N, temp, i, sum = 0;
    scanf("%d", &A);
    while (1)
    {
        scanf("%d", &N);
        if (N > 0)
        {
            temp = N;
            break;
        }
    }
    for (i = 0; i < temp; i++)
    {
        sum += A + i;
    }
    printf("%d\n", sum);
    return 0;
}

*/