#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;

    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};

class cmp
{
public:
    bool operator()(Student s1, Student s2)
    {
        if (s1.name == s2.name)
        {
            return s1.roll < s2.roll; // roll descending → bigger roll should come first → s1 roll smaller মানে s1 priority কম → true
        }
        else
        {
            return s1.name > s2.name; // name ascending → smaller name should come first → s1 name bigger মানে s1 priority কম → true
        }
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        cin >> name >> roll;
        Student s(name, roll);
        pq.push(s);
    }

    while (!pq.empty())
    {
        Student s = pq.top();
        pq.pop();
        cout << s.name << " " << s.roll << endl;
    }

    return 0;
}
