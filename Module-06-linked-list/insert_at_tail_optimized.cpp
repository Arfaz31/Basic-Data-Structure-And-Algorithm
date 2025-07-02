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

void insert_at_tail(Node* &head,Node* &tail, int val) //pass by reference so that the value of head can be changed and we can access the head from outside
{ 
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
    tail->next = newNode; //time complexity O(1)
    tail = newNode;
    // tail = tail->next; //age lastNode chilo 30 but newNode add korar por ekhon tail hobe 40 that's why tail = tail->next
   
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
     Node* tail = new Node(30);
     head->next = a;
     a->next = tail;

    insert_at_tail(head,tail, 40);
    print_linked_list(head);

     
    return 0;
}