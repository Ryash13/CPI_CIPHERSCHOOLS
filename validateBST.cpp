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
    bool mb;
    int mp;
    bool traverse(TreeNode *root)
    {
        int last_val = 0;
        bool res = true;
        if(root->left)
            res &= traverse(root->left);
        if(mb && mp >= root->val)
            return false;
        mb = true;
        mp = root->val;
        if(res && root->right)
            res &= traverse(root->right);
        
        return res;
    }
    
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
            return true;
        mb = false;
        mp = INT_MIN;
        return traverse(root);
    }
};
