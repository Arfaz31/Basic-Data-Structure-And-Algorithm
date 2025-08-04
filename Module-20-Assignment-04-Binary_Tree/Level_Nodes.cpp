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

int max_depth(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 0;
    int l = max_depth(root->left);
    int r = max_depth(root->right);
    return (max(l, r) + 1);
}

void level_order_nodes(Node *root, int x)
{
    if (!root)
        return;
    queue<pair<Node *, int>> q;
    if (root)
        q.push({root, 0});
    while (!q.empty())
    {
        auto [node, level] = q.front();
        q.pop();
        if (level == x)
        {
            cout << node->val << " ";
        }
        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }
}

int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    int mx = max_depth(root);

    if (x > mx || x < 0)
    {
        cout << "Invalid" << endl;
        return 0;
    }
    level_order_nodes(root, x);

    return 0;
}