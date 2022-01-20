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
    int minDepth(TreeNode* root) {
        int l,r;
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
            return 1;
        //if(root->left)
            l=minDepth(root->left);
        //if(root->right)
            r=minDepth(root->right);
        if(l==0)
            return r+1;
        if(r==0)
            return l+1;
        return min(l,r)+1;
        
        
    }
};