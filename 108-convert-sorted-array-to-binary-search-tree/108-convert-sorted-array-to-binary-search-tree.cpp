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
    //TreeNode* newNode(int val);
    TreeNode *sortedArrayhelp(vector<int>&nums,int start,int end)
    {
        if(end-start+1<1)
            return NULL;
        int mid=(start+end)/2;
        //TreeNode *root = newNode(nums[mid]);
        TreeNode *root=new TreeNode();
        //TreeNode* root = new TreeNode(nums[mid]);
        root->val=nums[mid];
        //TreeNode *root=new newNode(nums[mid]);
        root->left=sortedArrayhelp(nums,start,mid-1);
        root->right=sortedArrayhelp(nums,mid+1,end);
        return root;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int start=0;
        int end=nums.size();
        return sortedArrayhelp(nums,start,end-1);
        
    }
};