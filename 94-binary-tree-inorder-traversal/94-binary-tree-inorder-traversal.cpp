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
    vector<int> inorderhelp(TreeNode* root, vector<int>&ree)
    {
        if(root!=NULL)
        {
            inorderhelp(root->left,ree);
            ree.push_back(root->val);
            inorderhelp(root->right,ree);
        }
        return ree;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ree;
        return inorderhelp(root, ree);
    }
};