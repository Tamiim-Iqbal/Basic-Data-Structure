// #include<bits/stdc++.h>
// vector<int> reverseLevelOrder(TreeNode<int> *root){
//     // Write your code here.
//     vector<int> v;
//     queue<TreeNode<int>*> q;
//     if(root) q.push(root);
//     while(!q.empty())
//     {
//         //ber 
//         TreeNode<int>* node = q.front();
//         q.pop();
//         //kaj
//         v.push_back(node->val);
//         //child
//         if(node->left) q.push(node->left);
//         if(node->right) q.push(node->right);
//     }
//     reverse(v.begin(),v.end());
//     return v;
// }