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
bool search(Node* root, int x)
{
    if (root == NULL) return false;
    if (root->val == x) return true;
    if(x < root->val)
    {
        return search(root->left,x);
    }
    else 
    {
        return search(root->right,x);
    }
}
int main()
{
    Node* root = input_tree();
    //level_order(root);
    if (search(root,100)) cout<<"Yes, Available"<<endl;
    else cout<<"No, Not Available"<<endl;

    return 0;
}