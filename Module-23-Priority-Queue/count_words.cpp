#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mp;
    while (ss >> word)
    {
        mp[word]++;
    }
    for (auto x : mp) // O(NlogN)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}