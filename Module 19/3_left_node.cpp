// vector<int> getLeftView(TreeNode<int> *root)
// {
//     //    Write your code here
//     bool frq[3005] = {false};
//     queue<pair<TreeNode<int>*,int>> q;
//     if(root) q.push({root,1});
//     vector<int> v;
//     while (!q.empty())
//     {
//         //ber kora
//         pair<TreeNode<int>*,int>parent = q.front();
//         q.pop();
//         TreeNode<int>* node = parent.first;
//         int level = parent.second;
        
//         //kaj 
//         if (frq[level] == false)
//         {
//             v.push_back(node->data);
//             frq[level] = true;
//         }
//         //child 
//         if (node->left) q.push({node->left,level+1});
//         if (node->right) q.push({node->right,level+1});
//     }
//     return v;
// }