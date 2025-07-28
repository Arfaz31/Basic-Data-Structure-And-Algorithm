 #include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
      Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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



int main() {
    Node* head = new Node(10);  
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;

    Node* slow = head;
    Node* fast = head;
    bool flag = false;
    while(fast != NULL && fast->next != NULL) //fast->next == NULL hole loop thamate hobe nahole NULL er next access korte jabe karon fast 2 ghor kore shamne agacche.
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            //cycle found
            flag = true;
            break;
        }
        
    }

    if(flag)
    {
        cout << "Cycle found" << endl;
    }
    else
    {
        cout << "Cycle not found" << endl;
    }

    return 0;
}
