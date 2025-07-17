#include <bits/stdc++.h>
using namespace std;

void print_left_to_right(list<int> l)
{
    cout << "L -> ";
    for (int ele : l)
    {
        cout << ele << " ";
    }
    cout << endl;
}
void print_right_to_left(list<int> l)
{
    l.reverse();
    cout << "R -> ";
    for (int ele : l)
    {
        cout << ele << " ";
    }
    cout << endl;
}

int main()
{
    list<int> l;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        int sz = l.size();
        if (x == 0)
        {
            l.push_front(v);
            print_left_to_right(l);
            print_right_to_left(l);
        }
        else if (x == 1)
        {
            l.push_back(v);
            print_left_to_right(l);
            print_right_to_left(l);
        }
        else if (x == 2)
        {
            if (v >= 0 && v < sz)
            {
                l.erase(next(l.begin(), v));
            }
            print_left_to_right(l);
            print_right_to_left(l);
        }
    }
    return 0;
}