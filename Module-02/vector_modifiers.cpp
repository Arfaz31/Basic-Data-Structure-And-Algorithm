#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> v = {1,2,3,1,5,1};
     vector <int> v2 ={100, 200, 300};
    //  v.insert(v.begin()+2, v2.begin(), v2.end());
    //  v.erase(v.begin()+1, v.begin()+5);
    // replace(v.begin(), v.end(), 1, 100);
    // auto it = find(v.begin(), v.end(), 5);
    // if(it == v.end())
    // {
    //     cout<<"Not found";
    // }else{
    //     cout<<"Found";
    // }
    //  for(int x:v) cout<<x<<" ";

    // cout << v[v.size()-1] << endl; //last element
    // cout << v.back() << endl; //last element

    for(auto it=v.begin(); it <v.end(); it++)
    {
        cout<<*it<<" ";
    }


    return 0;
}