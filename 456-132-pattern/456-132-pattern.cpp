class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        // for(int i=0;i<nums.size()-3;i++)
        // {
        //     if(nums[i]<nums[i+1])
        //     {
        //         if(nums[i+1]>nums[i+2])
        //             return true;
        //     }
        // }
        // return false;
                int ak = numeric_limits<int>::min();
        stack<int> st;
        for (int i = nums.size() - 1; i >= 0; --i) {
            if (nums[i] < ak) {
                return true;
            } else {
                while (!st.empty() && nums[i] > st.top()) {
                    ak = st.top(), st.pop(); 
                }
            }
            st.emplace(nums[i]);
        }
        return false;
        
    }
};