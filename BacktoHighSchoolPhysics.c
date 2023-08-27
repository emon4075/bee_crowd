#include <stdio.h>

int main()
{
    int v, t;

    while (scanf("%d %d", &v, &t) != EOF)
    {
        int u = v - (v * t); // initial velocity formula: u = v - at
        int a = (v - u) / t; // acceleration formula: a = (v - u) / t
        int displacement_2t = u * (2 * t) + 0.5 * a * (2 * t) * (2 * t);
        printf("%d\n", displacement_2t);
    }

    return 0;
}
