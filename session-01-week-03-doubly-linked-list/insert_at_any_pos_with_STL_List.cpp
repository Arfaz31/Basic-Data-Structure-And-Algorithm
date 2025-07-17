#include <bits/stdc++.h>
using namespace std;

void print_forward(list<int> &l) // reference nileu hoy na nileu hoy
{
    for (int ele : l)
    {
        cout << ele << " ";
    }
    cout << endl;
}

void print_backward(list<int> l) // ekhane reference &l neoa hoyni karon fun() er vitore reverse kore main() fun er main list e reverse hye jabe ekhane shudhu reverse kore print korte hobe not main list reverse korte hobe.
{
    l.reverse();
    for (int ele : l)
    {
        cout << ele << " ";
    }
    cout << endl;
};

int main()
{

    list<int> l;
    int q;
    cin >> q;

    while (q--)
    {
        int idx, v;
        cin >> idx >> v;
        int sz = l.size();
        if (idx < 0 || idx > sz)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            if (idx == 0)
            {

                l.push_front(v);
                print_forward(l);
                print_backward(l);
            }

            else if (idx == sz)
            {

                l.push_back(v);
                print_forward(l);
                print_backward(l);
            }
            else
            {
                auto it = next(l.begin(), idx);
                l.insert(it, v);
                print_forward(l);
                print_backward(l);
            }
        }
    }

    return 0;
}