#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    m["tamim"] = 100;
    m["hamid"] = 200;
    for (auto it = m.begin(); it != m.end(); it++) // O(NlogN)
    {
        cout << it->first << " " << it->second << endl; // O(logN)
    }
    if (m.count("tamim"))
    {
        cout << "tamim found" << endl;
    }
    else
        cout << "tamim not found" << endl;
    return 0;
}