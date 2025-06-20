#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> freq(1005, 0); 

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        freq[v[i]]++; 
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(freq[v[i] + 1] > 0) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
