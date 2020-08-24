/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth = 0;
    
    int dfs(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        int ldepth = dfs(root->left);
        int rdepth = dfs(root->right);
        
        if(ldepth + rdepth > maxDepth)
            maxDepth = ldepth + rdepth;
        
        return max(ldepth+1 , rdepth+1);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        
        return maxDepth;
    }
};
