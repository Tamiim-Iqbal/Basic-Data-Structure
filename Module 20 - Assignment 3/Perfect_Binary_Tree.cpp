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
int count(Node* root)
{
    if (root == NULL) return 0;
    int l = count(root->left);
    int r = count(root->right);
    return l+r+1;
}
int maxHeight(Node* root)
{
    if (root == NULL) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l,r)+1;
}
int main()
{
    Node* root = input_tree();
    int cnt = count(root);
    int hgt = maxHeight(root);
    if (cnt == pow(2,hgt)-1) cout<<"YES";
    else cout<<"NO";
    return 0;
}



// 2
// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//         int val;
//         Node* left;        
//         Node* right;        
//     Node(int val)
//     {
//         this->val=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// Node* input_tree()
// {
//     int val;
//     cin>>val;
//     Node* root;
//     if (val == -1) root = NULL;
//     else root = new Node(val);

//     queue<Node*>q;
//     if(root) q.push(root);
//     while(!q.empty())
//     {
//         //ber kore ana
//         Node* f = q.front();
//         q.pop();
//         //jabotiyo kaj
//         int l,r;
//         cin>>l>>r;
//         Node* newLeft;
//         Node* newRight;
//         if(l==-1) newLeft = NULL;
//         else newLeft = new Node(l);
//         if(r==-1) newRight = NULL;
//         else newRight = new Node(r);
//         f->left = newLeft;
//         f->right = newRight;
//         // child gula push
//         if(f->left) 
//             q.push(f->left);
//         if(f->right) 
//             q.push(f->right);
//     }
//     return root;
// }
// bool ans(Node* root)
// {
//     if (root->left == NULL && root->right == NULL) return true;
//     if (root->left == NULL || root->right==NULL) return false;
//     bool l = ans(root->left);
//     bool r = ans (root->right);
//     if (l == false || r == false) return false;
//     else return true;
// }
// int main()
// {
//     Node* root = input_tree();
//     bool res = ans(root);
//     if (res == false) cout<<"NO";
//     else cout<<"YES";
//     return 0;
// }