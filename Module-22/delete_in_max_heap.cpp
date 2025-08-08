#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int val)
{

    v.push_back(val);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] < v[cur_idx])
        {
            swap(v[parent_idx], v[cur_idx]);
        }
        else
            break;
        cur_idx = parent_idx;
    }
}

void delete_heap(vector<int> &v)
{
    cout << v[0] << "-Deleted" << endl;
    v[0] = v.back();
    v.pop_back();
    int cur_idx = 0;
    while (true)
    {
        int left_idx = 2 * cur_idx + 1;
        int right_idx = 2 * cur_idx + 2;
        int left_val = INT_MIN, right_val = INT_MIN;
        if (left_idx < v.size())
            left_val = v[left_idx];
        if (right_idx < v.size())
            right_val = v[right_idx];
        if (left_val >= right_val && left_val > v[cur_idx])
        {
            swap(v[cur_idx], v[left_idx]);
            cur_idx = left_idx;
        }
        else if (right_val > left_val && right_val > v[cur_idx])
        {
            swap(v[cur_idx], v[right_idx]);
            cur_idx = right_idx;
        }
        else
        {
            break;
        }
    }
}
void print_heap(vector<int> &v)
{

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_heap(v, val);
    }
    if (!v.empty())
    {
        delete_heap(v);
        print_heap(v);
        delete_heap(v);
        print_heap(v);
    }

    return 0;
}