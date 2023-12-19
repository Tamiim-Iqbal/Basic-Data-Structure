#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
// void insert_at_tail(Node* &head, int v)
// {
//     Node* newNode = new Node(v);

//     if(head == NULL)
//     {
//         head = newNode;
//         return;
//     }
//     Node* tmp = head;
//     while (tmp->next != NULL)
//     {
//         tmp=tmp->next;
//     }
//     //tmp akhn last node e
//     tmp->next=newNode;   
// }
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int search(Node* head, int x)
{
    Node* tmp = head;
    int ind = 0;
    while (tmp != NULL) 
    {
        if (tmp->val == x) 
        {
            return ind;
        }
        tmp = tmp->next;
        ind++;
    }
    return -1;
}
int main()
{
    //Node *tail = NULL;  
    int n;
    cin>>n;
    while (n--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (true)
        {
            int v;
            cin>>v;
            if(v == -1) break;
            insert_at_tail(head,tail,v);
        }
        int x;
        cin>>x;
        int ans = search(head, x);
        cout<<ans<<endl;
    }
    return 0;
}
