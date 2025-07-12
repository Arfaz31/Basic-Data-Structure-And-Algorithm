#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next =newNode;
    newNode->prev = tail;
    tail=newNode;

};

bool is_palindrome(Node* head, Node* tail)
{
   Node* temp=head;
   bool isPalindrome=true;
   for(Node* i=head, *j=tail; i!=j && i->prev !=j; i=i->next, j=j->prev)
   {
    if(i->val != j->val)
    {
        isPalindrome = false;
        break;
    }
   }
   return isPalindrome;
}

void print_linked_list(Node* head)
{
    Node* temp=head;
    while(temp !=NULL)
    {
        cout<<temp->val << " ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* head1=NULL;
    Node* tail1=NULL;
 

    while(true)
    {
        int val;
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head1,tail1,val);
    }
   
 bool palindromeCheck = is_palindrome(head1, tail1);
 if(palindromeCheck)
 {
 cout << "YES" << endl;
 }else{
    cout << "NO" << endl;
 }
    
    return 0;
}