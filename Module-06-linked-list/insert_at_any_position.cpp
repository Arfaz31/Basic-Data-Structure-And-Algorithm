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

void insert_at_any_pos(Node* &head,int idx, int val) 
{
    Node* newNode = new Node(val);
   Node* temp = head;
   for(int i=1;i<idx;i++) //lastNode er sathe conncet korar jonno tar ager node access korte hobe tai i<idx projonto loop cholbe
   {
       temp = temp->next;
       if(temp == NULL)
       {
        //    cout << "Invalid Index" << endl;
           return;
       }
   }
   newNode->next = temp->next; // newNode er next a temp er next rakhbo karon temp er next a last node er address ache. so, ekhane newNode connect with last node.
   temp->next = newNode; // temp er next a newNode rakhbo. now temp->next become connect with newNode
   

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

    insert_at_any_pos(head,2,100);
    print_linked_list(head);

     
    return 0;
}