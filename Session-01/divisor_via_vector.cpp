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
        vector<int> v;
        for(int i = 1; i <= n; i++)
        {
            if(n % i == 0)
            {
                v.push_back(i);
            }
        }
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
     }
    return 0;
}


// here vector is used instead of array because it is more efficient than array in terms of time complexity and space complexity. vector take less space than array. if i used array here then it will take more space such as O(n) but vector is dynamically allocated. it takes space as much as the size of the divisor only.