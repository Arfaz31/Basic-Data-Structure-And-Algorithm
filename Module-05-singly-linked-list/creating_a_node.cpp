#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
  Node a(10),b(20),c(300);
    //  a.val =10;
    //  b.val =20;
    //  c.val =30;
     a.next = &b; //a holo object &b holo address
     b.next = &c;
    //  c.next = NULL;

     cout << a.val << endl;
    //  cout <<(*a.next).val << endl;
     cout << a.next->val << endl;
     cout << a.next->next->val << endl;


    return 0;
}