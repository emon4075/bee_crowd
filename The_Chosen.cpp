#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int m;
    double note;
};
int main()
{
    int n;
    cin >> n;
    Student S[n];
    Student Max;
    Max.note = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> S[i].m >> S[i].note;
        if (Max.note < S[i].note)
        {
            Max = S[i];
        }
    }
    if (Max.note < 8)
    {
        cout << "Minimum note not reached" << endl;
    }
    else
    {
        cout << Max.m << endl;
    }

    return 0;
}