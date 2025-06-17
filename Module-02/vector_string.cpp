#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin >> n;
     cin.ignore(); //to ignore the newline character
     vector<string> v(n); 
     for(int i=0; i<n; i++) 
     {
        getline(cin, v[i]);
     }

    for(string s:v) cout<<s<<endl;
    return 0;
}