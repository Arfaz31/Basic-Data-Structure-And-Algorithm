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

void insert_at_head(Node* &head, Node* &tail, int val)
{
     Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail =newNode;
        return;
    }

    newNode->next =head;
    head = newNode;

};


void delete_head(Node* &head)
{
    Node* temp =head;
    head = temp->next;
    delete temp;

};


void delete_at_any_pos(Node* &head, Node* &tail, int idx)
{
Node* temp = head;
for(int i = 1; i<idx; i++)
{
    temp = temp->next;
}

Node* deleteNode = temp->next;
      temp->next = deleteNode->next;
      delete deleteNode;

       if (temp->next == NULL)
    {
        tail = temp;
    }

}



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
 

    int q;
    cin >> q;
  
    while(q--){
         int x, v;
         cin >> x >> v;
         int size = size_of_linked_list(head);
         if(x==0)
         {
            insert_at_head(head,tail,v);
         }else if(x==1)
         {
            insert_at_tail(head,tail,v);
         }else if(x==2 && v < size)
         {
            if(v==0)
            {
                delete_head(head);
            }else{
                delete_at_any_pos(head,tail,v);
            }
         }

         print_linked_list(head);

    
    }

   
     
    return 0;
}