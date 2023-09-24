// https://www.beecrowd.com.br/judge/en/problems/view/1197
#include <iostream>
using namespace std;

int main()
{
    int v, t;
    while (cin >> v >> t)
    {
        if (t == 0)
        {
            cout << 0 << endl;
        }
        else
        {

            int u = v - (v * t); // initial velocity formula: u = v - at
            int a = (v - u) / t; // acceleration formula: a = (v - u) / t
            int displacement_2t = u * (2 * t) + 0.5 * a * (2 * t) * (2 * t);
            cout << displacement_2t << endl;
        }
    }

    return 0;
}
