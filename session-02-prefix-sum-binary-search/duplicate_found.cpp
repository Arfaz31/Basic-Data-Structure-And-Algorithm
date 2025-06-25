#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n;
     cin >> n;
     vector <int> v(n);
     for(int i = 0; i < n; i++)
     {
          cin >> v[i];
     }

     sort(v.begin(), v.end());

     int flag = 0;
     for(int i = 0; i < n-1; i++) // i < n-1 or i <= n-2
     {
          if(v[i] == v[i+1])
          //we know generally loop is running from 0 to n -1 (i < n),which is the index of array .But here loop is running from 0 to n-2. Because if we trying to run loop from 0 to n-1 then it will give TLE(due to v[n-1] == v[n] which is out of bound). so, if i=n-2 then v[n-2] == v[n-2 + 1]
           
          {
               flag = 1;
               break;
          }
     }
     if(flag == 1)
     {
          cout << "yes" << endl;
     }
     else
     {
          cout << "no" << endl;
     }

    return 0;
}