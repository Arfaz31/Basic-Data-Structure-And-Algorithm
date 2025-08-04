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
        return 1;
    int l = max_depth(root->left);
    int r = max_depth(root->right);
    return (max(l, r) + 1);
}

int count_nodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l + r + 1;
}

int main()
{
    Node *root = input_tree();
    int totalNodes = count_nodes(root);
    int mx_depth = max_depth(root);
    int nodes_of_perfect_bTree = pow(2, mx_depth) - 1;
    if (totalNodes == nodes_of_perfect_bTree)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}