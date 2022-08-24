class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++)
            nums1.push_back(nums2[i]);
        int n=nums1.size();
        sort(nums1.begin(),nums1.end());
        if(n%2!=0)
            return nums1[n/2];
        else
            return double(nums1[n/2]+nums1[n/2-0.5])/2;
    }
};