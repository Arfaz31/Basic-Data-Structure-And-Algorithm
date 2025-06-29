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

    Node* head = new Node(10); //head ekta pointer jar data type holo Node*
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a; // direfferent way to write head.next = a. ekhane &a lekha hoyni karon a nijei ekta address jeta Heap memory te thaka Node ke point kore.
    a->next = b;

    cout << head->val << endl;
    cout << head->next->val << endl; //head k derefference kore heap memory te thaka Node er moddhe next k access kora hocche. then next er moddhe already (head->next = a;) a pointer er address ache then again a pointer k derefference kore heap memory te thaka Node er moddhe value k access kora hocche Which is 20.
    cout << head->next->next->val << endl;
     
    return 0;
}