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
}

void traverse_left(Node *root)
{
    if (root == NULL)
        return;

    if (root->left)
    {
        traverse_left(root->left);
        cout << root->val << " ";
    }
    else if (root->right)
    {
        traverse_left(root->right);
        cout << root->val << " ";
    }
    else
    {
        // leaf node
        cout << root->val << " ";
    }
}

void traverse_right(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    if (root->right)
    {
        traverse_right(root->right);
    }
    else if (root->left)
    {
        traverse_right(root->left);
    }
}

int main()
{
    Node *root = input_tree();
    traverse_left(root->left);
    cout << root->val << " ";
    traverse_right(root->right);
    return 0;
}

// another solution
//  void traverse_left_to_right(Node *root)
//  {
//      if (!root)
//          return;

//     vector<int> left_path, right_path;

//     Node *temp = root->left;
//     while (temp)
//     {
//         left_path.push_back(temp->val);
//         if (temp->left)
//             temp = temp->left;
//         else
//             temp = temp->right;
//     }
//     reverse(left_path.begin(), left_path.end()); //reverse left boundary

//     left_path.push_back(root->val); // add root value

//     temp = root->right;
//     while (temp)
//     {
//         right_path.push_back(temp->val);
//         if (temp->right)
//             temp = temp->right;
//         else
//             temp = temp->left;
//     }

//     for (int v : left_path)
//     {
//         cout << v << " ";
//     }

//     for (int v : right_path)
//     {
//         cout << v << " ";
//     }
// }
