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
    void flatten(TreeNode* root) {
        if(root==nullptr)
            return;
        TreeNode *head = root;
        while(head->right || head->left)
        {
            if(head->left)
            {
                TreeNode *temp = head->left;
                while(temp->right)
                    temp = temp->right;
                temp->right = head->right;
                head->right = head->left;
                head->left = NULL;
            }
            head = head->right;
        }
    }
};
