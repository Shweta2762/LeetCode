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
    bool symmetricHelper(TreeNode* root, TreeNode*root2)
    {
        if(root==NULL && root2==NULL)
            return true;
        else if(root==NULL || root2==NULL)
            return false;
        return (root->val==root2->val && symmetricHelper(root->left,root2->right)&&symmetricHelper(root->right,root2->left));
    }
    bool isSymmetric(TreeNode* root) {
        return symmetricHelper(root,root);
    }
};