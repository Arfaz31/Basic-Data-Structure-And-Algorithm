#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    for (int i = 0; i < q; i++)
    {
        int val;
        cin >> val;
        int flag = 0;
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == val)
            {
                flag = 1;
                break;
            }
            else if (a[mid] > val)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (flag == 1)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}

// Time Complexity: O((n + q) * log n)

// 🔄 Step-by-step Execution:

// nums = [1, 3, 5, 6]
// target = 2

// l = 0, r = 3 (nums.size() - 1)

// ➤ Iteration 1:

// mid = (0 + 3) / 2 = 1
// nums[mid] = 3

// এখন:

//     3 > 2, তাই r = mid - 1 = 0

// l = 0, r = 0

// ➤ Iteration 2:

// mid = (0 + 0) / 2 = 0
// nums[mid] = 1

// এখন:

//     1 < 2, তাই l = mid + 1 = 1

// l = 1, r = 0

// ✅ Loop ends:

// while(l <= r) শর্ত ভঙ্গ হয়, কারণ l = 1 > r = 0