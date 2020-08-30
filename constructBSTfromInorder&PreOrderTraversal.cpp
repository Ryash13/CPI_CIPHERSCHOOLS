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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder,0,preorder.size(),inorder,0,inorder.size());
    }
    
    TreeNode *helper(vector<int>&preorder,int i , int j , vector<int> &inorder, int k , int l)
    {
        if(i >= j || k >= l)
            return NULL;
        int middle = preorder[i];
        auto f = find(inorder.begin()+k , inorder.begin()+l , middle);
        
        int dis = f - inorder.begin() - k;
        TreeNode *root = new TreeNode(middle);
        root->left = helper(preorder,i+1 , i+1+dis , inorder,k,k+dis);
        root->right = helper(preorder,i+1+dis , j  , inorder , k+dis+1 , l);
        return root;
    }
};
