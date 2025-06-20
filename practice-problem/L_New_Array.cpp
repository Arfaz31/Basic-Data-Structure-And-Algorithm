#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n), c;

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    c = b;          
    c.insert(c.end(), a.begin(), a.end()); 

    // c.insert(c.end(), b.begin(), b.end()); // B যুক্ত করো
    // c.insert(c.end(), a.begin(), a.end()); // তারপর A

    for (int i = 0; i < c.size(); i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}



//solve with function

// #include <bits/stdc++.h>
// using namespace std;

// // Function to merge two arrays B followed by A
// vector<int> mergeArrays(const vector<int>& a, const vector<int>& b) {
//     vector<int> c;

//     // প্রথমে B push_back করো
//     for (int x : b) {
//         c.push_back(x);
//     }

//     // তারপর A push_back করো
//     for (int x : a) {
//         c.push_back(x);
//     }

//     return c;
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> a(n), b(n);

//     for (int i = 0; i < n; i++) cin >> a[i];
//     for (int i = 0; i < n; i++) cin >> b[i];

//     vector<int> c = mergeArrays(a, b); // Function call

//     // Output result
//     for (int x : c) {
//         cout << x << " ";
//     }
//     cout << endl;

//     return 0;
// }
