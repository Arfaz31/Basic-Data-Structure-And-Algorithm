#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin >> n;
     vector<int> v(n);
     for(int i = 0; i < n; i++)
     {
         cin >> v[i];
     }
     reverse(v.begin(), v.end()); //Time complexity O(n) → যেখানে n = reverse করা এলিমেন্টের সংখ্যা।
     for(int i = 0; i < n; i++)
     {
         cout << v[i] << " ";
     }
     cout << endl;
    return 0;
}