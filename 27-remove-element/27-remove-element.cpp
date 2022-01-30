class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
//         int count=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]!=val)
//                 count=count+1;
//         }
//         int arr[count];
//         int j=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]!=val)
//             {
//                 arr[j]=nums[i];
//                 j=j+1;
//             }
//         }
//         return count;
            return std::distance(nums.begin(), std::remove(nums.begin(), nums.end(), val));
        
    }
};