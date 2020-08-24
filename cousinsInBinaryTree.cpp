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
    
    void func(TreeNode *root, int x , int y , int &hx , int &hy , int &px ,int &py , int h , int parent)
    {
        if(!root)
            return;
        if(root->val == x)
        {
            hx = h;
            px = parent;
        }
        if(root->val == y)
        {
            hy = h;
            py = parent;
        }
        
        func(root->left,x,y,hx,hy,px,py,h+1,root->val);
        func(root->right,x,y,hx,hy,px,py,h+1,root->val);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        int hx = 0;
        int hy = 0;
        int x_parent = -1 , y_parent = -1;
        func(root,x,y,hx,hy,x_parent,y_parent,0,root->val);
        if(hx==hy && x_parent != y_parent)
            return true;
        return false;
    }
};
