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
    bool hasPathSum(TreeNode* root, int sum) {
        if(root == NULL)
            return false;
        if(root->val == sum && root->left == NULL && root->right == NULL)
            return true;
        if(root->left != NULL && hasPathSum(root->left , sum-root->val))
            return true;
        if(root->right != NULL && hasPathSum(root->right , sum-root->val))
            return true;
        
        
        return false;
    }
};
