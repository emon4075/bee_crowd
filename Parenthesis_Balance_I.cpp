// https://www.beecrowd.com.br/judge/en/problems/view/1068
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    while (cin >> S)
    {
        stack<char> ST;
        int count = 0;
        for (char C : S)
        {
            if (C == '(')
            {
                ST.push(C);
            }
            else if (C == ')')
            {
                if (!ST.empty() && ST.top() == '(')
                {
                    ST.pop();
                }
                else
                {
                    count = 1;
                }
            }
        }
        if (ST.empty() && count == 0)
        {
            cout << "correct" << endl;
        }
        else
        {
            cout << "incorrect" << endl;
        }
    }
    return 0;
}