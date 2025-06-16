#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
     //this is quadretic complexity O(n^4)
    for(int i = 1; i <= n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            for(int k=1; k<=n; k++)
            {
                for(int l=1; l<=n; l++)
                {
                    cout << i << "" << j << "" << k << "" << l << endl;
                }
            }
        }
    }
  
   
 //this is linear complexity O(n)
//    for(int i = 1; i <= n; i++)
//    {
//       cout << i << endl;
//    }

//     for(int j=1; j<=n; j++)
//        {
//           cout << j << endl;
//        }
      
    return 0;
}


