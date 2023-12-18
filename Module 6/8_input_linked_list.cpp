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
void insert_at_tail(Node* &head, int v)
{
    Node* newNode = new Node(v);

    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    //tmp akhn last node e
    tmp->next=newNode;   
}
void print_linked_list(Node* head)
{
    Node* tmp = head;
    cout<<endl<<"Linked List: ";
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
int main()
{
    int v;
    Node* head = NULL;
    cout<<"Enter value: (input -1 to stop)"<<endl;
    while(true)
    {
        cin>>v;
        if (v == -1) break;
        insert_at_tail(head,v);  
    }
    print_linked_list(head);
    return 0;
}