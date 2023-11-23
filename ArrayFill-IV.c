// https://www.beecrowd.com.br/judge/en/problems/view/1179
#include <stdio.h>
int main()
{
    int A[15], even = 0, odd = 0;
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    int EvenArray[even], OddArray[odd], par[5], impar[5], k = 0, l = 0;
    for (int i = 0; i < 15; i++)
    {
        if (A[i] % 2 == 0)
        {
            EvenArray[k] = A[i];
            k++;
        }
        else
        {
            OddArray[l] = A[i];
            l++;
        }
    }
    int p = 0, q = 0;
    for (int i = 0; i < even; i++)
    {
        par[p] = EvenArray[i];
        printf("par[%d] = %d\n", p, par[p]);
        p++;
        if (p == 5)
        {
            break;
        }
    }
    for (int i = 0; i < odd; i++)
    {
        impar[q] = OddArray[i];
        printf("impar[%d] = %d\n", q, impar[q]);
        q++;
        if (q == 5)
        {
            break;
        }
    }
    int x = 0, y = 0;
    for (int i = 5; i < odd; i++)
    {
        impar[x] = OddArray[i];
        printf("impar[%d] = %d\n", x, impar[x]);
        x++;
        if (x == 5)
        {
            break;
        }
    }
    for (int i = 5; i < even; i++)
    {
        par[y] = EvenArray[i];
        printf("par[%d] = %d\n", y, par[y]);
        y++;
        if (y == 5)
        {
            break;
        }
    }

    int r = 0, s = 0;
    for (int i = 10; i < odd; i++)
    {
        impar[r] = OddArray[i];
        printf("impar[%d] = %d\n", r, impar[r]);
        r++;
        if (r == 5)
        {
            break;
        }
    }
    for (int i = 10; i < even; i++)
    {
        par[s] = EvenArray[i];
        printf("par[%d] = %d\n", s, par[s]);
        s++;
        if (s == 5)
        {
            break;
        }
    }
    return 0;
}