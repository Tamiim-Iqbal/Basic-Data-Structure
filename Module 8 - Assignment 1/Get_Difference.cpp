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
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<< " ";
        tmp=tmp->next;
    }
}
int min_num(Node* head){
    if(head->next == NULL)
    {
        return head->val;
    }
    int min = min_num(head->next);
    if(head->val < min)
    {
        return head->val;
    }
    else
    {
        return min;
    }
}

int max_num(Node* head){
    if(head->next == NULL)
    {
        return head->val;
    }
    int max = max_num(head->next);
    if(head->val > max)
    {
        return head->val;
    }
    else
    {
        return max;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;  
    while (true)
    {
       int v;
       cin>>v;
       if(v == -1) break;
       insert_at_tail(head, tail, v);
    }
    int min = min_num(head);
    int max = max_num(head);

    int dif = max - min;
    cout<<dif<<endl;;
    return 0;
}

