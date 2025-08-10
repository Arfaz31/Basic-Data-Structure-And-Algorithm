#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        set<int> s;
        for (int i = 0; i < n; i++)
            s.insert(v[i]);

        for (int x : s)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}