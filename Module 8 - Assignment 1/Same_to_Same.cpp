#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node(int val)
        {
            this->val = val;
            this->next = NULL;
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
int size_count(Node* head){
    Node* temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int main(){
    Node* head_1 = NULL;
    Node* tail_1 = NULL;  

    Node* head_2 = NULL;
    Node* tail_2 = NULL;  

    while (true)
    {
       int v;
       cin>>v;
       if(v == -1) break;
       insert_at_tail(head_1, tail_1, v);
    }
    while (true)
    {
       int v;
       cin>>v;
       if(v == -1) break;
       insert_at_tail(head_2, tail_2, v);
    }

    int size_1 = size_count(head_1);
    int size_2 = size_count(head_2);

    if(size_1 != size_2)
    {
        cout<<"NO";
        return 0;
    }

    Node* tmp1 = head_1;
    Node* tmp2 = head_2;
    bool flag = true;
    while (true)
    {
        if(tmp1 == NULL || tmp2 == NULL)
        {
            break;
        }
        if(tmp1->val != tmp2->val)
        {
            flag = false;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    
    if(flag==true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}