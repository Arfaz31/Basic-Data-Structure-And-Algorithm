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

void insert_at_tail(Node* &head, int val) //pass by reference so that the value of head can be changed and we can access the head from outside
{ 
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL) //time complexity O(n)
    {
        temp = temp->next;
    }
    temp->next = newNode;
   
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

    insert_at_tail(head, 40);
    print_linked_list(head);

     
    return 0;
}