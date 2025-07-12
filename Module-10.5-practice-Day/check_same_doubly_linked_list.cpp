#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next =newNode;
    newNode->prev = tail;
    tail=newNode;

};

int size_of_linked_list(Node*head)
{
    int sz=0;
    Node* temp=head;
    while(temp !=NULL)
    {
        sz++;
        temp=temp->next;
    }
    return sz;
}

void print_linked_list(Node* head)
{
    Node* temp=head;
    while(temp !=NULL)
    {
        cout<<temp->val << " ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* head1=NULL;
    Node* tail1=NULL;
    Node* head2=NULL;
    Node* tail2=NULL;

    while(true)
    {
        int val;
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head1,tail1,val);
    }
    // print_linked_list(head1);

       while(true)
    {
        int val;
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head2,tail2,val);
    }
    // print_linked_list(head2);

     int sz=size_of_linked_list(head1);
     int sz1=size_of_linked_list(head2);

     if(sz!=sz1)
     {
        cout<<"NO"<<endl;
     }else{
         Node* temp1=head1;
     Node* temp2=head2;

     int flag=0;
     while(temp1 !=NULL && temp2!=NULL)
     {
        if(temp1->val != temp2->val)
        {
            flag=1;
            break;
        }
        temp1=temp1->next;
        temp2=temp2->next;
     }
     if(flag==0)
       {
        cout << "YES" << endl;
       }else{
        cout <<"NO"<<endl;
       }
     }

    
    return 0;
}