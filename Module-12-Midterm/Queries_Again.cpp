#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
};

int size_of_linked_list(Node *head)
{
    int sz = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        sz++;
        temp = temp->next;
    }
    return sz;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_any_pos(Node *&head, Node *&tail, int idx, int val)
{
    int sz = size_of_linked_list(head);
    if (idx < 0 || idx > sz)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        if (idx == 0)
        {
            insert_at_head(head, tail, val);
            print_forward(head);
            print_backward(tail);
            return;
        }

        if (idx == sz)
        {
            insert_at_tail(head, tail, val);
            print_forward(head);
            print_backward(tail);
            return;
        }
        else
        {
            Node *newNode = new Node(val);
            Node *temp = head;
            for (int i = 1; i < idx; i++)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            if (temp->next != NULL)
            {
                temp->next->prev = newNode;
            }
            temp->next = newNode;
            newNode->prev = temp;
            print_forward(head);
            print_backward(tail);
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        insert_at_any_pos(head, tail, x, v);
    }

    return 0;
}