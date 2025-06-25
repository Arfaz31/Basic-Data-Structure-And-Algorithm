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

  
//time complexity O(n)
     // int flag = 1;
     // for(int i = 0; i < n-1; i++) // i < n-1 or i <= n-2
     // {
     //      if(v[i] < v[i+1]) //descending order mismatch
           
     //      {
     //           flag = 0;
     //           break;
     //      }
     // }


     // if(flag == 1)
     // {
     //      cout << "sorted" << endl;
     // }
     // else
     // {
     //      cout << "not sorted" << endl;
     // }


     //time complexity O(nlogn)
     vector<int> v1 = v;
    sort(v1.begin(), v1.end(), greater<int>());
    int is_descending_sorted = 1;
    for(int i = 0; i < n; i++)
    {
        if(v[i] != v1[i])
        {
            is_descending_sorted = 0;
            break;
        }
    }
    if(is_descending_sorted == 1)
    {
        cout << "sorted" << endl;
    }
    else
    {
        cout << "not sorted" << endl;
    }
   

    return 0;
}