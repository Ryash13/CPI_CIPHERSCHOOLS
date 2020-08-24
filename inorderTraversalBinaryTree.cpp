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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vec;
        if(!root)
            return vec;
        TreeNode *t = root;
        stack<TreeNode*> stk;
        
        while(true)
        {
            while(t)
            {
                stk.push(t);
                t = t->left;
            }
            if(stk.empty())
                break;
            t = stk.top();
            stk.pop();
            vec.push_back(t->val);
            t = t->right;
        }
        return vec;
    }
};
