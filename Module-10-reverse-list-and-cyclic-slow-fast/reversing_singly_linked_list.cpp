#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
  

    Node(int val) {
        this->val = val;
        this->next = NULL;
      
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}



void print_linked_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverse_linked_list(Node* &head,Node* temp,Node* &tail)
{
 if(temp->next==NULL)
 {
    head=temp;
    return;
 }
 reverse_linked_list(head,temp->next,tail);
 temp->next->next=temp;
 temp->next=NULL;
 tail = temp;
}

int main() {
    Node* head = NULL;  
    Node* tail = NULL;  

    while (true) {
        int val;
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }

 
reverse_linked_list(head, head,tail);

    // print_linked_list(head);
    cout << head->val << endl;
    cout << tail->val << endl;
    return 0;
}
