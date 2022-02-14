class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*vector<int> arr;
        int count=0;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==nums[i+1])
                count=count+1;
            else
                arr.push_back(nums[i]);
        }
        for(int i=0;i<arr.size();i++)
            nums[i]=arr[i];*/
        /*int n=arr.size();
        int arree[n];
        for(int i=0;i<arr.size();i++)
            arree[i]=arr[i];
        return arree;*/
        //return nums;
        vector<int>::iterator it;
        it=unique(nums.begin(), nums.end()); 
        return distance(nums.begin(),it);
    }
};