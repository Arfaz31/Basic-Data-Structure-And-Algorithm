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

    int n;
    cin >> n;
 for(int i=0; i<n; i++)
 {
    int val;
    cin>>val;
    insert_at_tail(head, tail, val);
 }

 int tar_val;
 cin>>tar_val;

  
 int idx =0;
 bool flag =false;

 Node* temp = head;
 while(temp != NULL)
 {
    if(temp->val == tar_val)
    {
        cout<<idx << endl;
        flag = true;
        break;
    }
    temp = temp->next;
    idx++;
 }

 if(flag==false)
 {
    cout<< -1 << endl;
 }


    return 0;
}
