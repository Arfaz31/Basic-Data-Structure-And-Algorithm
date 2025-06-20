#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);  // 26 lowercase letter

    for (char ch : s) {
        freq[ch - 'a']++;  // 'a' = index 0, 'b' = index 1 ...
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            char letter = 'a' + i;  //'a'+0 = 97 =>	'a' 	'a'+1 = 98 => 'b'
            cout << letter << " : " << freq[i] << endl;
        }
    }

    return 0;
}
