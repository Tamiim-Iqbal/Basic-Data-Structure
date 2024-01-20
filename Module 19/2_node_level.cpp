// int nodeLevel(TreeNode<int>* root, int searchedValue)
// {
//     // Write your code here.
//     queue<pair<TreeNode<int>*,int>>q;
//     //q.push(make_pair(root,1));
//     q.push({root,1});
//     while (!q.empty())
//     {
//         //ber kora
//         pair<TreeNode<int>*, int> parent = q.front();
//         TreeNode<int>* node = parent.first;
//         int level = parent.second;
//         q.pop();
//         //kaj
//         if(node->val == searchedValue)
//         {
//             return level;
//         }
//         //child push
//         if (node->left) 
//         {
//             q.push({node->left, level + 1});
//         }
//         if (node->right) 
//         {
//             q.push({node->right, level + 1});
//         }
//     }
// }