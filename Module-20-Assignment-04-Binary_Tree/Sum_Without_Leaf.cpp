#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        if (l != -1)
        {
            f->left = new Node(l);
            q.push(f->left);
        }
        if (r != -1)
        {
            f->right = new Node(r);
            q.push(f->right);
        }
    }
    return root;
};

int sum_without_leaves(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 0;

    int l = sum_without_leaves(root->left);
    int r = sum_without_leaves(root->right);

    return l + r + root->val;
}

int main()
{
    Node *root = input_tree();
    int sum = sum_without_leaves(root);
    cout << sum << endl;

    return 0;
}