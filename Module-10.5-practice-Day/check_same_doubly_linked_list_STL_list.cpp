#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l1, l2;
    int val;

    // First list input
    while (cin >> val && val != -1) {
        l1.push_back(val);
    }

    // Second list input
    while (cin >> val && val != -1) {
        l2.push_back(val);
    }

    // Step 1: Size check
    if (l1.size() != l2.size()) {
        cout << "NO" << endl;
        return 0;
    }

    // Step 2: Value check
    auto it1 = l1.begin();
    auto it2 = l2.begin();
    while (it1 != l1.end()) {
        if (*it1 != *it2) {
            cout << "NO" << endl;
            return 0;
        }
        it1++;
        it2++;
    }

    cout << "YES" << endl;
    return 0;
}
