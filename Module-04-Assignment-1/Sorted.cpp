#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     while(t--)
     {
     int n;
     cin >> n;
     vector<int> v(n);
     for(int i=0; i<n; i++)
     {
        cin >> v[i];
     }

     vector<int> v_copy(v);
     sort(v_copy.begin(), v_copy.end());
     int is_sorted = 1;
      for(int i=0; i<n; i++)
     {
        if(v[i] != v_copy[i])
        {
            is_sorted = 0;
            break;
        }
     }
     if(is_sorted == 1)
     {
        cout << "YES" << endl;
     }else{
        cout << "NO" << endl;
     }

     }
    return 0;
}