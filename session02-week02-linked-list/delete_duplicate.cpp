#include <bits/stdc++.h>
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

// Insert at tail
void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

// Remove all duplicates (only works when list is sorted)
void remove_duplicates(Node* head) {
    Node* temp = head;
    while (temp != NULL && temp->next != NULL) {
        if (temp->val == temp->next->val) {
            Node* deleteNode = temp->next;
            temp->next = deleteNode->next; //temp->next->next;
            delete deleteNode;
        } else {
            temp = temp->next;
        }
    }
}

void sort_linked_list(Node* head) {
    for (Node* i = head; i && i->next; i = i->next) {
        for (Node* j = i->next; j; j = j->next) {
            if (i->val > j->val) {
                swap(i->val, j->val);
            }
        }
    }
}

// Print linked list
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

    // Input values until -1
    while (true) {
        int val;
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val); //Insert nodes	O(n)
    }

   
    sort_linked_list(head); //Sort linked list	O(n²)

    
    remove_duplicates(head); //Remove duplicates	O(n)

 
    print_linked_list(head); //Print linked list	O(n)

    return 0;
}

//Time complexity is O(n²) 


// while (temp != NULL && temp->next != NULL)

// এখানে দুইটা condition আছে:

//     temp != NULL — এটা চেক করছে যে current node (temp) আছে কিনা।

//     temp->next != NULL — এটা চেক করছে যে temp এর পরের node আছে কিনা।

// ❓ কেন দুইটায় check করতে হবে?

// আমরা এই loop এর ভিতরে এই লাইনটা লিখেছি:

// if (temp->val == temp->next->val)

// এখানে temp->next access করছি।

// ➡️ এখন যদি temp == NULL হয়, তাহলে temp->next লিখলেই segmentation fault হবে (কারণ NULL pointer dereference)
// ➡️ আবার, যদি temp->next == NULL হয়, তাহলে temp->next->val access করতে গেলে crash করবে।

// তাই দুটোই check করা লাগবে।