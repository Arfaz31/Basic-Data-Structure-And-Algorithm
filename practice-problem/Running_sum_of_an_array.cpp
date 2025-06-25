#include <bits/stdc++.h>
using namespace std;

void runningSum(vector<int>& v) {
    for (int i = 1; i < v.size(); i++) {
        v[i] += v[i - 1]; 
    }

    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    runningSum(v);
    return 0;
}
