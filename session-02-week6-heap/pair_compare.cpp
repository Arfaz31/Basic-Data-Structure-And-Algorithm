#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> l, pair<string, int> r)
{
    // name ascending
    // if (l.first < r.first)
    // {
    //     return true;
    // }
    // return false;

    // mark descending
    if (l.second > r.second)
    {
        return true;
    }
    return false;
}

int main()
{
    // pair<string, int> p;
    vector<pair<string, int>> v;
    int n;
    cin >> n;
    // getchar();
    // cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string name;
        int marks;
        // cin >> name >> marks;
        cin.ignore();
        getline(cin, name);
        cin >> marks;
        // cout << name << endl;
        // cin.ignore();
        v.push_back({name, marks});
    }

    // sort
    sort(v.begin(), v.end(), cmp); // sort function randomly 2 ta kore element cmp er moddhe compare kore sort kore.

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}