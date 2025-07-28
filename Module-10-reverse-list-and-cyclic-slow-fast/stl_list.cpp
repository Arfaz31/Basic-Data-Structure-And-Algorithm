 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    //   list<int> l(10,3);
    //   for(auto it=l.begin();it!=l.end();it++)
    //   {
    //        cout<<*it<<" ";
    //   } 

    // int arr[]={1,2,3,4,5};
    // list<int> l(arr,arr+5);  

    vector<int> v={1,2,3,4,5};
    list<int> l(v.begin(),v.end());

    // cout << l.size() << endl;
   l.resize(3);

    for( int val : l)
    {
        cout<<val<<" ";
    }
      
     return 0;
 }