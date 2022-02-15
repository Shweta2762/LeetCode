class Solution {
public:
    vector<vector<int>>ans;
    void ok(int x, vector<int>& ree,vector<int>& nums)
    {
        ans.push_back(ree);
        for(int i=x;i<nums.size();i++)
        {
            ree.push_back(nums[i]);
            ok(i+1,ree,nums);
            ree.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int> ree;
        ok(0,ree,nums);
        return ans;
        
    }
};