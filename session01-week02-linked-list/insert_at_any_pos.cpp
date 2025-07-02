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

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_at_any_position(Node* &head, Node* &tail, int pos, int val) {
    Node* newNode = new Node(val);

    if (pos == 0 || head == NULL) {
        newNode->next = head;
        head = newNode;
        if (tail == NULL) tail = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < pos && temp->next != NULL; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    if (newNode->next == NULL) {
        tail = newNode;
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

    int count = 0;
    while (true) {
        int val;
        cin >> val;
        if (val == -1) break;
        insert_at_any_position(head, tail, min(3, count), val);
        count++;
    }

    print_linked_list(head);
    return 0;
}
