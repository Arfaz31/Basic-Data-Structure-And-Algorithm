#include <bits/stdc++.h>
using namespace std;

int main()
{
    int query;
    cin >> query;
    queue<string> q;

    while (query--)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            string name;
            cin >> name;
            q.push(name);
        }
        else if (x == 1)
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}
