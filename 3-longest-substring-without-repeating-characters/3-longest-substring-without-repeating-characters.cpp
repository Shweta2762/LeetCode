class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>rec(256,-1);
        int n=s.length();
        int start=-1;
        int maxLen=0;
        for(int i=0;i<n;i++)
        {
            if(start<rec[s[i]])
                start=rec[s[i]];
            rec[s[i]]=i;
            maxLen=max(maxLen,i-start);
        }
        return maxLen;
    }
};