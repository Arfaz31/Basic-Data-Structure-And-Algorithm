#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin >> n;
     for(int i = 1; i <= n; i*=2)
     {
          cout << i << endl;
     }
    return 0;
}

//this is logarithmetic complexity O(log n), because here the value of n is increasing by a factor of 2 in each iteration, in a word if increment and decrement is used mutliply or divide then it will become logarithmetic complexity