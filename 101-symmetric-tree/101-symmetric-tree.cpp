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
//     TreeNode *mirrorTree(TreeNode *root)
//     {
//         TreeNode *ree=root;
//         if(root==NULL)
//             return 0;
//         mirrorTree(root->left);
//         mirrorTree(root->right);
//         swap(root->left,root->right);
//         return ree;
//     }
    
//     bool isMirrorHelp(TreeNode *root1, TreeNode *root2)
//     {
//         if(root1==NULL && root2==NULL)
//             return true;
//         if(root1&&root2&&root1->val==root2->val)
//             return isMirrorHelp(root1->left,root2->left)&&isMirrorHelp(root1->right,root2->right);
        
//         return false;
//     }
//     bool isSymmetric(TreeNode* root) {
//         TreeNode* mirror=mirrorTree(root);
//         return isMirrorHelp(root,mirror);
//     }
     bool check(TreeNode* root1,TreeNode* root2){
        if(root1==nullptr or root2==nullptr){
            return root1==root2;
        }
        return root1->val==root2->val and check(root1->left,root2->right) and check(root1->right,root2->left);
    }
    bool isSymmetric(TreeNode* root) {
        return check(root,root);
    }
};