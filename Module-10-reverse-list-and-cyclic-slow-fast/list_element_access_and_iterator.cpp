#include<bits/stdc++.h>
using namespace std;
int main()
{
     list<int> l={1,2,3,4,5,3,7,8,9,10,1,12};
     cout << l.back() << endl;
     cout << l.front() << endl;
     cout << *next(l.begin(),3) << endl;//pointer return kore tai dereference kore print korte hobe
     cout << *l.begin() << endl;
   

    return 0;
}