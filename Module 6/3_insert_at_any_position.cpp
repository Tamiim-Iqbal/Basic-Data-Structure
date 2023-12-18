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
        cout<<endl<<"Inserted at head"<<endl;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    //tmp akhn last node e
    tmp->next=newNode;    
     cout<<endl<<"Inserted at tail"<<endl;
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
    cout<<endl;
}
void insert_at_position(Node* head, int pos, int v)
{
    Node* newNode = new Node (v);
    Node* tmp = head;
    for (int i=1; i<pos-1; i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<"Inserted at: "<<pos<<endl;
}
int main()
{
    Node* head = NULL;
    while(true)
    {
        cout<<endl;
        cout<<"Option 1: Insert at tail "<<endl;
        cout<<"Option 2: Insert at any position "<<endl;
        cout<<"Option 3: Print Linked List "<<endl;
        cout<<"Option 4: Terminate "<<endl;
        int op; 
        cin>>op;
        if (op == 1)
        {
            int v; 
            cout<<"Enter Value: ";
            cin>>v;
            insert_at_tail(head,v);
        }
        else if (op == 2)
        {
            
            int pos; 
            cout<<"Enter position: ";
            cin>>pos;
            int v; 
            cout<<"Enter value: ";
            cin>>v;
            insert_at_position(head,pos,v);
        }
        else if (op == 3)
        {
            print_linked_list(head);
        }
        else if (op == 4)
        {
            cout<<endl<<"Terminated"<<endl<<endl;
            break;
        }
    }
    return 0;
}