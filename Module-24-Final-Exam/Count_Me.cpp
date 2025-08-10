#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;     // t = 5 পড়বে, কিন্তু newline থাকবে
    cin.ignore(); // newline পড়ে ফেলে দিলো
    while (t--)
    {
        string s;
        getline(cin, s); // এবার s তে আসল লাইন পড়বে, leftover newline-এর কারণে সমস্যা হবে না
        stringstream ss(s);
        string word;
        map<string, int> mp;
        int count = 0;
        string max_find_word;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > count)
            {
                count = mp[word];
                max_find_word = word;
            }
        }
        cout << max_find_word << " " << count << endl;
    }

    return 0;
}