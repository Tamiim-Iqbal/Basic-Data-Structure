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
void insert_at_head(Node* &head, int v)
{
    Node* newNode = new Node (v);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"Inserted at head"<<endl;
}
void delete_from_position(Node* head, int pos)
{
    Node* tmp = head;
    for (int i=1; i<pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout<<"Deleted position "<<pos<<endl;
}
void delete_head(Node* &head)
{
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout<<"Deleted head"<<endl;
}
int main()
{
    Node* head = NULL;
    while(true)
    {
        cout<<endl;
        cout<<"Option 1: Insert at head "<<endl;
        cout<<"Option 2: Insert at tail "<<endl;
        cout<<"Option 3: Insert at any position "<<endl;
        cout<<"Option 4: Delete from position "<<endl;
        cout<<"Option 5: Delete head "<<endl;
        cout<<"Option 6: Print Linked List "<<endl;
        cout<<"Option 7: Terminate "<<endl;
        int op; 
        cin>>op;
        if (op == 1)
        {
            int v; 
            cout<<"Enter Value: ";
            cin>>v;
            insert_at_head(head,v); 
        }
        else if (op == 2)
        {
            int v; 
            cout<<"Enter Value: ";
            cin>>v;
            insert_at_tail(head,v);
        }
        else if (op == 3)
        {
            
            int pos; 
            cout<<"Enter position: ";
            cin>>pos;
            int v; 
            cout<<"Enter value: ";
            cin>>v;
            if (pos==0)
            {
                insert_at_head(head,v);
            }
            else
            {
                insert_at_position(head,pos,v);
            } 
        }
        else if (op == 4)
        {
            int pos;
            cout<<"Enter position: ";
            cin>>pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head,pos);
            }
        }
        else if (op == 5)
        {
            delete_head(head);
        }
        else if (op == 6)
        {
            print_linked_list(head);
        }
        else if (op == 7)
        {
            cout<<endl<<"Terminated"<<endl<<endl;
            break;
        }
    }
    return 0;
}