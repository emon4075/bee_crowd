// https://www.beecrowd.com.br/judge/en/problems/view/1069
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        string S;
        cin >> S;
        int count = 0;
        stack<char> ST;
        for (char C : S)
        {
            if (C == '<')
            {
                ST.push(C);
            }
            else if (C == '>')
            {
                if (!ST.empty() && ST.top() == '<')
                {
                    ST.pop();
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}