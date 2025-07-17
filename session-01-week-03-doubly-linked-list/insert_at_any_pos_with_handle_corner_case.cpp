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
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
};

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    else
    {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
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
            Node *new_node = new Node(val);
            Node *tmp = head;
            for (int i = 1; i < idx; i++)
            {
                tmp = tmp->next;
            }
            new_node->next = tmp->next;
            if (tmp->next != NULL)
            {
                tmp->next->prev = new_node;
            }
            tmp->next = new_node;
            new_node->prev = tmp;
            print_forward(head);
            print_backward(tail);
            // Function শেষ এখানে, তাই return না লিখলেও ঠিক আছে
        }
    }
};

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
    //     int val;
    //     while(cin >> val)
    //     {
    //       if(val == -1) break;
    //       insert_at_tail(head, tail, val);
    //     }

    //   insert_at_any_pos(head , tail,  2 , 200);
    //    print_forward(head);

    return 0;
}