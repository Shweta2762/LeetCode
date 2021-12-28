class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ree;
        for(int i=0;i<m;i++)
        {
            ree.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++)
            ree.push_back(nums2[i]);
        sort(ree.begin(),ree.end());
        for(int i=0;i<(n+m);i++)
            nums1[i]=ree[i];
        
    }
};