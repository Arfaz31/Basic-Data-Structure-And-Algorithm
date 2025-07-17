#include <bits/stdc++.h>
using namespace std;
int main()
{
   list<string> browser;
   string webAddress;
   while (cin >> webAddress && webAddress != "end")
   {
      browser.push_back(webAddress);
   }

   int q;
   cin >> q;

   auto currentAddress = browser.begin();
   while (q--)
   {
      string cmd;
      cin >> cmd;
      if (cmd == "visit")
      {
         string webName;
         cin >> webName;
         auto isFound = find(browser.begin(), browser.end(), webName);
         if (isFound != browser.end())
         {
            cout << *isFound << endl;
            currentAddress = isFound;
         }
         else
         {
            cout << "Not Available" << endl;
         }
      }
      else if (cmd == "next")
      {
         if (next(currentAddress) != browser.end())
         {
            currentAddress = next(currentAddress);
            cout << *currentAddress << endl;
         }
         else
         {
            cout << "Not Available" << endl;
         }
      }
      else if (cmd == "prev")
      {
         if (currentAddress != browser.begin())
         {
            currentAddress = prev(currentAddress);
            cout << *currentAddress << endl;
         }
         else
         {
            cout << "Not Available" << endl;
         }
      }
   }
   return 0;
}