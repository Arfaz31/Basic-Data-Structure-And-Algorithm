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


void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail =newNode;
        return;
    }

    tail->next =newNode;
    tail = newNode;

};


int size_of_linked_list(Node* head)
{
 int sz = 0;
 Node* temp =head;
    while(temp != NULL)
    {
        sz++;
        temp=temp->next;
    }
    return sz;
};

void print_linked_list(Node* head)
{
    Node* temp =head;
    while(temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
};

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* head1 = NULL;
    Node* tail1 = NULL;

    while(true){
        int val;
        cin >>val;
        if(val == -1) break;
        insert_at_tail(head,tail,val);
    }

     while(true){
        int val1;
        cin >>val1;
        if(val1 == -1) break;
        insert_at_tail(head1,tail1,val1);
    }

   int sz = size_of_linked_list(head);
   int sz1 = size_of_linked_list(head1);
    
   

   if(sz!=sz1)
   {
    cout << "NOT SAME";
   }else{
   Node* temp1 = head;
   Node* temp2 = head1;

   int flag = 0;
     while(temp1 !=NULL && temp2 !=NULL){
       if(temp1->val != temp2->val)
       {
        flag = 1;
        break;
       }

       temp1 = temp1->next;
       temp2 = temp2->next;
    }

    if(flag==0)
    {
        cout << "SAME"<<endl;
    }else{
        cout<<"NOT SAME"<<endl;
    }
   }
     
    return 0;
}