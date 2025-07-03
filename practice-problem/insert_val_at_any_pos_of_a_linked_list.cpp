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


void insert_at_head(Node*& head,Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_at_any_pos(Node*& head, Node* tail, int pos, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    } 
    Node* temp = head;
    for (int i = 1; i < pos; i++) {
        temp = temp->next;
        if (temp == NULL) {
            cout << "Invalid" << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

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



int size_linked_list(Node* head) {
    int cnt = 0;
    Node* tmp = head;
    while (tmp != NULL) {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
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

    // Input initial list
    while (true) {
        int val;
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }

    int t;
    cin >> t;
    while (t--) {
        int pos, val;
        cin >> pos >> val;

        int size = size_linked_list(head);

        if (pos > size || pos < 0) {
            cout << "Invalid" << endl;
            continue;
        } else if (pos == size) {
            insert_at_tail(head, tail, val);
        } else if (pos == 0) {
            insert_at_head(head,tail, val);
        } else {
            insert_at_any_pos(head, tail, pos, val);
        }
        print_linked_list(head);
    }

    return 0;
}
