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
        int left_l,right_r;
        if(root==NULL)
            return 0;
        if(root->left==0 && root->right==NULL)
            return 1;
        left_l=minDepth(root->left);
        right_r=minDepth(root->right);
        if(left_l==0)
            return right_r+1;
        if(right_r==0)
            return left_l+1;
        return min(left_l,right_r)+1;
    }
};