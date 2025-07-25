#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    list<int> l1;

    void push(int val)
    {
        l1.push_back(val);
    }
    void pop()
    {
        l1.pop_back();
    }
    int top()
    {
        return l1.back();
    }
    int size()
    {
        return l1.size();
    }
    bool empty()
    {
        return l1.empty();
    }
};

class MyQueue
{
public:
    list<int> l2;
    void push(int val)
    {
        l2.push_back(val);
    }

    void pop()
    {
        l2.pop_front();
    }

    int front()
    {
        return l2.front();
    }

    int back()
    {
        return l2.back();
    }

    int size()
    {
        return l2.size();
    }

    bool empty()
    {
        return l2.empty();
    }
};

int main()
{
    MyStack st;
    MyQueue q;

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (st.size() != q.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        q.pop();
    }
    cout << "YES" << endl;

    return 0;

    return 0;
}