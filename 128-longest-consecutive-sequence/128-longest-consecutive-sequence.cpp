class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        // return nums[1];
        vector<int>ree;
        int Currcount=1;
        int lonCount=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                if(nums[i]==nums[i-1]+1)
                    Currcount++;
                else
                {
                    lonCount=max(Currcount,lonCount);
                    Currcount=1;
                }
            }
        }
        return max(lonCount,Currcount);
        
    }
};