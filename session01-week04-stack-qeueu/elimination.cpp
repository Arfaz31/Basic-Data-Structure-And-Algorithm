#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (s.empty())
        {
            s.push(str[i]);
        }
        else if (s.top() == 'B' && str[i] == 'A')
        {
            s.pop();
        }
        else
        {
            s.push(str[i]);
        }
    }
    if (s.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
        string remaining;
        while (!s.empty())
        {
            remaining += s.top();
            s.pop();
        }

        // Reverse to get actual order
        reverse(remaining.begin(), remaining.end());

        cout << "Remaining string: " << remaining << endl;
    }

    return 0;
}