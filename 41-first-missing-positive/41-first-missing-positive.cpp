class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==0)
            return 1;
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i]>0 && nums[i]<=n && nums[nums[i]-1]!=nums[i])
            {
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i+1)
                return i+1;
        }
        return n+1;
        // bool isOne=false;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++)
        // {if(nums[i]+1!=nums[i+1])
        // {
        //     if(nums[i]+1!=0 and !isOne)
        //         return nums[i]+1;
        //     if(nums[i]==1)
        //     {
        //         isOne=true;
        //     }
        //     // else
        //     //     return nums[i]+1;
        // }
        // }
        return -1;
//         sort(nums.begin(),nums.end());
//         int ree=-1;
//         for(int i=0;i<nums.size()-1;i++)
//         {
//             if(nums[i]>0)
//             {
//                 if(nums[i]+1<nums[i+1])
//                     ree=nums[i]+1;break;
//             }
//         }
//         int n=nums.size();
//         if(ree>)
//         return nums[n-1]+1;
        
    }
};