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
int sum_ans(Node* root)
{
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }
    int l = sum_ans(root->left);
    int r = sum_ans(root->right);
    return l+r+root->val;
}
int main()
{
    Node* root = input_tree();
    cout<<sum_ans(root)<<endl;
    return 0;
}