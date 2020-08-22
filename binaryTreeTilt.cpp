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
    int findTilt(TreeNode* root) {
        int tilt = 0;
        sum(root,tilt);
        return tilt;
    }
    int sum(TreeNode *node , int &tilt)
    {
        if(!node)
            return 0;
        int left = sum(node->left,tilt);
        int right = sum(node->right,tilt);
        tilt = tilt+ abs(left-right);
        return node->val + left + right;
    }
};
