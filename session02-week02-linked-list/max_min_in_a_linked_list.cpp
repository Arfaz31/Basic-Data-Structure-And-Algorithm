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

int max_find(Node* head)
{
    int mx = INT_MIN;
 Node* temp =head;
    while(temp != NULL)
    {
        mx=max(temp->val, mx);
        temp=temp->next;
    }
    return mx;
};
int min_find(Node* head)
{
    int mn = INT_MAX;
    Node* temp =head;
    while(temp != NULL)
    {
        mn=min(temp->val, mn);
        temp=temp->next;
    }
    return mn;
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


    while(true){
        int val;
        cin >>val;
        if(val == -1) break;
        insert_at_tail(head,tail,val);
    }

    int mx=max_find(head);
   int mn= min_find(head);

    cout <<mx << " " << mn;

 
     
    return 0;
}