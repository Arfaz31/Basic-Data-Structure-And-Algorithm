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

void sort_linked_list(Node* head)
{
    for(Node* i = head; i->next != NULL; i= i->next)
    {
        for(Node* j=i->next; j!=NULL; j=j->next)
        {
            if(i->val > j->val)
            {
                swap(i->val,j->val);
            }
        }
    }

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

    sort_linked_list(head);

    Node* temp = head;
    while(temp->next !=NULL) //ekhane temp != NULL hoyni, Reason is- last Node a jeye temp = temp->next; temp er value NULL hye jeto then NULL->val access korar karone segmentaion fault error dito
    {
        if(temp->val == temp->next->val)
        {
            cout<<"Duplicate"<<endl;
            return 0; // niche ar jabei na ekhanei code sesh hye jabe
        }
        temp = temp->next;
    }

    cout<<"Not Duplicate"<<endl;

     
    return 0;
}