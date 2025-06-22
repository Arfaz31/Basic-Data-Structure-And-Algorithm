#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,q;
     cin >> n >> q;
     vector<long long int> v(n+1); //time complexity O(N). In C++, when you write vector<Type> v(size);, the vector is initialized with size default values (0 for integers). So even though it's a single line of code, it's doing n+1 operations internally.
     for(int i=1;i<=n;i++) 
     {
        cin >> v[i];
     }

     vector<long long int> pre(n+1); //time complexity O(N)
     pre[1]=v[1];
     for(int i=2;i<=n;i++) //time complexity O(N)
     {
        pre[i]=pre[i-1]+v[i];
     }
     while(q--) //time complexity O(Q)
     {
        int l,r;
        cin >> l >> r;
        long long int sum;
        if(l==1)
        {
            sum=pre[r];
        }
        else
        {
            sum=pre[r]-pre[l-1]; //time complexity O(1)
        }
        cout << sum << endl;
     }
    return 0;
}

//Time Complexity: O(n)

//index       1   2    3    4
//v(n+1) =>   5 | 5  | 2  | 3
//pre(n+1) => 5 | 10 | 12 | 15