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
void level_order(Node* root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node* par = q.front();
        q.pop();
        cout<<par->val<<" ";
        if (par->left != NULL) q.push(par->left);
        if (par->right != NULL) q.push(par->right);
    }
}
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if (val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*>q;
    if (root) q.push(root);
    while (!q.empty())
    {
        Node* par = q.front();
        q.pop();
        int l, r;
        cin>>l>>r;
        Node* nleft;
        Node* nright;
        if (l==-1) nleft = NULL;
        else nleft = new Node(l);
        if (r==-1) nright = NULL;
        else nright = new Node(r);
        par->left = nleft;
        par->right = nright;

        if(par->left) q.push(par->left);
        if(par->right) q.push(par->right);
    }
    return root;
}
void insert(Node* &root, int x)
{
    if (root == NULL) 
    {
        root = new Node(x);
        return;
    }
    if (x<root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else 
        {
            insert(root->left,x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else 
        {
            insert(root->right,x);
        }
    }
}
int main()
{
    Node* root = input_tree();
    insert(root,13);
    insert(root,27);
    level_order(root);

    return 0;
}