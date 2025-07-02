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

void insert_at_head(Node* &head, int val) //pass by reference so that the value of head can be changed and we can access the head from outside
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode; // head will point to the new node
};

void print_linked_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
     Node* head = new Node(10);
     Node* a = new Node(20);
     Node* b = new Node(30);
     head->next = a;
     a->next = b;

    insert_at_head(head, 100);
    print_linked_list(head);

     
    return 0;
}