# include<bits/stdc++.h>
using namespace std;
class Node 
{
    public :
        string val;
        Node* next;
        Node* prev;
        Node(string val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void insert_tail(Node* &head, Node* &tail, string val)
{
    Node*  newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    while (true)
    {
        string s;
        cin>>s;
        if(s == "end") break;
        insert_tail(head, tail, s);
    }
    int n;
    cin>>n;
    Node* tmp = head;
    if(head == NULL)
    {
        return 0;
    }
    while (n--)
    {
        string c;
        cin>>c;
        if(c == "visit")
        {
            string address;
            cin>>address;
            Node* newNode = head;
            bool isAvailable = false;
                while (newNode != NULL)
                {
                    if(newNode->val == address)
                    {
                        isAvailable = true;
                        break;
                    }
                    if(newNode->next == NULL)
                    {
                        break;
                    }
                    newNode = newNode->next;
                }
                if(isAvailable == true)
                {
                    tmp = newNode;
                    cout<<tmp->val<<endl;
                }
                else
                {
                    cout<<"Not Available"<<endl;
                }
        }
        else if(c == "prev")
        {
            if(tmp->prev == NULL)
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                cout<<tmp->prev->val<<endl;
                tmp = tmp->prev;
            }
        }
        else if(c == "next"){
            if(tmp->next == NULL)
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                cout<<tmp->next->val<<endl;
                tmp = tmp->next;
            }
        }
        else
        {
             cout<<"Not Available"<<endl;
        }
    }
    return 0;
}