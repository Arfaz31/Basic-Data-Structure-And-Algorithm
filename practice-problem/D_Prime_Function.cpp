#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;

    // check for even numbers
    if (n % 2 == 0) return false;

    // check odd divisors from 3 to sqrt(n)
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (isPrime(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
