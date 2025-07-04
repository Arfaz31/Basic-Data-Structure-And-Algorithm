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


void remove_duplicates(Node* head) {
    for (Node* i = head; i != NULL; i = i->next) { //i->next != NULL lekha hoyni karon icrement korte korte jokjon (i = i->next) i er value NULL hobe tokhon condition check a jodi i->next means NULL->next access korte jai tahole crush korbe.
        Node* j = i;

        while (j->next != NULL) {
            if (j->next->val == i->val) {
               
                Node* deleteNode = j->next;
                j->next = j->next->next;
                delete deleteNode;
            } else {
                j = j->next;
            }
        }
    }
}


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

remove_duplicates(head);
print_linked_list(head);

     
    return 0;
}