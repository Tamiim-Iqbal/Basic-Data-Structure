#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int v;
        Node* next;
    Node(int v)
    {
        this->v=v;
        this->next=NULL;
    }
};
void print_linked_list(Node* head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->v<<" ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = new Node (10);
    Node *a = new Node (20);
    Node *b = new Node (30);
    Node *c = new Node (40);
    Node *d = new Node (50);
    
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

    print_linked_list(head);
    return 0;
}