#include<bits/stdc++.h>
using namespace std;

void fun(int* &p) //refference of a pointer. pointer er j address point korche(ekhane initially x k point korche) shetake chnage korte chaile (int* &p) diye pass korte hobe. ekhon p er address change korle sheta main function a paoa jabe. As main fun er p and fun func er p  same na that's why notun kono variable er address k point korte chaile oboshoi pointer refference hisebe pass korte hobe.
{
    int y=20;
    p=&y;
    cout << "In Fun:" << *p << endl;
}

int main()
{
     int x=10;
     int* p=&x;
     fun(p);
     cout <<"In Main:" << *p << endl;
    return 0;
}