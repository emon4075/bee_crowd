#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    if (A > B && C >= B)
    {
        cout << ":)" << endl;
    }
    else if (A < B && B >= C)
    {
        cout << ":(" << endl;
    }

    else if (A < B && B < C && (B - A) > (C - B))
    {
        cout << ":(" << endl;
    }

    else if (A < B && B < C && (B - A) <= (C - B))
    {
        cout << ":)" << endl;
    }
    else if (A > B && B > C && (A - B) > (B - C))
    {
        cout << ":)" << endl;
    }
    else if (A > B && B > C && (A - B) <= (B - C))
    {
        cout << ":(" << endl;
    }
    else if (A == B && B < C)
    {
        cout << ":)" << endl;
    }
    else
    {
        cout << ":(" << endl;
    }
    return 0;
}