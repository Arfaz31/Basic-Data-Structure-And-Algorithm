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

//selection sort- time complexity O(n^2)
void sort_linked_list(Node* head) {
    for(Node* i = head; i->next != NULL; i = i->next) {
        for(Node* j = i->next; j != NULL; j = j->next) { //last node a j er man null hye jabe so null == null hole loop theme jabe
            if(i->val > j->val) {
                swap(i->val, j->val);
            }
        }
    }
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
    Node* head = NULL;  
    Node* tail = NULL;  

    while (true) { //time complexity O(n)
        int val;
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val); //time complexity O(1) with tail tracking
    }

 
    sort_linked_list(head);
    print_linked_list(head);
    return 0;
}
