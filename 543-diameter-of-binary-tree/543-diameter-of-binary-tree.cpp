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
    int ans=1;
    int diameterOfBinaryTree(TreeNode* root) {
        // int ans=1;
        height(root,ans);
        return ans-1;
    }
    int height(TreeNode* root,int &ans)
    {
        if(root==NULL)
            return 0;
        int l=height(root->left,ans);
        int r=height(root->right,ans);
        ans=max(ans,1+l+r);
        return 1+max(l,r);
    }
};