#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;        
        Node* right;        
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if (val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        //ber kore ana
        Node* f = q.front();
        q.pop();
        //jabotiyo kaj
        int l,r;
        cin>>l>>r;
        Node* newLeft;
        Node* newRight;
        if(l==-1) newLeft = NULL;
        else newLeft = new Node(l);
        if(r==-1) newRight = NULL;
        else newRight = new Node(r);
        f->left = newLeft;
        f->right = newRight;
        // child gula push
        if(f->left) 
            q.push(f->left);
        if(f->right) 
            q.push(f->right);
    }
    return root;
}
void nodeLevel(Node* root, int l)
{
    queue<pair<Node*,int> >q;
    vector<int>v;
    q.push(make_pair(root,0));
    //q.push({root,0});
    while (!q.empty())
    {
        //ber kora
        pair<Node*, int> parent = q.front();
        Node* node = parent.first;
        int level = parent.second;
        q.pop();
        //kaj
        if(level == l)
        {
            v.push_back(node->val);
        }
        //child push
        if (node->left) 
        {
            q.push(make_pair(node->left, level + 1));
        }
        if (node->right) 
        {
            q.push(make_pair(node->right, level + 1));
        }
    }
    if(v.empty())
    {
        cout<<"Invalid";
    }
    else
    {
        for(int val:v)
        {
            cout<<val<<" ";
        }
    }
}
int main()
{
    Node* root = input_tree();
    int level;
    cin>>level;
    nodeLevel(root,level);
    return 0;
}