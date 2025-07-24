#include <bits/stdc++.h>
using namespace std;

class Mystack
{
public:
    list<int> l;
    void push(int x)
    {
        l.push_back(x);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    Mystack st1, st2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    if (st1.size() != st2.size())
    {
        cout << "NO";
        return 0;
    }
    while (!st1.empty())
    {
        if (st1.top() != st2.top())
        {
            cout << "NO";
            return 0;
        }
        st1.pop();
        st2.pop();
    }
    cout << "YES";

    return 0;
}