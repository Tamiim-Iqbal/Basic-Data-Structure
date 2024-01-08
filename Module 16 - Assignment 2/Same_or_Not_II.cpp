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
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class Stack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete deleteNode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
class Queue
{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void push(int val)
        {
            sz++;
            Node* newNode = new Node(val);
            if (head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = tail->next;
        }
        void pop()
        {
            sz--;
            Node* deleteNode = head;
            head = head->next;
            if (head == NULL)
            {
                tail = NULL;
                delete deleteNode;
                return;
            }
            head->prev = NULL;
        }
        int front()
        {
            return head->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if (sz==0) return true;
            else return false;
        }
};
int main()
{
    int n,m;
    cin>>n>>m;
    Stack s;
    Queue q;
    for (int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        s.push(x);
    }
    for (int i=1; i<=m; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    if (n != m)
    {
        cout<<"NO";
    }
    else
    {
        bool flag = true;
        while(!s.empty())
        {
            if (s.top() != q.front())
            {
                flag = false;
                break;
            }
            else
            {
                s.pop();
                q.pop();
            }
        }
        if (flag==true) cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}