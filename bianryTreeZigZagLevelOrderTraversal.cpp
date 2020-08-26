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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(!root)
            return result;
        queue<TreeNode*> q;
        q.push(root);
        int len;
        bool flip = false;
        TreeNode *currNode;
        while(q.size())
        {
            len = q.size();
            vector<int> temp(len);
            for(int i=0;i<len;i++)
            {
                currNode = q.front();
                temp[i] = currNode->val;
                if(currNode->left)
                    q.push(currNode->left);
                if(currNode->right)
                    q.push(currNode->right);
                q.pop();
            }
            if(flip)
                reverse(begin(temp),end(temp));
                flip = !flip;
            result.push_back(temp);
        }
        return result;
    }
};
