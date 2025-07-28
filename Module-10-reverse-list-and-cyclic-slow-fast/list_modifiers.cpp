#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l={1,2,3,4,5,6,7,8,9,10};
    // list<int> l1={7,8,9,10};
    // vector<int> v={11,12,13,14,15};
    // list<int> l2;
    // l2=l;
    // l.push_back(11);
    // l.push_front(0);
    // cout << *next(l.begin(),3) << endl;
    // l.insert(next(l.begin(),3),100);//3 index, 100 value
    // l.insert(next(l.begin(),2),l1.begin(),l1 .end());
    // l.erase(next(l.begin(),2),next(l.begin(),5));
    auto it = find(l.begin(),l.end(),7);
    if(it == l.end()) //jodi iterator end a thake tar mane not found
    {
        cout << "Not found" << endl;
    }
    else
    {
        l.erase(it);
    }
    for(int val : l)
    {
        cout<<val<<" ";
    }
    return 0;
}